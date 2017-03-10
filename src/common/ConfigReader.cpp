/*
 * INI Configuration parser classes
 * Copyright (C) 2014 Martin Bříza <mbriza@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#include "ConfigReader.h"
#include <QtCore/QFile>

#include <QtCore/QFile>
#include <QtCore/QDebug>
#include <QtCore/QSettings>
#include <QtCore/QMap>
#include <QtCore/QBuffer>
#include <QtCore/QFileInfo>

QTextStream &operator>>(QTextStream &str, QStringList &list)  {
    list.clear();

    QString line = str.readLine();

    Q_FOREACH (const QStringRef &s, line.splitRef(QLatin1Char(','))) {
        QStringRef trimmed = s.trimmed();
        if (!trimmed.isEmpty())
            list.append(trimmed.toString());
    }

    return str;
}

QTextStream &operator<<(QTextStream &str, const QStringList &list) {
    str << list.join(QLatin1Char(','));
    return str;
}

QTextStream &operator>>(QTextStream &str, bool &val) {
    QString line = str.readLine();
    val = (0 == QStringRef(&line).trimmed().compare(QLatin1String("true"), Qt::CaseInsensitive));
    return str;
}

QTextStream &operator<<(QTextStream &str, const bool &val) {
    if (val)
        str << "true";
    else
        str << "false";
    return str;
}

namespace SDDM {
    // has to be specialised because QTextStream reads only words into a QString
    template <> void ConfigEntry<QString>::setValue(const QString &str) {
        m_value = str.trimmed();
    }


    ConfigSection::ConfigSection(ConfigBase *parent, const QString &name) : m_parent(parent),
        m_name(name) {
        m_parent->m_sections.insert(name, this);
    }

    ConfigEntryBase *ConfigSection::entry(const QString &name) {
        auto it = m_entries.find(name);
        if (it != m_entries.end())
            return it.value();
        return nullptr;
    }

    const ConfigEntryBase *ConfigSection::entry(const QString &name) const {
        auto it = m_entries.find(name);
        if (it != m_entries.end())
            return it.value();
        return nullptr;
    }

    const QMap<QString, ConfigEntryBase*> &ConfigSection::entries() const {
        return m_entries;
    }


    const QString &ConfigSection::name() const {
        return m_name;
    }

    void ConfigSection::save(ConfigEntryBase *entry) {
        m_parent->save(this, entry);
    }

    QString ConfigSection::toConfigFull() const {
        QString final = QStringLiteral("[%1]\n").arg(m_name);
        for (const ConfigEntryBase *entry : m_entries)
            final.append(entry->toConfigFull());
        return final;
    }

    QString ConfigSection::toConfigShort() const {
        return QStringLiteral("[%1]").arg(name());
    }



    ConfigBase::ConfigBase(const QString &configPath) : m_path(configPath) {
    }

    const QString &ConfigBase::path() const {
        return m_path;
    }

    bool ConfigBase::hasUnused() const {
        return m_unusedSections || m_unusedVariables;
    }

    QString ConfigBase::toConfigFull() const {
        QString ret;
        for (ConfigSection *s : m_sections) {
            ret.append(s->toConfigFull());
            ret.append(QLatin1Char('\n'));
        }
        return ret;
    }

    void ConfigBase::load() {
        // first check if there's at least anything to read, otherwise stick to default values
        if (!QFile::exists(m_path))
            return;

        QString currentSection = QStringLiteral(IMPLICIT_SECTION);

        QFile in(m_path);
        QDateTime modificationTime = QFileInfo(in).lastModified();
        if (modificationTime <= m_fileModificationTime) {
            return;
        }
        m_fileModificationTime = modificationTime;

        in.open(QIODevice::ReadOnly);
        while (!in.atEnd()) {
            QString line = QString::fromUtf8(in.readLine());
            QStringRef lineRef = QStringRef(&line).trimmed();
            // get rid of comments first
            lineRef = lineRef.left(lineRef.indexOf(QLatin1Char('#'))).trimmed();

            // value assignment
            int separatorPosition = lineRef.indexOf(QLatin1Char('='));
            if (separatorPosition >= 0) {
                QString name = lineRef.left(separatorPosition).trimmed().toString();
                QStringRef value = lineRef.mid(separatorPosition + 1).trimmed();

                auto sectionIterator = m_sections.constFind(currentSection);
                if (sectionIterator != m_sections.constEnd() && sectionIterator.value()->entry(name))
                    sectionIterator.value()->entry(name)->setValue(value.toString());
                else
                    // if we don't have such member in the config, nag about it
                    m_unusedVariables = true;
            }
            // section start
            else if (lineRef.startsWith(QLatin1Char('[')) && lineRef.endsWith(QLatin1Char(']')))
                currentSection = lineRef.mid(1, lineRef.length() - 2).toString();
        }
    }

    void ConfigBase::save(const ConfigSection *section, const ConfigEntryBase *entry) {
        // to know if we should overwrite the config or not
        bool changed = false;
        // stores the order of the loaded sections
        // each one could be there only once - if it occurs more times in the config, the occurrences are merged
        QVector<const ConfigSection*> sectionOrder;
        // the actual bytearray data for every section
        QMap<const ConfigSection*, QByteArray> sectionData;
        // map of nondefault entries which should be saved if they are not found in the current config file
        QMultiMap<const ConfigSection*, const ConfigEntryBase*> remainingEntries;


        /*
         * Initialization of the map of nondefault values to be saved
         */
        if (section) {
            if (entry && !entry->matchesDefault())
                remainingEntries.insert(section, entry);
            else
                for (const ConfigEntryBase *b : section->entries().values())
                    if (!b->matchesDefault())
                        remainingEntries.insert(section, b);
        }
        else {
            for (const ConfigSection *s : m_sections)
                for (const ConfigEntryBase *b : s->entries().values())
                    if (!b->matchesDefault())
                        remainingEntries.insert(s, b);
        }

        // initialize the current section - General, usually
        const ConfigSection *currentSection = m_sections.value(QStringLiteral(IMPLICIT_SECTION));

        // stuff to store the pre-section stuff (comments) to the start of the right section, not the end of the previous one
        QByteArray junk;
        // stores the junk to the temporary storage
        auto collectJunk = [&junk](const QString &data) {
            junk.append(data);
        };

        // a short function to assign the current junk and current line to the right section, eventually create a new one
        auto writeSectionData = [&currentSection, &junk, &sectionOrder, &sectionData](const QString &data) {
            if (currentSection && !sectionOrder.contains(currentSection)) {
                sectionOrder.append(currentSection);
                sectionData[currentSection] = QByteArray();
            }
            sectionData[currentSection].append(junk);
            sectionData[currentSection].append(data);
            junk.clear();
        };

        // loading and checking phase
        QFile file(m_path);
        file.open(QIODevice::ReadOnly); // first just for reading
        while (!file.atEnd()) {
            const QString line = QString::fromUtf8(file.readLine());
            // get rid of comments first
            QStringRef trimmedLine = line.leftRef(line.indexOf(QLatin1Char('#'))).trimmed();
            QStringRef comment;
            if (line.indexOf(QLatin1Char('#')) >= 0)
                comment = line.midRef(line.indexOf(QLatin1Char('#'))).trimmed();

            // value assignment
            int separatorPosition = trimmedLine.indexOf(QLatin1Char('='));
            if (separatorPosition >= 0) {
                QString name = trimmedLine.left(separatorPosition).trimmed().toString();
                QStringRef value = trimmedLine.mid(separatorPosition + 1).trimmed();

                if (currentSection && currentSection->entry(name)) {
                    // this monstrous condition checks the parameters if only one entry/section should be saved
                    if ((entry && section && section->name() == currentSection->name() && entry->name() == name) ||
                        (!entry && section && section->name() == currentSection->name()) ||
                        value != currentSection->entry(name)->value()) {
                        changed = true;
                        writeSectionData(QStringLiteral("%1=%2 %3\n").arg(name).arg(currentSection->entry(name)->value()).arg(comment.toString()));
                    }
                    else
                        writeSectionData(line);
                    remainingEntries.remove(currentSection, currentSection->entry(name));
                }
                else {
                    if (currentSection)
                        m_unusedVariables = true;
                    writeSectionData(QStringLiteral("%1 %2\n").arg(trimmedLine.toString()).arg(QStringLiteral(UNUSED_VARIABLE_COMMENT)));
                }
            }

            // section start
            else if (trimmedLine.startsWith(QLatin1Char('[')) && trimmedLine.endsWith(QLatin1Char(']'))) {
                const QString name = trimmedLine.mid(1, trimmedLine.length() - 2).toString();
                auto sectionIterator = m_sections.constFind(name);
                if (sectionIterator != m_sections.constEnd()) {
                    currentSection = sectionIterator.value();
                    if (!sectionOrder.contains(currentSection))
                        writeSectionData(line);
                }
                else {
                    m_unusedSections = true;
                    currentSection = nullptr;
                    writeSectionData(line);
                }
            }

            // other stuff, like comments and whatnot
            else {
                if (line != QStringLiteral(UNUSED_SECTION_COMMENT))
                    collectJunk(line);
            }
        }
        file.close();

        for (auto it = remainingEntries.begin(); it != remainingEntries.end(); it++) {
            changed = true;
            currentSection = it.key();
            if (!sectionOrder.contains(currentSection))
                writeSectionData(currentSection->toConfigShort());
            writeSectionData(QStringLiteral("\n"));
            writeSectionData(it.value()->toConfigFull());
        }

        // rewrite the whole thing only if there are changes
        if (changed) {
            file.open(QIODevice::WriteOnly | QIODevice::Truncate);
            for (const ConfigSection *s : sectionOrder)
                file.write(sectionData.value(s));

            if (sectionData.contains(nullptr)) {
                file.write("\n");
                file.write(UNUSED_SECTION_COMMENT);
                file.write(sectionData.value(nullptr).trimmed());
                file.write("\n");
            }
        }
    }
}
