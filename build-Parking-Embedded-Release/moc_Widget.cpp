/****************************************************************************
** Meta object code from reading C++ file 'Widget.h'
**
** Created: Fri Dec 17 08:34:15 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Parking/Widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,    8,    7,    7, 0x08,
      55,   48,    7,    7, 0x08,
      85,   79,    7,    7, 0x08,
     106,   79,    7,    7, 0x08,
     129,    7,    7,    7, 0x08,
     164,  153,    7,    7, 0x08,
     191,   79,    7,    7, 0x08,
     210,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0cmdType,result\0onCardError(int,QString)\0"
    "cardid\0onFoundCard(QByteArray)\0block\0"
    "onWalletCharged(int)\0onWalletReCharged(int)\0"
    "on_pushButton_clicked()\0block,data\0"
    "onReadCard(int,QByteArray)\0"
    "onWrittenCard(int)\0on_pushButton_2_clicked()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onCardError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: onFoundCard((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: onWalletCharged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: onWalletReCharged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_pushButton_clicked(); break;
        case 5: onReadCard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: onWrittenCard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
