/****************************************************************************
** Meta object code from reading C++ file 'clientthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/clientthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientThread_t {
    QByteArrayData data[18];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientThread_t qt_meta_stringdata_ClientThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientThread"
QT_MOC_LITERAL(1, 13, 5), // "error"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(4, 44, 11), // "socketerror"
QT_MOC_LITERAL(5, 56, 10), // "cpuChanged"
QT_MOC_LITERAL(6, 67, 11), // "std::string"
QT_MOC_LITERAL(7, 79, 10), // "memChanged"
QT_MOC_LITERAL(8, 90, 9), // "hdChanged"
QT_MOC_LITERAL(9, 100, 9), // "inChanged"
QT_MOC_LITERAL(10, 110, 10), // "outChanged"
QT_MOC_LITERAL(11, 121, 9), // "readyRead"
QT_MOC_LITERAL(12, 131, 12), // "disconnected"
QT_MOC_LITERAL(13, 144, 6), // "setCpu"
QT_MOC_LITERAL(14, 151, 6), // "setMem"
QT_MOC_LITERAL(15, 158, 5), // "setHd"
QT_MOC_LITERAL(16, 164, 5), // "setIn"
QT_MOC_LITERAL(17, 170, 6) // "setOut"

    },
    "ClientThread\0error\0\0QTcpSocket::SocketError\0"
    "socketerror\0cpuChanged\0std::string\0"
    "memChanged\0hdChanged\0inChanged\0"
    "outChanged\0readyRead\0disconnected\0"
    "setCpu\0setMem\0setHd\0setIn\0setOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    2,   82,    2, 0x06 /* Public */,
       7,    2,   87,    2, 0x06 /* Public */,
       8,    2,   92,    2, 0x06 /* Public */,
       9,    2,   97,    2, 0x06 /* Public */,
      10,    2,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  107,    2, 0x0a /* Public */,
      12,    0,  108,    2, 0x0a /* Public */,
      13,    1,  109,    2, 0x0a /* Public */,
      14,    1,  112,    2, 0x0a /* Public */,
      15,    1,  115,    2, 0x0a /* Public */,
      16,    1,  118,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void ClientThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientThread *_t = static_cast<ClientThread *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->cpuChanged((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->memChanged((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->hdChanged((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->inChanged((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->outChanged((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->readyRead(); break;
        case 7: _t->disconnected(); break;
        case 8: _t->setCpu((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: _t->setMem((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 10: _t->setHd((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 11: _t->setIn((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 12: _t->setOut((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientThread::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::error)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientThread::*_t)(std::string , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::cpuChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ClientThread::*_t)(std::string , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::memChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ClientThread::*_t)(std::string , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::hdChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ClientThread::*_t)(std::string , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::inChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ClientThread::*_t)(std::string , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientThread::outChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject ClientThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ClientThread.data,
      qt_meta_data_ClientThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientThread.stringdata))
        return static_cast<void*>(const_cast< ClientThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ClientThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ClientThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientThread::cpuChanged(std::string _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientThread::memChanged(std::string _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientThread::hdChanged(std::string _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientThread::inChanged(std::string _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientThread::outChanged(std::string _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
