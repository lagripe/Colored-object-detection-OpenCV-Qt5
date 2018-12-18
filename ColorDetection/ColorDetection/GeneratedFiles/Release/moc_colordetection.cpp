/****************************************************************************
** Meta object code from reading C++ file 'colordetection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../colordetection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colordetection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorDetection_t {
    QByteArrayData data[17];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorDetection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorDetection_t qt_meta_stringdata_ColorDetection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ColorDetection"
QT_MOC_LITERAL(1, 15, 10), // "updateTabs"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "RMinSlider"
QT_MOC_LITERAL(4, 38, 10), // "RMaxSlider"
QT_MOC_LITERAL(5, 49, 10), // "GMinSlider"
QT_MOC_LITERAL(6, 60, 10), // "GMaxSlider"
QT_MOC_LITERAL(7, 71, 10), // "BMinSlider"
QT_MOC_LITERAL(8, 82, 10), // "BMaxSlider"
QT_MOC_LITERAL(9, 93, 9), // "_AddColor"
QT_MOC_LITERAL(10, 103, 10), // "_Detection"
QT_MOC_LITERAL(11, 114, 12), // "_DetectionCC"
QT_MOC_LITERAL(12, 127, 14), // "_StopDetection"
QT_MOC_LITERAL(13, 142, 10), // "CheckDetOP"
QT_MOC_LITERAL(14, 153, 11), // "ResetColors"
QT_MOC_LITERAL(15, 165, 14), // "UpdateDistance"
QT_MOC_LITERAL(16, 180, 16) // "UpdateDThickness"

    },
    "ColorDetection\0updateTabs\0\0RMinSlider\0"
    "RMaxSlider\0GMinSlider\0GMaxSlider\0"
    "BMinSlider\0BMaxSlider\0_AddColor\0"
    "_Detection\0_DetectionCC\0_StopDetection\0"
    "CheckDetOP\0ResetColors\0UpdateDistance\0"
    "UpdateDThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorDetection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorDetection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorDetection *_t = static_cast<ColorDetection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTabs(); break;
        case 1: _t->RMinSlider(); break;
        case 2: _t->RMaxSlider(); break;
        case 3: _t->GMinSlider(); break;
        case 4: _t->GMaxSlider(); break;
        case 5: _t->BMinSlider(); break;
        case 6: _t->BMaxSlider(); break;
        case 7: _t->_AddColor(); break;
        case 8: _t->_Detection(); break;
        case 9: _t->_DetectionCC(); break;
        case 10: _t->_StopDetection(); break;
        case 11: _t->CheckDetOP(); break;
        case 12: _t->ResetColors(); break;
        case 13: _t->UpdateDistance(); break;
        case 14: _t->UpdateDThickness(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ColorDetection::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ColorDetection.data,
      qt_meta_data_ColorDetection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorDetection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorDetection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorDetection.stringdata0))
        return static_cast<void*>(const_cast< ColorDetection*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ColorDetection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
