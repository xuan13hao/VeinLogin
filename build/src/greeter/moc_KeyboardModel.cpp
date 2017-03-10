/****************************************************************************
** Meta object code from reading C++ file 'KeyboardModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/greeter/KeyboardModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyboardModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__KeyboardModel_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__KeyboardModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__KeyboardModel_t qt_meta_stringdata_SDDM__KeyboardModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SDDM::KeyboardModel"
QT_MOC_LITERAL(1, 20, 19), // "numLockStateChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "capsLockStateChanged"
QT_MOC_LITERAL(4, 62, 20), // "currentLayoutChanged"
QT_MOC_LITERAL(5, 83, 14), // "layoutsChanged"
QT_MOC_LITERAL(6, 98, 12), // "numLockState"
QT_MOC_LITERAL(7, 111, 15), // "setNumLockState"
QT_MOC_LITERAL(8, 127, 5), // "state"
QT_MOC_LITERAL(9, 133, 13), // "capsLockState"
QT_MOC_LITERAL(10, 147, 16), // "setCapsLockState"
QT_MOC_LITERAL(11, 164, 7), // "layouts"
QT_MOC_LITERAL(12, 172, 15), // "QList<QObject*>"
QT_MOC_LITERAL(13, 188, 13), // "currentLayout"
QT_MOC_LITERAL(14, 202, 16), // "setCurrentLayout"
QT_MOC_LITERAL(15, 219, 2), // "id"
QT_MOC_LITERAL(16, 222, 7), // "enabled"
QT_MOC_LITERAL(17, 230, 14), // "dispatchEvents"
QT_MOC_LITERAL(18, 245, 7), // "numLock"
QT_MOC_LITERAL(19, 253, 8) // "capsLock"

    },
    "SDDM::KeyboardModel\0numLockStateChanged\0"
    "\0capsLockStateChanged\0currentLayoutChanged\0"
    "layoutsChanged\0numLockState\0setNumLockState\0"
    "state\0capsLockState\0setCapsLockState\0"
    "layouts\0QList<QObject*>\0currentLayout\0"
    "setCurrentLayout\0id\0enabled\0dispatchEvents\0"
    "numLock\0capsLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__KeyboardModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    1,   93,    2, 0x0a /* Public */,
      16,    0,   96,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    8,
    0x80000000 | 12,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495003,
      19, QMetaType::Bool, 0x00495003,
      13, QMetaType::Int, 0x00495103,
      11, 0x80000000 | 12, 0x00495009,
      16, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void SDDM::KeyboardModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyboardModel *_t = static_cast<KeyboardModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numLockStateChanged(); break;
        case 1: _t->capsLockStateChanged(); break;
        case 2: _t->currentLayoutChanged(); break;
        case 3: _t->layoutsChanged(); break;
        case 4: { bool _r = _t->numLockState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setNumLockState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->capsLockState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setCapsLockState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { QList<QObject*> _r = _t->layouts();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->currentLayout();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->setCurrentLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: { bool _r = _t->enabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->dispatchEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KeyboardModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyboardModel::numLockStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KeyboardModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyboardModel::capsLockStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KeyboardModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyboardModel::currentLayoutChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KeyboardModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyboardModel::layoutsChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KeyboardModel *_t = static_cast<KeyboardModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->numLockState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->capsLockState(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentLayout(); break;
        case 3: *reinterpret_cast< QList<QObject*>*>(_v) = _t->layouts(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KeyboardModel *_t = static_cast<KeyboardModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumLockState(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCapsLockState(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCurrentLayout(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SDDM::KeyboardModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__KeyboardModel.data,
      qt_meta_data_SDDM__KeyboardModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::KeyboardModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::KeyboardModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__KeyboardModel.stringdata0))
        return static_cast<void*>(const_cast< KeyboardModel*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::KeyboardModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SDDM::KeyboardModel::numLockStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SDDM::KeyboardModel::capsLockStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SDDM::KeyboardModel::currentLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SDDM::KeyboardModel::layoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
