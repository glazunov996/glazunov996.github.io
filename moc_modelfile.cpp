/****************************************************************************
** Meta object code from reading C++ file 'modelfile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QmlQuake/QmlQuake/modelfile.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelfile.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ClipNode_t {
    uint offsetsAndSizes[8];
    char stringdata0[9];
    char stringdata1[9];
    char stringdata2[9];
    char stringdata3[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ClipNode_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ClipNode_t qt_meta_stringdata_ClipNode = {
    {
        QT_MOC_LITERAL(0, 8),  // "ClipNode"
        QT_MOC_LITERAL(9, 8),  // "planeNum"
        QT_MOC_LITERAL(18, 8),  // "children"
        QT_MOC_LITERAL(27, 13)   // "QList<qint32>"
    },
    "ClipNode",
    "planeNum",
    "children",
    "QList<qint32>"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ClipNode[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClipNode::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ClipNode.offsetsAndSizes,
    qt_meta_data_ClipNode,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ClipNode_t,
        // property 'planeNum'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'children'
        QtPrivate::TypeAndForceComplete<QList<qint32>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClipNode, std::true_type>
    >,
    nullptr
} };

void ClipNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ClipNode *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->planeNum(); break;
        case 1: *reinterpret_cast< QList<qint32>*>(_v) = _t->children(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {
struct qt_meta_stringdata_Plane_t {
    uint offsetsAndSizes[10];
    char stringdata0[6];
    char stringdata1[7];
    char stringdata2[5];
    char stringdata3[5];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Plane_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Plane_t qt_meta_stringdata_Plane = {
    {
        QT_MOC_LITERAL(0, 5),  // "Plane"
        QT_MOC_LITERAL(6, 6),  // "normal"
        QT_MOC_LITERAL(13, 4),  // "dist"
        QT_MOC_LITERAL(18, 4),  // "type"
        QT_MOC_LITERAL(23, 8)   // "signBits"
    },
    "Plane",
    "normal",
    "dist",
    "type",
    "signBits"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Plane[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVector3D, 0x00015401, uint(-1), 0,
       2, QMetaType::Float, 0x00015401, uint(-1), 0,
       3, QMetaType::UChar, 0x00015401, uint(-1), 0,
       4, QMetaType::UChar, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Plane::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Plane.offsetsAndSizes,
    qt_meta_data_Plane,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Plane_t,
        // property 'normal'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // property 'dist'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<quint8, std::true_type>,
        // property 'signBits'
        QtPrivate::TypeAndForceComplete<quint8, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Plane, std::true_type>
    >,
    nullptr
} };

void Plane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Plane *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->normal(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->dist(); break;
        case 2: *reinterpret_cast< quint8*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->signBits(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {
struct qt_meta_stringdata_Hull_t {
    uint offsetsAndSizes[22];
    char stringdata0[5];
    char stringdata1[11];
    char stringdata2[9];
    char stringdata3[1];
    char stringdata4[4];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[14];
    char stringdata8[13];
    char stringdata9[9];
    char stringdata10[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Hull_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Hull_t qt_meta_stringdata_Hull = {
    {
        QT_MOC_LITERAL(0, 4),  // "Hull"
        QT_MOC_LITERAL(5, 10),  // "clipNodeAt"
        QT_MOC_LITERAL(16, 8),  // "ClipNode"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 3),  // "num"
        QT_MOC_LITERAL(30, 7),  // "planeAt"
        QT_MOC_LITERAL(38, 5),  // "Plane"
        QT_MOC_LITERAL(44, 13),  // "firstClipNode"
        QT_MOC_LITERAL(58, 12),  // "lastClipNode"
        QT_MOC_LITERAL(71, 8),  // "clipMins"
        QT_MOC_LITERAL(80, 8)   // "clipMaxs"
    },
    "Hull",
    "clipNodeAt",
    "ClipNode",
    "",
    "num",
    "planeAt",
    "Plane",
    "firstClipNode",
    "lastClipNode",
    "clipMins",
    "clipMaxs"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Hull[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    3, 0x102,    5 /* Public | MethodIsConst  */,
       5,    1,   29,    3, 0x102,    7 /* Public | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    0x80000000 | 6, QMetaType::Int,    4,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015401, uint(-1), 0,
       8, QMetaType::Int, 0x00015401, uint(-1), 0,
       9, QMetaType::QVector3D, 0x00015401, uint(-1), 0,
      10, QMetaType::QVector3D, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Hull::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Hull.offsetsAndSizes,
    qt_meta_data_Hull,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Hull_t,
        // property 'firstClipNode'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'lastClipNode'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'clipMins'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // property 'clipMaxs'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Hull, std::true_type>,
        // method 'clipNodeAt'
        QtPrivate::TypeAndForceComplete<ClipNode, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'planeAt'
        QtPrivate::TypeAndForceComplete<Plane, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>
    >,
    nullptr
} };

void Hull::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<Hull *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { ClipNode _r = _t->clipNodeAt((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClipNode*>(_a[0]) = std::move(_r); }  break;
        case 1: { Plane _r = _t->planeAt((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plane*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Hull *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->firstClipNode(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->lastClipNode(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->clipMins(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->clipMaxs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}
namespace {
struct qt_meta_stringdata_ModelFile_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[6];
    char stringdata2[12];
    char stringdata3[1];
    char stringdata4[5];
    char stringdata5[6];
    char stringdata6[14];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ModelFile_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ModelFile_t qt_meta_stringdata_ModelFile = {
    {
        QT_MOC_LITERAL(0, 9),  // "ModelFile"
        QT_MOC_LITERAL(10, 5),  // "hulls"
        QT_MOC_LITERAL(16, 11),  // "QList<Hull>"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 4),  // "mesh"
        QT_MOC_LITERAL(34, 5),  // "Mesh*"
        QT_MOC_LITERAL(40, 13),  // "materialCount"
        QT_MOC_LITERAL(54, 8)   // "entities"
    },
    "ModelFile",
    "hulls",
    "QList<Hull>",
    "",
    "mesh",
    "Mesh*",
    "materialCount",
    "entities"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ModelFile[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    3, 0x102,    4 /* Public | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 2,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       6, QMetaType::UInt, 0x00015401, uint(-1), 0,
       7, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModelFile::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseFile::staticMetaObject>(),
    qt_meta_stringdata_ModelFile.offsetsAndSizes,
    qt_meta_data_ModelFile,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ModelFile_t,
        // property 'mesh'
        QtPrivate::TypeAndForceComplete<Mesh*, std::true_type>,
        // property 'materialCount'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'entities'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModelFile, std::true_type>,
        // method 'hulls'
        QtPrivate::TypeAndForceComplete<QList<Hull>, std::false_type>
    >,
    nullptr
} };

void ModelFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<Hull> _r = _t->hulls();
            if (_a[0]) *reinterpret_cast< QList<Hull>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Mesh* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ModelFile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mesh**>(_v) = _t->mesh(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->materialCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->entities(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ModelFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelFile.stringdata0))
        return static_cast<void*>(this);
    return BaseFile::qt_metacast(_clname);
}

int ModelFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFile::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
