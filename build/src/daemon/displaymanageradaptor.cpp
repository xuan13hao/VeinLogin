/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: 
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "displaymanageradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DisplayManagerAdaptor
 */

DisplayManagerAdaptor::DisplayManagerAdaptor(SDDM::DisplayManager *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DisplayManagerAdaptor::~DisplayManagerAdaptor()
{
    // destructor
}

QList<QDBusObjectPath> DisplayManagerAdaptor::seats() const
{
    // get the value of property Seats
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("Seats"));
}

QList<QDBusObjectPath> DisplayManagerAdaptor::sessions() const
{
    // get the value of property Sessions
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("Sessions"));
}


#include "displaymanageradaptor.moc"