/****************************************************************************
** Meta object code from reading C++ file 'Display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/Display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__Display_t {
    QByteArrayData data[31];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__Display_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__Display_t qt_meta_stringdata_SDDM__Display = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SDDM::Display"
QT_MOC_LITERAL(1, 14, 7), // "stopped"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "loginFailed"
QT_MOC_LITERAL(4, 35, 13), // "QLocalSocket*"
QT_MOC_LITERAL(5, 49, 6), // "socket"
QT_MOC_LITERAL(6, 56, 14), // "loginSucceeded"
QT_MOC_LITERAL(7, 71, 5), // "start"
QT_MOC_LITERAL(8, 77, 4), // "stop"
QT_MOC_LITERAL(9, 82, 9), // "veinLogin"
QT_MOC_LITERAL(10, 92, 7), // "Session"
QT_MOC_LITERAL(11, 100, 7), // "session"
QT_MOC_LITERAL(12, 108, 5), // "login"
QT_MOC_LITERAL(13, 114, 4), // "user"
QT_MOC_LITERAL(14, 119, 8), // "password"
QT_MOC_LITERAL(15, 128, 16), // "attemptAutologin"
QT_MOC_LITERAL(16, 145, 20), // "displayServerStarted"
QT_MOC_LITERAL(17, 166, 18), // "slotRequestChanged"
QT_MOC_LITERAL(18, 185, 26), // "slotAuthenticationFinished"
QT_MOC_LITERAL(19, 212, 7), // "success"
QT_MOC_LITERAL(20, 220, 18), // "slotSessionStarted"
QT_MOC_LITERAL(21, 239, 18), // "slotHelperFinished"
QT_MOC_LITERAL(22, 258, 22), // "Auth::HelperExitStatus"
QT_MOC_LITERAL(23, 281, 6), // "status"
QT_MOC_LITERAL(24, 288, 12), // "slotAuthInfo"
QT_MOC_LITERAL(25, 301, 7), // "message"
QT_MOC_LITERAL(26, 309, 10), // "Auth::Info"
QT_MOC_LITERAL(27, 320, 4), // "info"
QT_MOC_LITERAL(28, 325, 13), // "slotAuthError"
QT_MOC_LITERAL(29, 339, 11), // "Auth::Error"
QT_MOC_LITERAL(30, 351, 5) // "error"

    },
    "SDDM::Display\0stopped\0\0loginFailed\0"
    "QLocalSocket*\0socket\0loginSucceeded\0"
    "start\0stop\0veinLogin\0Session\0session\0"
    "login\0user\0password\0attemptAutologin\0"
    "displayServerStarted\0slotRequestChanged\0"
    "slotAuthenticationFinished\0success\0"
    "slotSessionStarted\0slotHelperFinished\0"
    "Auth::HelperExitStatus\0status\0"
    "slotAuthInfo\0message\0Auth::Info\0info\0"
    "slotAuthError\0Auth::Error\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__Display[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   96,    2, 0x0a /* Public */,
       8,    0,   97,    2, 0x0a /* Public */,
       9,    2,   98,    2, 0x0a /* Public */,
      12,    4,  103,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    2,  115,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,
      24,    2,  126,    2, 0x08 /* Private */,
      28,    2,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 10,    5,   11,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, 0x80000000 | 10,    5,   13,   14,   11,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 29,   25,   30,

       0        // eod
};

void SDDM::Display::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Display *_t = static_cast<Display *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->loginFailed((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 2: _t->loginSucceeded((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        case 5: _t->veinLogin((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const Session(*)>(_a[2]))); break;
        case 6: _t->login((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const Session(*)>(_a[4]))); break;
        case 7: { bool _r = _t->attemptAutologin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->displayServerStarted(); break;
        case 9: _t->slotRequestChanged(); break;
        case 10: _t->slotAuthenticationFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->slotSessionStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->slotHelperFinished((*reinterpret_cast< Auth::HelperExitStatus(*)>(_a[1]))); break;
        case 13: _t->slotAuthInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Info(*)>(_a[2]))); break;
        case 14: _t->slotAuthError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Error(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Display::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Display::stopped)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Display::*_t)(QLocalSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Display::loginFailed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Display::*_t)(QLocalSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Display::loginSucceeded)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SDDM::Display::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__Display.data,
      qt_meta_data_SDDM__Display,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::Display::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::Display::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__Display.stringdata0))
        return static_cast<void*>(const_cast< Display*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::Display::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SDDM::Display::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SDDM::Display::loginFailed(QLocalSocket * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SDDM::Display::loginSucceeded(QLocalSocket * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
