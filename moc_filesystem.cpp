/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QmlQuake/QmlQuake/filesystem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FileSystem_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[5];
    char stringdata3[19];
    char stringdata4[1];
    char stringdata5[15];
    char stringdata6[6];
    char stringdata7[26];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FileSystem_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FileSystem_t qt_meta_stringdata_FileSystem = {
    {
        QT_MOC_LITERAL(0, 10),  // "FileSystem"
        QT_MOC_LITERAL(11, 15),  // "DefaultProperty"
        QT_MOC_LITERAL(27, 4),  // "data"
        QT_MOC_LITERAL(32, 18),  // "searchPathsChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 14),  // "setSearchPaths"
        QT_MOC_LITERAL(67, 5),  // "paths"
        QT_MOC_LITERAL(73, 25),  // "QQmlListProperty<QObject>"
        QT_MOC_LITERAL(99, 11)   // "searchPaths"
    },
    "FileSystem",
    "DefaultProperty",
    "data",
    "searchPathsChanged",
    "",
    "setSearchPaths",
    "paths",
    "QQmlListProperty<QObject>",
    "searchPaths"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FileSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   28,    4, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    4, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,

 // properties: name, type, flags
       2, 0x80000000 | 7, 0x00014009, uint(-1), 0,
       8, QMetaType::QStringList, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileSystem.offsetsAndSizes,
    qt_meta_data_FileSystem,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FileSystem_t,
        // property 'data'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<QObject>, std::true_type>,
        // property 'searchPaths'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileSystem, std::true_type>,
        // method 'searchPathsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSearchPaths'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>
    >,
    nullptr
} };

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchPathsChanged(); break;
        case 1: _t->setSearchPaths((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSystem::*)();
            if (_t _q_method = &FileSystem::searchPathsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileSystem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->searchPaths(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileSystem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSearchPaths(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FileSystem::searchPathsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
