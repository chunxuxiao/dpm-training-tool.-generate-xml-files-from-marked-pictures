/****************************************************************************
** Meta object code from reading C++ file 'paintarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../paintarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaintArea_t {
    QByteArrayData data[7];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintArea_t qt_meta_stringdata_PaintArea = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaintArea"
QT_MOC_LITERAL(1, 10, 13), // "sigDeleteItem"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "cur"
QT_MOC_LITERAL(4, 29, 10), // "emitDelete"
QT_MOC_LITERAL(5, 40, 10), // "deleteItem"
QT_MOC_LITERAL(6, 51, 8) // "clearAll"

    },
    "PaintArea\0sigDeleteItem\0\0cur\0emitDelete\0"
    "deleteItem\0clearAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,

       0        // eod
};

void PaintArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintArea *_t = static_cast<PaintArea *>(_o);
        switch (_id) {
        case 0: _t->sigDeleteItem((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->emitDelete(); break;
        case 2: _t->deleteItem((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->clearAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PaintArea::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintArea::sigDeleteItem)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PaintArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PaintArea.data,
      qt_meta_data_PaintArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PaintArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PaintArea.stringdata))
        return static_cast<void*>(const_cast< PaintArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int PaintArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PaintArea::sigDeleteItem(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
