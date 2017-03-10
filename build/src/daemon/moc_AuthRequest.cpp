/****************************************************************************
** Meta object code from reading C++ file 'AuthRequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/auth/AuthRequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__AuthRequest_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__AuthRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__AuthRequest_t qt_meta_stringdata_SDDM__AuthRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SDDM::AuthRequest"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "finishAutomaticallyChanged"
QT_MOC_LITERAL(4, 55, 14), // "promptsChanged"
QT_MOC_LITERAL(5, 70, 4), // "done"
QT_MOC_LITERAL(6, 75, 7), // "prompts"
QT_MOC_LITERAL(7, 83, 28), // "QQmlListProperty<AuthPrompt>"
QT_MOC_LITERAL(8, 112, 19) // "finishAutomatically"

    },
    "SDDM::AuthRequest\0finished\0\0"
    "finishAutomaticallyChanged\0promptsChanged\0"
    "done\0prompts\0QQmlListProperty<AuthPrompt>\0"
    "finishAutomatically"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__AuthRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00495009,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       1,

       0        // eod
};

void SDDM::AuthRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthRequest *_t = static_cast<AuthRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->finishAutomaticallyChanged(); break;
        case 2: _t->promptsChanged(); break;
        case 3: _t->done(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AuthRequest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AuthRequest::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AuthRequest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AuthRequest::finishAutomaticallyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AuthRequest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AuthRequest::promptsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AuthRequest *_t = static_cast<AuthRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<AuthPrompt>*>(_v) = _t->promptsDecl(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->finishAutomatically(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AuthRequest *_t = static_cast<AuthRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFinishAutomatically(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject SDDM::AuthRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__AuthRequest.data,
      qt_meta_data_SDDM__AuthRequest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::AuthRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::AuthRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__AuthRequest.stringdata0))
        return static_cast<void*>(const_cast< AuthRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::AuthRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void SDDM::AuthRequest::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SDDM::AuthRequest::finishAutomaticallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SDDM::AuthRequest::promptsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
