/****************************************************************************
** Meta object code from reading C++ file 'Greeter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/daemon/Greeter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Greeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__Greeter_t {
    QByteArrayData data[20];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__Greeter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__Greeter_t qt_meta_stringdata_SDDM__Greeter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SDDM::Greeter"
QT_MOC_LITERAL(1, 14, 5), // "start"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "stop"
QT_MOC_LITERAL(4, 26, 8), // "finished"
QT_MOC_LITERAL(5, 35, 16), // "onRequestChanged"
QT_MOC_LITERAL(6, 52, 16), // "onSessionStarted"
QT_MOC_LITERAL(7, 69, 7), // "success"
QT_MOC_LITERAL(8, 77, 16), // "onHelperFinished"
QT_MOC_LITERAL(9, 94, 22), // "Auth::HelperExitStatus"
QT_MOC_LITERAL(10, 117, 6), // "status"
QT_MOC_LITERAL(11, 124, 25), // "onReadyReadStandardOutput"
QT_MOC_LITERAL(12, 150, 24), // "onReadyReadStandardError"
QT_MOC_LITERAL(13, 175, 8), // "authInfo"
QT_MOC_LITERAL(14, 184, 7), // "message"
QT_MOC_LITERAL(15, 192, 10), // "Auth::Info"
QT_MOC_LITERAL(16, 203, 4), // "info"
QT_MOC_LITERAL(17, 208, 9), // "authError"
QT_MOC_LITERAL(18, 218, 11), // "Auth::Error"
QT_MOC_LITERAL(19, 230, 5) // "error"

    },
    "SDDM::Greeter\0start\0\0stop\0finished\0"
    "onRequestChanged\0onSessionStarted\0"
    "success\0onHelperFinished\0"
    "Auth::HelperExitStatus\0status\0"
    "onReadyReadStandardOutput\0"
    "onReadyReadStandardError\0authInfo\0"
    "message\0Auth::Info\0info\0authError\0"
    "Auth::Error\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__Greeter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    2,   76,    2, 0x08 /* Private */,
      17,    2,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   14,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   14,   19,

       0        // eod
};

void SDDM::Greeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Greeter *_t = static_cast<Greeter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->stop(); break;
        case 2: _t->finished(); break;
        case 3: _t->onRequestChanged(); break;
        case 4: _t->onSessionStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onHelperFinished((*reinterpret_cast< Auth::HelperExitStatus(*)>(_a[1]))); break;
        case 6: _t->onReadyReadStandardOutput(); break;
        case 7: _t->onReadyReadStandardError(); break;
        case 8: _t->authInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Info(*)>(_a[2]))); break;
        case 9: _t->authError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Error(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SDDM::Greeter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDDM__Greeter.data,
      qt_meta_data_SDDM__Greeter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::Greeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::Greeter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__Greeter.stringdata0))
        return static_cast<void*>(const_cast< Greeter*>(this));
    return QObject::qt_metacast(_clname);
}

int SDDM::Greeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE