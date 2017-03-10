/*
 * Configuration parser tests
 * Copyright (C) 2014 Martin Bříza <mbriza@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "ConfigurationTest.h"
#include <QtCore/QFile>

#include <QtTest/QtTest>
#include <QtCore/QFile>
#include <QtCore/QDir>

QTEST_MAIN(ConfigurationTest);

void ConfigurationTest::initTestCase() { }

void ConfigurationTest::cleanupTestCase() { }

void ConfigurationTest::init() {
    QFile::remove(CONF_FILE);
    QFile::remove(CONF_FILE_COPY);
    config = new TestConfig;
}

void ConfigurationTest::cleanup() {
    QFile::remove(CONF_FILE);
    QFile::remove(CONF_FILE_COPY);
    if (config)
        delete config;
    config = nullptr;
}

void ConfigurationTest::Basic() {
    QVERIFY(config->String.get() == TEST_STRING_1);
    QVERIFY(config->Int.get() == TEST_INT_1);
    QVERIFY(config->StringList.get() == QStringList(TEST_STRINGLIST_1));
    QVERIFY(config->Boolean.get() == TEST_BOOL_1);
    config->save();
    QVERIFY(!QFile::exists(CONF_FILE));
    config->String.set(config->String.get().append(QStringLiteral(" Appended")));
    config->save();
    QVERIFY(QFile::exists(CONF_FILE));
    config->String.set(config->String.get().append(QStringLiteral(" Appended Again")));
    config->save();
    QVERIFY(QFile::exists(CONF_FILE));
}

void ConfigurationTest::Sections() {
    QVERIFY(config->Section.String.get() == TEST_STRING_1);
    QVERIFY(config->Section.Int.get() == TEST_INT_1);
    QVERIFY(config->Section.StringList.get() == QStringList(TEST_STRINGLIST_1));
    QVERIFY(config->Section.Boolean.get() == TEST_BOOL_1);
    config->save();
    QVERIFY(!QFile::exists(CONF_FILE));
    config->Section.String.set(config->Section.String.get().append(QStringLiteral(" Appended")));
    config->save();
    QVERIFY(QFile::exists(CONF_FILE));
    config->Section.String.set(config->Section.String.get().append(QStringLiteral(" Appended Again")));
    config->save();
    QVERIFY(QFile::exists(CONF_FILE));
}

void ConfigurationTest::Unused() {
    QFile confFile(CONF_FILE);
    QFile confCopy(CONF_FILE_COPY);
    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("InvalidGeneralValue=(null)\n");
    confFile.write("#InvalidSection Comment\n");
    confFile.write("[InvalidSection]\n");
    confFile.write("BadSectionValue=0\n");
    confFile.close();
    config->load();
    config->String.set(QStringLiteral("Changed String"));
    config->Section.String.set(QStringLiteral("Changed String"));
    config->save();
    QFile::copy(CONF_FILE, CONF_FILE_COPY);
    config->load();
    config->save();
    QVERIFY(confFile.open(QIODevice::ReadOnly));
    QVERIFY(confCopy.open(QIODevice::ReadOnly));
    // the file must not change on consecutive loads and reads
    QByteArray contents = confFile.readAll();
    QVERIFY(contents == confCopy.readAll());
    QVERIFY(contents.contains("InvalidGeneralValue"));
    QVERIFY(contents.contains("InvalidSection"));
    QVERIFY(contents.contains("BadSectionValue"));
}

void ConfigurationTest::LineChanges() {
    QFile confFile(CONF_FILE);
    QFile confCopy(CONF_FILE_COPY);
    // put some junk there to make it a bit harder to parse
    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("InvalidGeneralValue=(null)\n");
    confFile.close();
    // assuming the integers will be of the same length when saved
    config->Int.set(1);
    config->save();
    QFile::copy(CONF_FILE, CONF_FILE_COPY);
    config->Int.set(2);
    config->save();
    QVERIFY(confFile.size() == confCopy.size());
}

void ConfigurationTest::CustomEnum() {
    QFile confFile(CONF_FILE);
    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("Custom=bar\n");
    confFile.close();
    QVERIFY(config->Custom.get() == TestConfig::FOO);
    config->load();
    QVERIFY(config->Custom.get() == TestConfig::BAR);
    config->Custom.set(TestConfig::BAZ);
    config->save();
    QVERIFY(confFile.open(QIODevice::ReadOnly));
    QByteArray contents = confFile.readAll();
    QVERIFY(contents.contains("baz"));
    QVERIFY(!contents.contains("bar"));
    QVERIFY(!contents.contains("foo"));
}

void ConfigurationTest::RightOnInit() {
    delete config;
    QFile confFile(CONF_FILE);
    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("String=a\n");
    confFile.write("Int=99999\n");
    confFile.write("StringList=a,b,c,qwertzuiop\n");
    confFile.write("Boolean=false\n");
    confFile.write("Custom=null\n");
    confFile.close();
    config = new TestConfig;
    QVERIFY(config->String.get() == QStringLiteral("a"));
    QVERIFY(config->Int.get() == 99999);
    QVERIFY(config->StringList.get() == QStringList({QStringLiteral("a"), QStringLiteral("b"), QStringLiteral("c"), QStringLiteral("qwertzuiop")}));
    QVERIFY(config->Boolean.get() == false);
    QVERIFY(config->Custom.get() == TestConfig::BAZ);
}

void ConfigurationTest::FileChanged()
{
    QVERIFY(config->String.get() == QStringLiteral("Test Variable Initial String"));

    //test from no file to a file
    QFile confFile(CONF_FILE);
    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("String=a\n");
    confFile.close();

    config->load();
    QVERIFY(config->String.get() == QStringLiteral("a"));

    //test file changed
    //wait 2 seconds so timestamp is definitely 1 second apart
    QTest::qWait(2000);

    confFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    confFile.write("String=b\n");
    confFile.close();

    config->load();
    QVERIFY(config->String.get() == QStringLiteral("b"));
}

#include "moc_ConfigurationTest.cpp"
