/****************************************************************************
** Meta object code from reading C++ file 'osc_sender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QOSC/oscqml/osc_sender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osc_sender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OSCSender_t {
    QByteArrayData data[11];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSCSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSCSender_t qt_meta_stringdata_OSCSender = {
    {
QT_MOC_LITERAL(0, 0, 9), // "OSCSender"
QT_MOC_LITERAL(1, 10, 5), // "error"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 3), // "msg"
QT_MOC_LITERAL(4, 21, 9), // "ipChanged"
QT_MOC_LITERAL(5, 31, 11), // "portChanged"
QT_MOC_LITERAL(6, 43, 4), // "send"
QT_MOC_LITERAL(7, 48, 7), // "address"
QT_MOC_LITERAL(8, 56, 5), // "param"
QT_MOC_LITERAL(9, 62, 2), // "ip"
QT_MOC_LITERAL(10, 65, 4) // "port"

    },
    "OSCSender\0error\0\0msg\0ipChanged\0"
    "portChanged\0send\0address\0param\0ip\0"
    "port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSCSender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void OSCSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OSCSender *_t = static_cast<OSCSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ipChanged(); break;
        case 2: _t->portChanged(); break;
        case 3: _t->send((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OSCSender::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCSender::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OSCSender::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCSender::ipChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OSCSender::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCSender::portChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OSCSender *_t = static_cast<OSCSender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getIp(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OSCSender *_t = static_cast<OSCSender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIp(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject OSCSender::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_OSCSender.data,
      qt_meta_data_OSCSender,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OSCSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSCSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSCSender.stringdata0))
        return static_cast<void*>(const_cast< OSCSender*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int OSCSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void OSCSender::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OSCSender::ipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OSCSender::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
