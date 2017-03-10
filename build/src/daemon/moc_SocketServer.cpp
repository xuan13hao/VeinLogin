/****************************************************************************
** Meta object code from reading C++ file 'SocketServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/SocketServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocketServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__SocketServer_t {
    QByteArrayData data[15];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__SocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__SocketServer_t qt_meta_stringdata_SDDM__SocketServer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SDDM::SocketServer"
QT_MOC_LITERAL(1, 19, 5), // "login"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "QLocalSocket*"
QT_MOC_LITERAL(4, 40, 6), // "socket"
QT_MOC_LITERAL(5, 47, 4), // "user"
QT_MOC_LITERAL(6, 52, 8), // "password"
QT_MOC_LITERAL(7, 61, 7), // "Session"
QT_MOC_LITERAL(8, 69, 7), // "session"
QT_MOC_LITERAL(9, 77, 9), // "connected"
QT_MOC_LITERAL(10, 87, 9), // "veinLogin"
QT_MOC_LITERAL(11, 97, 13), // "newConnection"
QT_MOC_LITERAL(12, 111, 9), // "readyRead"
QT_MOC_LITERAL(13, 121, 11), // "loginFailed"
QT_MOC_LITERAL(14, 133, 14) // "loginSucceeded"

    },
    "SDDM::SocketServer\0login\0\0QLocalSocket*\0"
    "socket\0user\0password\0Session\0session\0"
    "connected\0veinLogin\0newConnection\0"
    "readyRead\0loginFailed\0loginSucceeded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__SocketServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       9,    0,   58,    2, 0x06 /* Public */,
      10,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,
      13,    1,   66,    2, 0x08 /* Private */,
      14,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    4,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SDDM::SocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketServer *_t = static_cast<SocketServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const Session(*)>(_a[4]))); break;
        case 1: _t->connected(); break;
        case 2: _t->veinLogin((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const Session(*)>(_a[2]))); break;
        case 3: _t->newConnection(); break;
        case 4: _t->readyRead(); break;
        case 5: _t->loginFailed((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 6: _t->loginSucceeded((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketServer::*_t)(QLocalSocket * , const QString & , const QString & , const Session & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketServer::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SocketServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketServer::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SocketServer::*_t)(QLocalSocket * , const Session & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketServer::veinLogin)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SDDM::SocketServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__SocketServer.data,
      qt_meta_data_SDDM__SocketServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::SocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::SocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__SocketServer.stringdata0))
        return static_cast<void*>(const_cast< SocketServer*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::SocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SDDM::SocketServer::login(QLocalSocket * _t1, const QString & _t2, const QString & _t3, const Session & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SDDM::SocketServer::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SDDM::SocketServer::veinLogin(QLocalSocket * _t1, const Session & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
