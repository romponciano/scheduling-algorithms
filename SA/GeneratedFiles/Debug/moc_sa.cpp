/****************************************************************************
** Meta object code from reading C++ file 'sa.h'
**
** Created: Fri 26. Oct 09:51:49 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sa.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SA[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       4,    3,    3,    3, 0x0a,
      13,    3,    3,    3, 0x0a,
      24,    3,    3,    3, 0x0a,
      35,    3,    3,    3, 0x0a,
      47,    3,    3,    3, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SA[] = {
    "SA\0\0addJob()\0calcular()\0addQueue()\0"
    "removeJob()\0removeQueue()\0"
};

void SA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SA *_t = static_cast<SA *>(_o);
        switch (_id) {
        case 0: _t->addJob(); break;
        case 1: _t->calcular(); break;
        case 2: _t->addQueue(); break;
        case 3: _t->removeJob(); break;
        case 4: _t->removeQueue(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SA::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SA::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SA,
      qt_meta_data_SA, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SA::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SA::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SA))
        return static_cast<void*>(const_cast< SA*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
