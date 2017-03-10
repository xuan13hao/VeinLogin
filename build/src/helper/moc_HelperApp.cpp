/****************************************************************************
** Meta object code from reading C++ file 'HelperApp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/helper/HelperApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelperApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDDM__HelperApp_t {
    QByteArrayData data[19];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDDM__HelperApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDDM__HelperApp_t qt_meta_stringdata_SDDM__HelperApp = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SDDM::HelperApp"
QT_MOC_LITERAL(1, 16, 7), // "request"
QT_MOC_LITERAL(2, 24, 7), // "Request"
QT_MOC_LITERAL(3, 32, 0), // ""
QT_MOC_LITERAL(4, 33, 4), // "info"
QT_MOC_LITERAL(5, 38, 7), // "message"
QT_MOC_LITERAL(6, 46, 10), // "Auth::Info"
QT_MOC_LITERAL(7, 57, 4), // "type"
QT_MOC_LITERAL(8, 62, 5), // "error"
QT_MOC_LITERAL(9, 68, 11), // "Auth::Error"
QT_MOC_LITERAL(10, 80, 13), // "authenticated"
QT_MOC_LITERAL(11, 94, 19), // "QProcessEnvironment"
QT_MOC_LITERAL(12, 114, 4), // "user"
QT_MOC_LITERAL(13, 119, 13), // "sessionOpened"
QT_MOC_LITERAL(14, 133, 7), // "success"
QT_MOC_LITERAL(15, 141, 5), // "setUp"
QT_MOC_LITERAL(16, 147, 6), // "doAuth"
QT_MOC_LITERAL(17, 154, 15), // "sessionFinished"
QT_MOC_LITERAL(18, 170, 6) // "status"

    },
    "SDDM::HelperApp\0request\0Request\0\0info\0"
    "message\0Auth::Info\0type\0error\0Auth::Error\0"
    "authenticated\0QProcessEnvironment\0"
    "user\0sessionOpened\0success\0setUp\0"
    "doAuth\0sessionFinished\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDDM__HelperApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    3, 0x0a /* Public */,
       4,    2,   57,    3, 0x0a /* Public */,
       8,    2,   62,    3, 0x0a /* Public */,
      10,    1,   67,    3, 0x0a /* Public */,
      13,    1,   70,    3, 0x0a /* Public */,
      15,    0,   73,    3, 0x08 /* Private */,
      16,    0,   74,    3, 0x08 /* Private */,
      17,    1,   75,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 2,    1,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    5,    7,
    0x80000000 | 11, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void SDDM::HelperApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelperApp *_t = static_cast<HelperApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Request _r = _t->request((*reinterpret_cast< const Request(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Request*>(_a[0]) = _r; }  break;
        case 1: _t->info((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Info(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::Error(*)>(_a[2]))); break;
        case 3: { QProcessEnvironment _r = _t->authenticated((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QProcessEnvironment*>(_a[0]) = _r; }  break;
        case 4: _t->sessionOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setUp(); break;
        case 6: _t->doAuth(); break;
        case 7: _t->sessionFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SDDM::HelperApp::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_SDDM__HelperApp.data,
      qt_meta_data_SDDM__HelperApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SDDM::HelperApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDDM::HelperApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SDDM__HelperApp.stringdata0))
        return static_cast<void*>(const_cast< HelperApp*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int SDDM::HelperApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
