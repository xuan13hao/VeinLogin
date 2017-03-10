/****************************************************************************
** Meta object code from reading C++ file 'SeatManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/SeatManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeatManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__SeatManager_t {
    QByteArrayData data[9];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__SeatManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__SeatManager_t qt_meta_stringdata_SDDM__SeatManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SDDM::SeatManager"
QT_MOC_LITERAL(1, 18, 11), // "seatCreated"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 11), // "seatRemoved"
QT_MOC_LITERAL(5, 48, 10), // "createSeat"
QT_MOC_LITERAL(6, 59, 10), // "removeSeat"
QT_MOC_LITERAL(7, 70, 15), // "switchToGreeter"
QT_MOC_LITERAL(8, 86, 4) // "seat"

    },
    "SDDM::SeatManager\0seatCreated\0\0name\0"
    "seatRemoved\0createSeat\0removeSeat\0"
    "switchToGreeter\0seat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__SeatManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SDDM::SeatManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeatManager *_t = static_cast<SeatManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seatCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->seatRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->createSeat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeSeat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->switchToGreeter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SeatManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeatManager::seatCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SeatManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeatManager::seatRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SDDM::SeatManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__SeatManager.data,
      qt_meta_data_SDDM__SeatManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::SeatManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::SeatManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__SeatManager.stringdata0))
        return static_cast<void*>(const_cast< SeatManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::SeatManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SDDM::SeatManager::seatCreated(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SDDM::SeatManager::seatRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
