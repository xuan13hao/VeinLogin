/****************************************************************************
** Meta object code from reading C++ file 'AuthPrompt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/auth/AuthPrompt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthPrompt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__AuthPrompt_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__AuthPrompt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__AuthPrompt_t qt_meta_stringdata_SDDM__AuthPrompt = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SDDM::AuthPrompt"
QT_MOC_LITERAL(1, 17, 15), // "responseChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "type"
QT_MOC_LITERAL(4, 39, 4), // "Type"
QT_MOC_LITERAL(5, 44, 7), // "message"
QT_MOC_LITERAL(6, 52, 6), // "hidden"
QT_MOC_LITERAL(7, 59, 8), // "response"
QT_MOC_LITERAL(8, 68, 4), // "NONE"
QT_MOC_LITERAL(9, 73, 7), // "UNKNOWN"
QT_MOC_LITERAL(10, 81, 14), // "CHANGE_CURRENT"
QT_MOC_LITERAL(11, 96, 10), // "CHANGE_NEW"
QT_MOC_LITERAL(12, 107, 13), // "CHANGE_REPEAT"
QT_MOC_LITERAL(13, 121, 10), // "LOGIN_USER"
QT_MOC_LITERAL(14, 132, 14) // "LOGIN_PASSWORD"

    },
    "SDDM::AuthPrompt\0responseChanged\0\0"
    "type\0Type\0message\0hidden\0response\0"
    "NONE\0UNKNOWN\0CHANGE_CURRENT\0CHANGE_NEW\0"
    "CHANGE_REPEAT\0LOGIN_USER\0LOGIN_PASSWORD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__AuthPrompt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::QByteArray, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
       4, 0x0,    7,   40,

 // enum data: key, value
       8, uint(SDDM::AuthPrompt::NONE),
       9, uint(SDDM::AuthPrompt::UNKNOWN),
      10, uint(SDDM::AuthPrompt::CHANGE_CURRENT),
      11, uint(SDDM::AuthPrompt::CHANGE_NEW),
      12, uint(SDDM::AuthPrompt::CHANGE_REPEAT),
      13, uint(SDDM::AuthPrompt::LOGIN_USER),
      14, uint(SDDM::AuthPrompt::LOGIN_PASSWORD),

       0        // eod
};

void SDDM::AuthPrompt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthPrompt *_t = static_cast<AuthPrompt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AuthPrompt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AuthPrompt::responseChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AuthPrompt *_t = static_cast<AuthPrompt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hidden(); break;
        case 3: *reinterpret_cast< QByteArray*>(_v) = _t->responseFake(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AuthPrompt *_t = static_cast<AuthPrompt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setResponse(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject SDDM::AuthPrompt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__AuthPrompt.data,
      qt_meta_data_SDDM__AuthPrompt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::AuthPrompt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::AuthPrompt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__AuthPrompt.stringdata0))
        return static_cast<void*>(const_cast< AuthPrompt*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::AuthPrompt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SDDM::AuthPrompt::responseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
