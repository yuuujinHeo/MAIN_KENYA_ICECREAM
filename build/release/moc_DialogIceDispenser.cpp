/****************************************************************************
** Meta object code from reading C++ file 'DialogIceDispenser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogIceDispenser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogIceDispenser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogIceDispenser_t {
    QByteArrayData data[13];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogIceDispenser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogIceDispenser_t qt_meta_stringdata_DialogIceDispenser = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DialogIceDispenser"
QT_MOC_LITERAL(1, 19, 7), // "onTimer"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "readData"
QT_MOC_LITERAL(4, 37, 11), // "handleError"
QT_MOC_LITERAL(5, 49, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(6, 78, 5), // "error"
QT_MOC_LITERAL(7, 84, 31), // "on_BTN_ICE_TEST_ICE_OUT_clicked"
QT_MOC_LITERAL(8, 116, 35), // "on_BTN_ICE_CHANGE_COMM_MODE_c..."
QT_MOC_LITERAL(9, 152, 36), // "on_BTN_ICE_TEST_STATUS_CLEAR_..."
QT_MOC_LITERAL(10, 189, 38), // "on_BTN_ICE_CHANGE_ICE_OUT_TIM..."
QT_MOC_LITERAL(11, 228, 30), // "on_BTN_ICE_TEST_REBOOT_clicked"
QT_MOC_LITERAL(12, 259, 38) // "on_BTN_ICE_CHANGE_AMBIENT_TEM..."

    },
    "DialogIceDispenser\0onTimer\0\0readData\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "error\0on_BTN_ICE_TEST_ICE_OUT_clicked\0"
    "on_BTN_ICE_CHANGE_COMM_MODE_clicked\0"
    "on_BTN_ICE_TEST_STATUS_CLEAR_clicked\0"
    "on_BTN_ICE_CHANGE_ICE_OUT_TIME_clicked\0"
    "on_BTN_ICE_TEST_REBOOT_clicked\0"
    "on_BTN_ICE_CHANGE_AMBIENT_TEMP_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogIceDispenser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogIceDispenser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogIceDispenser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->readData(); break;
        case 2: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 3: _t->on_BTN_ICE_TEST_ICE_OUT_clicked(); break;
        case 4: _t->on_BTN_ICE_CHANGE_COMM_MODE_clicked(); break;
        case 5: _t->on_BTN_ICE_TEST_STATUS_CLEAR_clicked(); break;
        case 6: _t->on_BTN_ICE_CHANGE_ICE_OUT_TIME_clicked(); break;
        case 7: _t->on_BTN_ICE_TEST_REBOOT_clicked(); break;
        case 8: _t->on_BTN_ICE_CHANGE_AMBIENT_TEMP_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogIceDispenser::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogIceDispenser.data,
    qt_meta_data_DialogIceDispenser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogIceDispenser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogIceDispenser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogIceDispenser.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogIceDispenser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
