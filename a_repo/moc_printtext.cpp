/****************************************************************************
** Meta object code from reading C++ file 'printtext.h'
**
** Created: Sat Jun 8 05:00:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "printtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintText[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrintText[] = {
    "PrintText\0\0slotPrint()\0"
};

const QMetaObject PrintText::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PrintText,
      qt_meta_data_PrintText, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintText))
        return static_cast<void*>(const_cast< PrintText*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PrintText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotPrint(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
