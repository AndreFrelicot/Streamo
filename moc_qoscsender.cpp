/****************************************************************************
** Meta object code from reading C++ file 'qoscsender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QOSC/src/qoscsender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qoscsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QOSCSender_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOSCSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOSCSender_t qt_meta_stringdata_QOSCSender = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QOSCSender"
QT_MOC_LITERAL(1, 11, 13), // "setRemoteHost"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "remoteHostS"
QT_MOC_LITERAL(4, 38, 13), // "setRemotePort"
QT_MOC_LITERAL(5, 52, 12), // "remotePortUI"
QT_MOC_LITERAL(6, 65, 5) // "setup"

    },
    "QOSCSender\0setRemoteHost\0\0remoteHostS\0"
    "setRemotePort\0remotePortUI\0setup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOSCSender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void,

       0        // eod
};

void QOSCSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOSCSender *_t = static_cast<QOSCSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRemoteHost((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setRemotePort((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->setup(); break;
        default: ;
        }
    }
}

const QMetaObject QOSCSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QOSCSender.data,
      qt_meta_data_QOSCSender,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QOSCSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOSCSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QOSCSender.stringdata0))
        return static_cast<void*>(const_cast< QOSCSender*>(this));
    return QObject::qt_metacast(_clname);
}

int QOSCSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
