/****************************************************************************
** Meta object code from reading C++ file 'XorgDisplayServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/XorgDisplayServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XorgDisplayServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__XorgDisplayServer_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__XorgDisplayServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__XorgDisplayServer_t qt_meta_stringdata_SDDM__XorgDisplayServer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SDDM::XorgDisplayServer"
QT_MOC_LITERAL(1, 24, 5), // "start"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "stop"
QT_MOC_LITERAL(4, 36, 8), // "finished"
QT_MOC_LITERAL(5, 45, 12) // "setupDisplay"

    },
    "SDDM::XorgDisplayServer\0start\0\0stop\0"
    "finished\0setupDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__XorgDisplayServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SDDM::XorgDisplayServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XorgDisplayServer *_t = static_cast<XorgDisplayServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->stop(); break;
        case 2: _t->finished(); break;
        case 3: _t->setupDisplay(); break;
        default: ;
        }
    }
}

const QMetaObject SDDM::XorgDisplayServer::staticMetaObject = {
    { &DisplayServer::staticMetaObject, qt_meta_stringdata_SDDM__XorgDisplayServer.data,
      qt_meta_data_SDDM__XorgDisplayServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::XorgDisplayServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::XorgDisplayServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__XorgDisplayServer.stringdata0))
        return static_cast<void*>(const_cast< XorgDisplayServer*>(this));
    return DisplayServer::qt_metacast(_clname);
}

int SDDM::XorgDisplayServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayServer::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
