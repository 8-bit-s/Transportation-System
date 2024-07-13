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
    QByteArrayData data[21];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CityManageWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CityManageWindow_t qt_meta_stringdata_CityManageWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CityManageWindow"
QT_MOC_LITERAL(1, 17, 12), // "SearchTarget"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "city"
QT_MOC_LITERAL(4, 36, 9), // "AddTarget"
QT_MOC_LITERAL(5, 46, 12), // "eraseCityBox"
QT_MOC_LITERAL(6, 59, 20), // "on_changeBtn_clicked"
QT_MOC_LITERAL(7, 80, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(8, 101, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(9, 119, 20), // "on_deleteBtn_clicked"
QT_MOC_LITERAL(10, 140, 18), // "on_editBtn_clicked"
QT_MOC_LITERAL(11, 159, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(12, 178, 20), // "on_backtoBtn_clicked"
QT_MOC_LITERAL(13, 199, 19), // "on_firstBtn_clicked"
QT_MOC_LITERAL(14, 219, 18), // "on_lastBtn_clicked"
QT_MOC_LITERAL(15, 238, 18), // "on_nextBtn_clicked"
QT_MOC_LITERAL(16, 257, 17), // "on_preBtn_clicked"
QT_MOC_LITERAL(17, 275, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(18, 295, 6), // "Search"
QT_MOC_LITERAL(19, 302, 10), // "addCityBox"
QT_MOC_LITERAL(20, 313, 20) // "updateCheckedButtons"

    },
    "CityManageWindow\0SearchTarget\0\0city\0"
    "AddTarget\0eraseCityBox\0on_changeBtn_clicked\0"
    "on_searchBtn_clicked\0on_addBtn_clicked\0"
    "on_deleteBtn_clicked\0on_editBtn_clicked\0"
    "on_backBtn_clicked\0on_backtoBtn_clicked\0"
    "on_firstBtn_clicked\0on_lastBtn_clicked\0"
    "on_nextBtn_clicked\0on_preBtn_clicked\0"
    "on_closeBtn_clicked\0Search\0addCityBox\0"
    "updateCheckedButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CityManageWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  111,    2, 0x08 /* Private */,
       7,    0,  112,    2, 0x08 /* Private */,
       8,    0,  113,    2, 0x08 /* Private */,
       9,    0,  114,    2, 0x08 /* Private */,
      10,    0,  115,    2, 0x08 /* Private */,
      11,    0,  116,    2, 0x08 /* Private */,
      12,    0,  117,    2, 0x08 /* Private */,
      13,    0,  118,    2, 0x08 /* Private */,
      14,    0,  119,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    1,  123,    2, 0x08 /* Private */,
      19,    1,  126,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

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
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void CityManageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CityManageWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchTarget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->AddTarget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->eraseCityBox(); break;
        case 3: _t->on_changeBtn_clicked(); break;
        case 4: _t->on_searchBtn_clicked(); break;
        case 5: _t->on_addBtn_clicked(); break;
        case 6: _t->on_deleteBtn_clicked(); break;
        case 7: _t->on_editBtn_clicked(); break;
        case 8: _t->on_backBtn_clicked(); break;
        case 9: _t->on_backtoBtn_clicked(); break;
        case 10: _t->on_firstBtn_clicked(); break;
        case 11: _t->on_lastBtn_clicked(); break;
        case 12: _t->on_nextBtn_clicked(); break;
        case 13: _t->on_preBtn_clicked(); break;
        case 14: _t->on_closeBtn_clicked(); break;
        case 15: _t->Search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->addCityBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->updateCheckedButtons(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CityManageWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::SearchTarget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CityManageWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::AddTarget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CityManageWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CityManageWindow::eraseCityBox)) {
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void CityManageWindow::SearchTarget(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CityManageWindow::AddTarget(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CityManageWindow::eraseCityBox()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
