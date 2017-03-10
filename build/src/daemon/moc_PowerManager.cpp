/****************************************************************************
** Meta object code from reading C++ file 'PowerManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/PowerManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__PowerManager_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__PowerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__PowerManager_t qt_meta_stringdata_SDDM__PowerManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SDDM::PowerManager"
QT_MOC_LITERAL(1, 19, 12), // "capabilities"
QT_MOC_LITERAL(2, 32, 12), // "Capabilities"
QT_MOC_LITERAL(3, 45, 0), // ""
QT_MOC_LITERAL(4, 46, 8), // "powerOff"
QT_MOC_LITERAL(5, 55, 6), // "reboot"
QT_MOC_LITERAL(6, 62, 7), // "suspend"
QT_MOC_LITERAL(7, 70, 9), // "hibernate"
QT_MOC_LITERAL(8, 80, 11) // "hybridSleep"

    },
    "SDDM::PowerManager\0capabilities\0"
    "Capabilities\0\0powerOff\0reboot\0suspend\0"
    "hibernate\0hybridSleep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__PowerManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    3, 0x0a /* Public */,
       4,    0,   45,    3, 0x0a /* Public */,
       5,    0,   46,    3, 0x0a /* Public */,
       6,    0,   47,    3, 0x0a /* Public */,
       7,    0,   48,    3, 0x0a /* Public */,
       8,    0,   49,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SDDM::PowerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PowerManager *_t = static_cast<PowerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Capabilities _r = _t->capabilities();
            if (_a[0]) *reinterpret_cast< Capabilities*>(_a[0]) = _r; }  break;
        case 1: _t->powerOff(); break;
        case 2: _t->reboot(); break;
        case 3: _t->suspend(); break;
        case 4: _t->hibernate(); break;
        case 5: _t->hybridSleep(); break;
        default: ;
        }
    }
}

const QMetaObject SDDM::PowerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__PowerManager.data,
      qt_meta_data_SDDM__PowerManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::PowerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::PowerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__PowerManager.stringdata0))
        return static_cast<void*>(const_cast< PowerManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::PowerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
