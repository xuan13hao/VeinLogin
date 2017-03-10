/****************************************************************************
** Meta object code from reading C++ file 'DisplayManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/DisplayManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisplayManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__DisplayManager_t {
    QByteArrayData data[18];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__DisplayManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__DisplayManager_t qt_meta_stringdata_SDDM__DisplayManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SDDM::DisplayManager"
QT_MOC_LITERAL(1, 21, 9), // "SeatAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "ObjectPath"
QT_MOC_LITERAL(4, 43, 4), // "seat"
QT_MOC_LITERAL(5, 48, 11), // "SeatRemoved"
QT_MOC_LITERAL(6, 60, 12), // "SessionAdded"
QT_MOC_LITERAL(7, 73, 7), // "session"
QT_MOC_LITERAL(8, 81, 14), // "SessionRemoved"
QT_MOC_LITERAL(9, 96, 7), // "AddSeat"
QT_MOC_LITERAL(10, 104, 4), // "name"
QT_MOC_LITERAL(11, 109, 10), // "RemoveSeat"
QT_MOC_LITERAL(12, 120, 10), // "AddSession"
QT_MOC_LITERAL(13, 131, 4), // "user"
QT_MOC_LITERAL(14, 136, 13), // "RemoveSession"
QT_MOC_LITERAL(15, 150, 5), // "Seats"
QT_MOC_LITERAL(16, 156, 22), // "QList<QDBusObjectPath>"
QT_MOC_LITERAL(17, 179, 8) // "Sessions"

    },
    "SDDM::DisplayManager\0SeatAdded\0\0"
    "ObjectPath\0seat\0SeatRemoved\0SessionAdded\0"
    "session\0SessionRemoved\0AddSeat\0name\0"
    "RemoveSeat\0AddSession\0user\0RemoveSession\0"
    "Seats\0QList<QDBusObjectPath>\0Sessions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__DisplayManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    3,   72,    2, 0x0a /* Public */,
      14,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,    4,   13,
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00095409,
      17, 0x80000000 | 16, 0x00095409,

       0        // eod
};

void SDDM::DisplayManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayManager *_t = static_cast<DisplayManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SeatAdded((*reinterpret_cast< ObjectPath(*)>(_a[1]))); break;
        case 1: _t->SeatRemoved((*reinterpret_cast< ObjectPath(*)>(_a[1]))); break;
        case 2: _t->SessionAdded((*reinterpret_cast< ObjectPath(*)>(_a[1]))); break;
        case 3: _t->SessionRemoved((*reinterpret_cast< ObjectPath(*)>(_a[1]))); break;
        case 4: _t->AddSeat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->RemoveSeat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->AddSession((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->RemoveSession((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DisplayManager::*_t)(ObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayManager::SeatAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DisplayManager::*_t)(ObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayManager::SeatRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DisplayManager::*_t)(ObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayManager::SessionAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DisplayManager::*_t)(ObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayManager::SessionRemoved)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DisplayManager *_t = static_cast<DisplayManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->Seats(); break;
        case 1: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->Sessions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SDDM::DisplayManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__DisplayManager.data,
      qt_meta_data_SDDM__DisplayManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::DisplayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::DisplayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__DisplayManager.stringdata0))
        return static_cast<void*>(const_cast< DisplayManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::DisplayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SDDM::DisplayManager::SeatAdded(ObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SDDM::DisplayManager::SeatRemoved(ObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SDDM::DisplayManager::SessionAdded(ObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SDDM::DisplayManager::SessionRemoved(ObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_SDDM__DisplayManagerSeat_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__DisplayManagerSeat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__DisplayManagerSeat_t qt_meta_stringdata_SDDM__DisplayManagerSeat = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SDDM::DisplayManagerSeat"
QT_MOC_LITERAL(1, 25, 9), // "CanSwitch"
QT_MOC_LITERAL(2, 35, 15), // "HasGuestAccount"
QT_MOC_LITERAL(3, 51, 8), // "Sessions"
QT_MOC_LITERAL(4, 60, 22) // "QList<QDBusObjectPath>"

    },
    "SDDM::DisplayManagerSeat\0CanSwitch\0"
    "HasGuestAccount\0Sessions\0"
    "QList<QDBusObjectPath>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__DisplayManagerSeat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,
       2, QMetaType::Bool, 0x00095401,
       3, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void SDDM::DisplayManagerSeat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DisplayManagerSeat *_t = static_cast<DisplayManagerSeat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->CanSwitch(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->HasGuestAccount(); break;
        case 2: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->Sessions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject SDDM::DisplayManagerSeat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__DisplayManagerSeat.data,
      qt_meta_data_SDDM__DisplayManagerSeat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::DisplayManagerSeat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::DisplayManagerSeat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__DisplayManagerSeat.stringdata0))
        return static_cast<void*>(const_cast< DisplayManagerSeat*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::DisplayManagerSeat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SDDM__DisplayManagerSession_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__DisplayManagerSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__DisplayManagerSession_t qt_meta_stringdata_SDDM__DisplayManagerSession = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SDDM::DisplayManagerSession"
QT_MOC_LITERAL(1, 28, 4), // "Seat"
QT_MOC_LITERAL(2, 33, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(3, 49, 8) // "UserName"

    },
    "SDDM::DisplayManagerSession\0Seat\0"
    "QDBusObjectPath\0UserName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__DisplayManagerSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, QMetaType::QString, 0x00095001,

       0        // eod
};

void SDDM::DisplayManagerSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DisplayManagerSession *_t = static_cast<DisplayManagerSession *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->SeatPath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->User(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject SDDM::DisplayManagerSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__DisplayManagerSession.data,
      qt_meta_data_SDDM__DisplayManagerSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::DisplayManagerSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::DisplayManagerSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__DisplayManagerSession.stringdata0))
        return static_cast<void*>(const_cast< DisplayManagerSession*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::DisplayManagerSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
