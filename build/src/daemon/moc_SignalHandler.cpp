/****************************************************************************
** Meta object code from reading C++ file 'SignalHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/SignalHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SignalHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__SignalHandler_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__SignalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__SignalHandler_t qt_meta_stringdata_SDDM__SignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SDDM::SignalHandler"
QT_MOC_LITERAL(1, 20, 14), // "sighupReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "sigintReceived"
QT_MOC_LITERAL(4, 51, 15), // "sigtermReceived"
QT_MOC_LITERAL(5, 67, 15), // "sigusr1Received"
QT_MOC_LITERAL(6, 83, 12), // "handleSighup"
QT_MOC_LITERAL(7, 96, 12), // "handleSigint"
QT_MOC_LITERAL(8, 109, 13), // "handleSigterm"
QT_MOC_LITERAL(9, 123, 13) // "handleSigusr1"

    },
    "SDDM::SignalHandler\0sighupReceived\0\0"
    "sigintReceived\0sigtermReceived\0"
    "sigusr1Received\0handleSighup\0handleSigint\0"
    "handleSigterm\0handleSigusr1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__SignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SDDM::SignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalHandler *_t = static_cast<SignalHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sighupReceived(); break;
        case 1: _t->sigintReceived(); break;
        case 2: _t->sigtermReceived(); break;
        case 3: _t->sigusr1Received(); break;
        case 4: _t->handleSighup(); break;
        case 5: _t->handleSigint(); break;
        case 6: _t->handleSigterm(); break;
        case 7: _t->handleSigusr1(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sighupReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sigintReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sigtermReceived)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::sigusr1Received)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SDDM::SignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__SignalHandler.data,
      qt_meta_data_SDDM__SignalHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::SignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::SignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__SignalHandler.stringdata0))
        return static_cast<void*>(const_cast< SignalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::SignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void SDDM::SignalHandler::sighupReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SDDM::SignalHandler::sigintReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SDDM::SignalHandler::sigtermReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SDDM::SignalHandler::sigusr1Received()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
