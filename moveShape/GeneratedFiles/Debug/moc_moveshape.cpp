/****************************************************************************
** Meta object code from reading C++ file 'moveshape.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../moveshape.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moveshape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_moveShape_t {
    QByteArrayData data[10];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveShape_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveShape_t qt_meta_stringdata_moveShape = {
    {
QT_MOC_LITERAL(0, 0, 9), // "moveShape"
QT_MOC_LITERAL(1, 10, 4), // "move"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "start"
QT_MOC_LITERAL(4, 22, 5), // "pause"
QT_MOC_LITERAL(5, 28, 4), // "stop"
QT_MOC_LITERAL(6, 33, 10), // "accelerate"
QT_MOC_LITERAL(7, 44, 9), // "declerate"
QT_MOC_LITERAL(8, 54, 11), // "changeShape"
QT_MOC_LITERAL(9, 66, 5) // "index"

    },
    "moveShape\0move\0\0start\0pause\0stop\0"
    "accelerate\0declerate\0changeShape\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveShape[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void moveShape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        moveShape *_t = static_cast<moveShape *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->move(); break;
        case 1: _t->start(); break;
        case 2: _t->pause(); break;
        case 3: _t->stop(); break;
        case 4: _t->accelerate(); break;
        case 5: _t->declerate(); break;
        case 6: _t->changeShape((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject moveShape::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveShape.data,
      qt_meta_data_moveShape,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *moveShape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveShape::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_moveShape.stringdata0))
        return static_cast<void*>(const_cast< moveShape*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveShape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
