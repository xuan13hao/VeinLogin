/***************************************************************************
* Copyright (c) 2015-2016 Pier Luigi Fiorini <pierluigi.fiorini@gmail.com>
* Copyright (c) 2013 Abdurrahman AVCI <abdurrahmanavci@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the
* Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
***************************************************************************/

#include "SessionModel.h"

#include "Configuration.h"

#include <QVector>
#include <QProcessEnvironment>
#include <QFileSystemWatcher>

namespace SDDM {
    class SessionModelPrivate {
    public:
        ~SessionModelPrivate() {
            qDeleteAll(sessions);
            sessions.clear();
        }

        int lastIndex { 0 };
        QVector<Session *> sessions;
    };

    SessionModel::SessionModel(QObject *parent) : QAbstractListModel(parent), d(new SessionModelPrivate()) {
        // initial population
        beginResetModel();
        populate(Session::X11Session, mainConfig.X11.SessionDir.get());
        populate(Session::WaylandSession, mainConfig.Wayland.SessionDir.get());
        endResetModel();

        // refresh everytime a file is changed, added or removed
        QFileSystemWatcher *watcher = new QFileSystemWatcher(this);
        connect(watcher, &QFileSystemWatcher::directoryChanged, [this](const QString &path) {
            beginResetModel();
            d->sessions.clear();
            populate(Session::X11Session, mainConfig.X11.SessionDir.get());
            populate(Session::WaylandSession, mainConfig.Wayland.SessionDir.get());
            endResetModel();
        });
        watcher->addPath(mainConfig.X11.SessionDir.get());
        watcher->addPath(mainConfig.Wayland.SessionDir.get());
    }

    SessionModel::~SessionModel() {
        delete d;
    }

    QHash<int, QByteArray> SessionModel::roleNames() const {
        // set role names
        QHash<int, QByteArray> roleNames;
        roleNames[DirectoryRole] = QByteArrayLiteral("directory");
        roleNames[FileRole] = QByteArrayLiteral("file");
        roleNames[TypeRole] = QByteArrayLiteral("type");
        roleNames[NameRole] = QByteArrayLiteral("name");
        roleNames[ExecRole] = QByteArrayLiteral("exec");
        roleNames[CommentRole] = QByteArrayLiteral("comment");

        return roleNames;
    }

    const int SessionModel::lastIndex() const {
        return d->lastIndex;
    }

    int SessionModel::rowCount(const QModelIndex &parent) const {
        return d->sessions.length();
    }

    QVariant SessionModel::data(const QModelIndex &index, int role) const {
        if (index.row() < 0 || index.row() >= d->sessions.count())
            return QVariant();

        // get session
        Session *session = d->sessions[index.row()];

        // return correct value
        switch (role) {
        case DirectoryRole:
            return session->directory().absolutePath();
        case FileRole:
            return session->fileName();
        case TypeRole:
            return session->type();
        case NameRole:
            return session->displayName();
        case ExecRole:
            return session->exec();
        case CommentRole:
            return session->comment();
        default:
            break;
        }

        // return empty value
        return QVariant();
    }

    void SessionModel::populate(Session::Type type, const QString &path) {
        // read session files
        QDir dir(path);
        dir.setNameFilters(QStringList() << QStringLiteral("*.desktop"));
        dir.setFilter(QDir::Files);
        // read session
        foreach(const QString &session, dir.entryList()) {
            if (!dir.exists(session))
                continue;

            Session *si = new Session(type, session);
            bool execAllowed = true;
            QFileInfo fi(si->tryExec());
            if (fi.isAbsolute()) {
                if (!fi.exists() || !fi.isExecutable())
                    execAllowed = false;
            } else {
                execAllowed = false;
                QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
                QString envPath = env.value(QStringLiteral("PATH"));
                QStringList pathList = envPath.split(QLatin1Char(':'));
                foreach(const QString &path, pathList) {
                    QDir pathDir(path);
                    fi.setFile(pathDir, si->tryExec());
                    if (fi.exists() && fi.isExecutable()) {
                        execAllowed = true;
                        break;
                    }
                }
            }
            // add to sessions list
            if (execAllowed)
                d->sessions.push_back(si);
            else
                delete si;
        }
        // find out index of the last session
        for (int i = 0; i < d->sessions.size(); ++i) {
            if (d->sessions.at(i)->fileName() == stateConfig.Last.Session.get()) {
                d->lastIndex = i;
                break;
            }
        }
    }
}
