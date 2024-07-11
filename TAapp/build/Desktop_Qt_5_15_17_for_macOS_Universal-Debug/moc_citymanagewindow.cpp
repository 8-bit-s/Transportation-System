/****************************************************************************
** Meta object code from reading C++ file 'citymanagewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../citymanagewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'citymanagewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CityManageWindow_t {
    QByteArrayData data[16];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CityManageWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CityManageWindow_t qt_meta_stringdata_CityManageWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CityManageWindow"
QT_MOC_LITERAL(1, 17, 10), // "deleteable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "SearchTarget"
QT_MOC_LITERAL(4, 42, 4), // "city"
QT_MOC_LITERAL(5, 47, 9), // "AddTarget"
QT_MOC_LITERAL(6, 57, 20), // "on_changeBtn_clicked"
QT_MOC_LITERAL(7, 78, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(8, 99, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(9, 117, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(10, 136, 6), // "Search"
QT_MOC_LITERAL(11, 143, 10), // "addCityBox"
QT_MOC_LITERAL(12, 154, 12), // "eraseCityBox"
QT_MOC_LITERAL(13, 167, 1), // "i"
QT_MOC_LITERAL(14, 169, 7), // "Initial"
QT_MOC_LITERAL(15, 177, 7) // "display"

    },
    "CityManageWindow\0deleteable\0\0SearchTarget\0"
    "city\0AddTarget\0on_changeBtn_clicked\0"
    "on_searchBtn_clicked\0on_addBtn_clicked\0"
    "on_backBtn_clicked\0Search\0addCityBox\0"
    "eraseCityBox\0i\0Initial\0display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CityManageWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   86,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    1,   90,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void CityManageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CityManageWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteable(); break;
        case 1: _t->SearchTarget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->AddTarget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_changeBtn_clicked(); break;
        case 4: _t->on_searchBtn_clicked(); break;
        case 5: _t->on_addBtn_clicked(); break;
        case 6: _t->on_backBtn_clicked(); break;
        case 7: _t->Search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->addCityBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->eraseCityBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->Initial(); break;
        case 11: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->display(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CityManageWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::deleteable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CityManageWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::SearchTarget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CityManageWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::AddTarget)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CityManageWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CityManageWindow.data,
    qt_meta_data_CityManageWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CityManageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CityManageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CityManageWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CityManageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CityManageWindow::deleteable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CityManageWindow::SearchTarget(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CityManageWindow::AddTarget(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
