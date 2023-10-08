/****************************************************************************
** Meta object code from reading C++ file 'modeltexturedata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QmlQuake/QmlQuake/modeltexturedata.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeltexturedata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ModelTextureData_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ModelTextureData_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ModelTextureData_t qt_meta_stringdata_ModelTextureData = {
    {
        QT_MOC_LITERAL(0, 16),  // "ModelTextureData"
        QT_MOC_LITERAL(17, 12),  // "indexChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 11),  // "meshChanged"
        QT_MOC_LITERAL(43, 8),  // "setIndex"
        QT_MOC_LITERAL(52, 5),  // "index"
        QT_MOC_LITERAL(58, 7),  // "setMesh"
        QT_MOC_LITERAL(66, 5),  // "Mesh*"
        QT_MOC_LITERAL(72, 4)   // "mesh"
    },
    "ModelTextureData",
    "indexChanged",
    "",
    "meshChanged",
    "setIndex",
    "index",
    "setMesh",
    "Mesh*",
    "mesh"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ModelTextureData[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x0a,    5 /* Public */,
       6,    1,   43,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00015103, uint(0), 0,
       8, 0x80000000 | 7, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModelTextureData::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuick3DTextureData::staticMetaObject>(),
    qt_meta_stringdata_ModelTextureData.offsetsAndSizes,
    qt_meta_data_ModelTextureData,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ModelTextureData_t,
        // property 'index'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'mesh'
        QtPrivate::TypeAndForceComplete<Mesh*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModelTextureData, std::true_type>,
        // method 'indexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'meshChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'setMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mesh *, std::false_type>
    >,
    nullptr
} };

void ModelTextureData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelTextureData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->meshChanged(); break;
        case 2: _t->setIndex((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 3: _t->setMesh((*reinterpret_cast< std::add_pointer_t<Mesh*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Mesh* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelTextureData::*)();
            if (_t _q_method = &ModelTextureData::indexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModelTextureData::*)();
            if (_t _q_method = &ModelTextureData::meshChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Mesh* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ModelTextureData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->index(); break;
        case 1: *reinterpret_cast< Mesh**>(_v) = _t->mesh(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ModelTextureData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndex(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setMesh(*reinterpret_cast< Mesh**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ModelTextureData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelTextureData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelTextureData.stringdata0))
        return static_cast<void*>(this);
    return QQuick3DTextureData::qt_metacast(_clname);
}

int ModelTextureData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuick3DTextureData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ModelTextureData::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModelTextureData::meshChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
