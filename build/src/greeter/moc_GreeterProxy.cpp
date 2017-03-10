/****************************************************************************
** Meta object code from reading C++ file 'GreeterProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/greeter/GreeterProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GreeterProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__GreeterProxy_t {
    QByteArrayData data[30];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__GreeterProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__GreeterProxy_t qt_meta_stringdata_SDDM__GreeterProxy = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SDDM::GreeterProxy"
QT_MOC_LITERAL(1, 19, 15), // "hostNameChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "hostName"
QT_MOC_LITERAL(4, 45, 18), // "canPowerOffChanged"
QT_MOC_LITERAL(5, 64, 11), // "canPowerOff"
QT_MOC_LITERAL(6, 76, 16), // "canRebootChanged"
QT_MOC_LITERAL(7, 93, 9), // "canReboot"
QT_MOC_LITERAL(8, 103, 17), // "canSuspendChanged"
QT_MOC_LITERAL(9, 121, 10), // "canSuspend"
QT_MOC_LITERAL(10, 132, 19), // "canHibernateChanged"
QT_MOC_LITERAL(11, 152, 12), // "canHibernate"
QT_MOC_LITERAL(12, 165, 21), // "canHybridSleepChanged"
QT_MOC_LITERAL(13, 187, 14), // "canHybridSleep"
QT_MOC_LITERAL(14, 202, 11), // "loginFailed"
QT_MOC_LITERAL(15, 214, 14), // "loginSucceeded"
QT_MOC_LITERAL(16, 229, 8), // "powerOff"
QT_MOC_LITERAL(17, 238, 6), // "reboot"
QT_MOC_LITERAL(18, 245, 7), // "suspend"
QT_MOC_LITERAL(19, 253, 9), // "hibernate"
QT_MOC_LITERAL(20, 263, 11), // "hybridSleep"
QT_MOC_LITERAL(21, 275, 9), // "veinLogin"
QT_MOC_LITERAL(22, 285, 12), // "sessionIndex"
QT_MOC_LITERAL(23, 298, 5), // "login"
QT_MOC_LITERAL(24, 304, 4), // "user"
QT_MOC_LITERAL(25, 309, 8), // "password"
QT_MOC_LITERAL(26, 318, 9), // "connected"
QT_MOC_LITERAL(27, 328, 12), // "disconnected"
QT_MOC_LITERAL(28, 341, 9), // "readyRead"
QT_MOC_LITERAL(29, 351, 5) // "error"

    },
    "SDDM::GreeterProxy\0hostNameChanged\0\0"
    "hostName\0canPowerOffChanged\0canPowerOff\0"
    "canRebootChanged\0canReboot\0canSuspendChanged\0"
    "canSuspend\0canHibernateChanged\0"
    "canHibernate\0canHybridSleepChanged\0"
    "canHybridSleep\0loginFailed\0loginSucceeded\0"
    "powerOff\0reboot\0suspend\0hibernate\0"
    "hybridSleep\0veinLogin\0sessionIndex\0"
    "login\0user\0password\0connected\0"
    "disconnected\0readyRead\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__GreeterProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       6,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       6,    1,  115,    2, 0x06 /* Public */,
       8,    1,  118,    2, 0x06 /* Public */,
      10,    1,  121,    2, 0x06 /* Public */,
      12,    1,  124,    2, 0x06 /* Public */,
      14,    0,  127,    2, 0x06 /* Public */,
      15,    0,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  129,    2, 0x0a /* Public */,
      17,    0,  130,    2, 0x0a /* Public */,
      18,    0,  131,    2, 0x0a /* Public */,
      19,    0,  132,    2, 0x0a /* Public */,
      20,    0,  133,    2, 0x0a /* Public */,
      21,    1,  134,    2, 0x0a /* Public */,
      23,    3,  137,    2, 0x0a /* Public */,
      26,    0,  144,    2, 0x08 /* Private */,
      27,    0,  145,    2, 0x08 /* Private */,
      28,    0,  146,    2, 0x08 /* Private */,
      29,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   24,   25,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495001,
      13, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void SDDM::GreeterProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GreeterProxy *_t = static_cast<GreeterProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hostNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->canPowerOffChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canRebootChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canSuspendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canHibernateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->canHybridSleepChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loginFailed(); break;
        case 7: _t->loginSucceeded(); break;
        case 8: _t->powerOff(); break;
        case 9: _t->reboot(); break;
        case 10: _t->suspend(); break;
        case 11: _t->hibernate(); break;
        case 12: _t->hybridSleep(); break;
        case 13: _t->veinLogin((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->login((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 15: _t->connected(); break;
        case 16: _t->disconnected(); break;
        case 17: _t->readyRead(); break;
        case 18: _t->error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GreeterProxy::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::hostNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::canPowerOffChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::canRebootChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::canSuspendChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::canHibernateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::canHybridSleepChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::loginFailed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (GreeterProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GreeterProxy::loginSucceeded)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GreeterProxy *_t = static_cast<GreeterProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canPowerOff(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canReboot(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canSuspend(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->canHibernate(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canHybridSleep(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SDDM::GreeterProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__GreeterProxy.data,
      qt_meta_data_SDDM__GreeterProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::GreeterProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::GreeterProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__GreeterProxy.stringdata0))
        return static_cast<void*>(const_cast< GreeterProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::GreeterProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SDDM::GreeterProxy::hostNameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SDDM::GreeterProxy::canPowerOffChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SDDM::GreeterProxy::canRebootChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SDDM::GreeterProxy::canSuspendChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SDDM::GreeterProxy::canHibernateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SDDM::GreeterProxy::canHybridSleepChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SDDM::GreeterProxy::loginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void SDDM::GreeterProxy::loginSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
