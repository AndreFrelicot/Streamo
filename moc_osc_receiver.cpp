/****************************************************************************
** Meta object code from reading C++ file 'osc_receiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QOSC/oscqml/osc_receiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osc_receiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyPacketListenerWorker_t {
    QByteArrayData data[6];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyPacketListenerWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyPacketListenerWorker_t qt_meta_stringdata_MyPacketListenerWorker = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MyPacketListenerWorker"
QT_MOC_LITERAL(1, 23, 7), // "message"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "address"
QT_MOC_LITERAL(4, 40, 3), // "msg"
QT_MOC_LITERAL(5, 44, 5) // "start"

    },
    "MyPacketListenerWorker\0message\0\0address\0"
    "msg\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyPacketListenerWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MyPacketListenerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyPacketListenerWorker *_t = static_cast<MyPacketListenerWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyPacketListenerWorker::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyPacketListenerWorker::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MyPacketListenerWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyPacketListenerWorker.data,
      qt_meta_data_MyPacketListenerWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyPacketListenerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyPacketListenerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyPacketListenerWorker.stringdata0))
        return static_cast<void*>(const_cast< MyPacketListenerWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int MyPacketListenerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MyPacketListenerWorker::message(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OSCReceiver_t {
    QByteArrayData data[12];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSCReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSCReceiver_t qt_meta_stringdata_OSCReceiver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OSCReceiver"
QT_MOC_LITERAL(1, 12, 7), // "message"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "address"
QT_MOC_LITERAL(4, 29, 3), // "msg"
QT_MOC_LITERAL(5, 33, 5), // "error"
QT_MOC_LITERAL(6, 39, 5), // "start"
QT_MOC_LITERAL(7, 45, 11), // "portChanged"
QT_MOC_LITERAL(8, 57, 9), // "onMessage"
QT_MOC_LITERAL(9, 67, 3), // "run"
QT_MOC_LITERAL(10, 71, 4), // "port"
QT_MOC_LITERAL(11, 76, 9) // "isRunning"

    },
    "OSCReceiver\0message\0\0address\0msg\0error\0"
    "start\0portChanged\0onMessage\0run\0port\0"
    "isRunning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSCReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       6,    0,   52,    2, 0x06 /* Public */,
       7,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       3,
       0,

       0        // eod
};

void OSCReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OSCReceiver *_t = static_cast<OSCReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->portChanged(); break;
        case 4: _t->onMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OSCReceiver::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCReceiver::message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OSCReceiver::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCReceiver::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OSCReceiver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCReceiver::start)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OSCReceiver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OSCReceiver::portChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OSCReceiver *_t = static_cast<OSCReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRunning_; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OSCReceiver *_t = static_cast<OSCReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 1:
            if (_t->isRunning_ != *reinterpret_cast< bool*>(_v)) {
                _t->isRunning_ = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject OSCReceiver::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_OSCReceiver.data,
      qt_meta_data_OSCReceiver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OSCReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSCReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSCReceiver.stringdata0))
        return static_cast<void*>(const_cast< OSCReceiver*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int OSCReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void OSCReceiver::message(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OSCReceiver::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OSCReceiver::start()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OSCReceiver::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
