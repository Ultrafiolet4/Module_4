/****************************************************************************
** Meta object code from reading C++ file 'customer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Customer_t {
    QByteArrayData data[11];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Customer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Customer_t qt_meta_stringdata_Customer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Customer"
QT_MOC_LITERAL(1, 9, 11), // "firstWindow"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 17), // "on_all_pb_clicked"
QT_MOC_LITERAL(4, 40, 17), // "on_old_pb_clicked"
QT_MOC_LITERAL(5, 58, 17), // "on_new_pb_clicked"
QT_MOC_LITERAL(6, 76, 20), // "on_name_cb_activated"
QT_MOC_LITERAL(7, 97, 4), // "arg1"
QT_MOC_LITERAL(8, 102, 20), // "on_search_pb_clicked"
QT_MOC_LITERAL(9, 123, 25), // "on_greatsearch_pb_clicked"
QT_MOC_LITERAL(10, 149, 18) // "on_exit_pb_clicked"

    },
    "Customer\0firstWindow\0\0on_all_pb_clicked\0"
    "on_old_pb_clicked\0on_new_pb_clicked\0"
    "on_name_cb_activated\0arg1\0"
    "on_search_pb_clicked\0on_greatsearch_pb_clicked\0"
    "on_exit_pb_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Customer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Customer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Customer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_all_pb_clicked(); break;
        case 2: _t->on_old_pb_clicked(); break;
        case 3: _t->on_new_pb_clicked(); break;
        case 4: _t->on_name_cb_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_search_pb_clicked(); break;
        case 6: _t->on_greatsearch_pb_clicked(); break;
        case 7: _t->on_exit_pb_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Customer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Customer::firstWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Customer::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Customer.data,
    qt_meta_data_Customer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Customer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Customer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Customer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Customer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Customer::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
