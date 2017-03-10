/****************************************************************************
** Meta object code from reading C++ file 'ConfigurationTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test/ConfigurationTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigurationTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConfigurationTest_t {
    QByteArrayData data[13];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigurationTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigurationTest_t qt_meta_stringdata_ConfigurationTest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConfigurationTest"
QT_MOC_LITERAL(1, 18, 12), // "initTestCase"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 48, 4), // "init"
QT_MOC_LITERAL(5, 53, 7), // "cleanup"
QT_MOC_LITERAL(6, 61, 5), // "Basic"
QT_MOC_LITERAL(7, 67, 8), // "Sections"
QT_MOC_LITERAL(8, 76, 6), // "Unused"
QT_MOC_LITERAL(9, 83, 11), // "LineChanges"
QT_MOC_LITERAL(10, 95, 10), // "CustomEnum"
QT_MOC_LITERAL(11, 106, 11), // "RightOnInit"
QT_MOC_LITERAL(12, 118, 11) // "FileChanged"

    },
    "ConfigurationTest\0initTestCase\0\0"
    "cleanupTestCase\0init\0cleanup\0Basic\0"
    "Sections\0Unused\0LineChanges\0CustomEnum\0"
    "RightOnInit\0FileChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigurationTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConfigurationTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfigurationTest *_t = static_cast<ConfigurationTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->Basic(); break;
        case 5: _t->Sections(); break;
        case 6: _t->Unused(); break;
        case 7: _t->LineChanges(); break;
        case 8: _t->CustomEnum(); break;
        case 9: _t->RightOnInit(); break;
        case 10: _t->FileChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ConfigurationTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConfigurationTest.data,
      qt_meta_data_ConfigurationTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConfigurationTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigurationTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigurationTest.stringdata0))
        return static_cast<void*>(const_cast< ConfigurationTest*>(this));
    return QObject::qt_metacast(_clname);
}

int ConfigurationTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
