/****************************************************************************
** Meta object code from reading C++ file 'basefile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QmlQuake/QmlQuake/basefile.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basefile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_BaseFile_t {
    uint offsetsAndSizes[28];
    char stringdata0[9];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[5];
    char stringdata7[10];
    char stringdata8[7];
    char stringdata9[7];
    char stringdata10[7];
    char stringdata11[5];
    char stringdata12[6];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BaseFile_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BaseFile_t qt_meta_stringdata_BaseFile = {
    {
        QT_MOC_LITERAL(0, 8),  // "BaseFile"
        QT_MOC_LITERAL(9, 11),  // "nameChanged"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 13),  // "activeChanged"
        QT_MOC_LITERAL(36, 13),  // "statusChanged"
        QT_MOC_LITERAL(50, 7),  // "setName"
        QT_MOC_LITERAL(58, 4),  // "name"
        QT_MOC_LITERAL(63, 9),  // "setActive"
        QT_MOC_LITERAL(73, 6),  // "active"
        QT_MOC_LITERAL(80, 6),  // "status"
        QT_MOC_LITERAL(87, 6),  // "Status"
        QT_MOC_LITERAL(94, 4),  // "Null"
        QT_MOC_LITERAL(99, 5),  // "Ready"
        QT_MOC_LITERAL(105, 5)   // "Error"
    },
    "BaseFile",
    "nameChanged",
    "",
    "activeChanged",
    "statusChanged",
    "setName",
    "name",
    "setActive",
    "active",
    "status",
    "Status",
    "Null",
    "Ready",
    "Error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BaseFile[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   53, // properties
       1,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,
       4,    0,   46,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   47,    2, 0x0a,    7 /* Public */,
       7,    1,   50,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(0), 0,
       8, QMetaType::Bool, 0x00015103, uint(1), 0,
       9, 0x80000000 | 10, 0x00015009, uint(2), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,   73,

 // enum data: key, value
      11, uint(BaseFile::Null),
      12, uint(BaseFile::Ready),
      13, uint(BaseFile::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject BaseFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BaseFile.offsetsAndSizes,
    qt_meta_data_BaseFile,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BaseFile_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'active'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'status'
        QtPrivate::TypeAndForceComplete<Status, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BaseFile, std::true_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void BaseFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->setName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaseFile::*)();
            if (_t _q_method = &BaseFile::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BaseFile::*)();
            if (_t _q_method = &BaseFile::activeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BaseFile::*)();
            if (_t _q_method = &BaseFile::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BaseFile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BaseFile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *BaseFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFile.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int BaseFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BaseFile::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BaseFile::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BaseFile::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
