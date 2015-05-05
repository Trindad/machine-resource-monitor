/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[14];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 10), // "cpuChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "std::string"
QT_MOC_LITERAL(4, 31, 10), // "memChanged"
QT_MOC_LITERAL(5, 42, 9), // "hdChanged"
QT_MOC_LITERAL(6, 52, 9), // "inChanged"
QT_MOC_LITERAL(7, 62, 10), // "outChanged"
QT_MOC_LITERAL(8, 73, 10), // "connection"
QT_MOC_LITERAL(9, 84, 6), // "setCpu"
QT_MOC_LITERAL(10, 91, 6), // "setMem"
QT_MOC_LITERAL(11, 98, 5), // "setHd"
QT_MOC_LITERAL(12, 104, 5), // "setIn"
QT_MOC_LITERAL(13, 110, 6) // "setOut"

    },
    "Server\0cpuChanged\0\0std::string\0"
    "memChanged\0hdChanged\0inChanged\0"
    "outChanged\0connection\0setCpu\0setMem\0"
    "setHd\0setIn\0setOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,
       7,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   84,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        switch (_id) {
        case 0: _t->cpuChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->memChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->hdChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->inChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->outChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 5: _t->connection(); break;
        case 6: _t->setCpu((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 7: _t->setMem((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 8: _t->setHd((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: _t->setIn((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 10: _t->setOut((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Server::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::cpuChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Server::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::memChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Server::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::hdChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Server::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::inChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Server::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::outChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata))
        return static_cast<void*>(const_cast< Server*>(this));
    return QObject::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Server::cpuChanged(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::memChanged(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Server::hdChanged(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Server::inChanged(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Server::outChanged(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
