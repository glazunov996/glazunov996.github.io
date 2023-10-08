/****************************************************************************
** Meta object code from reading C++ file 'progsfile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QmlQuake/QmlQuake/progsfile.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progsfile.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Statement_t {
    uint offsetsAndSizes[10];
    char stringdata0[10];
    char stringdata1[3];
    char stringdata2[2];
    char stringdata3[2];
    char stringdata4[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Statement_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Statement_t qt_meta_stringdata_Statement = {
    {
        QT_MOC_LITERAL(0, 9),  // "Statement"
        QT_MOC_LITERAL(10, 2),  // "op"
        QT_MOC_LITERAL(13, 1),  // "a"
        QT_MOC_LITERAL(15, 1),  // "b"
        QT_MOC_LITERAL(17, 1)   // "c"
    },
    "Statement",
    "op",
    "a",
    "b",
    "c"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Statement[] = {

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
       1, QMetaType::UShort, 0x00015401, uint(-1), 0,
       2, QMetaType::Short, 0x00015401, uint(-1), 0,
       3, QMetaType::Short, 0x00015401, uint(-1), 0,
       4, QMetaType::Short, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Statement::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Statement.offsetsAndSizes,
    qt_meta_data_Statement,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Statement_t,
        // property 'op'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'a'
        QtPrivate::TypeAndForceComplete<qint16, std::true_type>,
        // property 'b'
        QtPrivate::TypeAndForceComplete<qint16, std::true_type>,
        // property 'c'
        QtPrivate::TypeAndForceComplete<qint16, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Statement, std::true_type>
    >,
    nullptr
} };

void Statement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Statement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->op(); break;
        case 1: *reinterpret_cast< qint16*>(_v) = _t->a(); break;
        case 2: *reinterpret_cast< qint16*>(_v) = _t->b(); break;
        case 3: *reinterpret_cast< qint16*>(_v) = _t->c(); break;
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
struct qt_meta_stringdata_Def_t {
    uint offsetsAndSizes[8];
    char stringdata0[4];
    char stringdata1[5];
    char stringdata2[4];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Def_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Def_t qt_meta_stringdata_Def = {
    {
        QT_MOC_LITERAL(0, 3),  // "Def"
        QT_MOC_LITERAL(4, 4),  // "type"
        QT_MOC_LITERAL(9, 3),  // "ofs"
        QT_MOC_LITERAL(13, 5)   // "sName"
    },
    "Def",
    "type",
    "ofs",
    "sName"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Def[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::UShort, 0x00015401, uint(-1), 0,
       2, QMetaType::UShort, 0x00015401, uint(-1), 0,
       3, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Def::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Def.offsetsAndSizes,
    qt_meta_data_Def,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Def_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'ofs'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'sName'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Def, std::true_type>
    >,
    nullptr
} };

void Def::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Def *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->ofs(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->sName(); break;
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
struct qt_meta_stringdata_Function_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[15];
    char stringdata2[11];
    char stringdata3[7];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Function_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Function_t qt_meta_stringdata_Function = {
    {
        QT_MOC_LITERAL(0, 8),  // "Function"
        QT_MOC_LITERAL(9, 14),  // "firstStatement"
        QT_MOC_LITERAL(24, 10),  // "paramStart"
        QT_MOC_LITERAL(35, 6),  // "locals"
        QT_MOC_LITERAL(42, 7),  // "profile"
        QT_MOC_LITERAL(50, 5),  // "sName"
        QT_MOC_LITERAL(56, 5),  // "sFile"
        QT_MOC_LITERAL(62, 8),  // "numParms"
        QT_MOC_LITERAL(71, 8),  // "parmSize"
        QT_MOC_LITERAL(80, 13)   // "QList<quint8>"
    },
    "Function",
    "firstStatement",
    "paramStart",
    "locals",
    "profile",
    "sName",
    "sFile",
    "numParms",
    "parmSize",
    "QList<quint8>"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Function[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       2, QMetaType::Int, 0x00015401, uint(-1), 0,
       3, QMetaType::Int, 0x00015401, uint(-1), 0,
       4, QMetaType::Int, 0x00015401, uint(-1), 0,
       5, QMetaType::Int, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015401, uint(-1), 0,
       7, QMetaType::Int, 0x00015401, uint(-1), 0,
       8, 0x80000000 | 9, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Function::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Function.offsetsAndSizes,
    qt_meta_data_Function,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Function_t,
        // property 'firstStatement'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'paramStart'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'locals'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'profile'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'sName'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'sFile'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'numParms'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'parmSize'
        QtPrivate::TypeAndForceComplete<QList<quint8>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Function, std::true_type>
    >,
    nullptr
} };

void Function::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint8> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Function *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->firstStatement(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->paramStart(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->locals(); break;
        case 3: *reinterpret_cast< qint32*>(_v) = _t->profile(); break;
        case 4: *reinterpret_cast< qint32*>(_v) = _t->sName(); break;
        case 5: *reinterpret_cast< qint32*>(_v) = _t->sFile(); break;
        case 6: *reinterpret_cast< qint32*>(_v) = _t->numParms(); break;
        case 7: *reinterpret_cast< QList<quint8>*>(_v) = _t->parmSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {
struct qt_meta_stringdata_DefMap_t {
    uint offsetsAndSizes[12];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[6];
    char stringdata5[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DefMap_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DefMap_t qt_meta_stringdata_DefMap = {
    {
        QT_MOC_LITERAL(0, 6),  // "DefMap"
        QT_MOC_LITERAL(7, 8),  // "contains"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 3),  // "key"
        QT_MOC_LITERAL(21, 5),  // "value"
        QT_MOC_LITERAL(27, 3)   // "Def"
    },
    "DefMap",
    "contains",
    "",
    "key",
    "value",
    "Def"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DefMap[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x102,    1 /* Public | MethodIsConst  */,
       4,    1,   29,    2, 0x102,    3 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    0x80000000 | 5, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject DefMap::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_DefMap.offsetsAndSizes,
    qt_meta_data_DefMap,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DefMap_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DefMap, std::true_type>,
        // method 'contains'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'value'
        QtPrivate::TypeAndForceComplete<Def, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void DefMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<DefMap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->contains((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { Def _r = _t->value((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Def*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
namespace {
struct qt_meta_stringdata_FunctionMap_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[6];
    char stringdata5[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FunctionMap_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FunctionMap_t qt_meta_stringdata_FunctionMap = {
    {
        QT_MOC_LITERAL(0, 11),  // "FunctionMap"
        QT_MOC_LITERAL(12, 8),  // "contains"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 3),  // "key"
        QT_MOC_LITERAL(26, 5),  // "value"
        QT_MOC_LITERAL(32, 8)   // "Function"
    },
    "FunctionMap",
    "contains",
    "",
    "key",
    "value",
    "Function"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FunctionMap[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x102,    1 /* Public | MethodIsConst  */,
       4,    1,   29,    2, 0x102,    3 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    0x80000000 | 5, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject FunctionMap::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_FunctionMap.offsetsAndSizes,
    qt_meta_data_FunctionMap,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FunctionMap_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FunctionMap, std::true_type>,
        // method 'contains'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'value'
        QtPrivate::TypeAndForceComplete<Function, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void FunctionMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<FunctionMap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->contains((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { Function _r = _t->value((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Function*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
namespace {
struct qt_meta_stringdata_ProgsFile_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[11];
    char stringdata2[7];
    char stringdata3[1];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[12];
    char stringdata7[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ProgsFile_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ProgsFile_t qt_meta_stringdata_ProgsFile = {
    {
        QT_MOC_LITERAL(0, 9),  // "ProgsFile"
        QT_MOC_LITERAL(10, 10),  // "globalDefs"
        QT_MOC_LITERAL(21, 6),  // "DefMap"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "fieldDefs"
        QT_MOC_LITERAL(39, 9),  // "functions"
        QT_MOC_LITERAL(49, 11),  // "FunctionMap"
        QT_MOC_LITERAL(61, 12)   // "entityFields"
    },
    "ProgsFile",
    "globalDefs",
    "DefMap",
    "",
    "fieldDefs",
    "functions",
    "FunctionMap",
    "entityFields"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ProgsFile[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    3, 0x102,    2 /* Public | MethodIsConst  */,
       4,    0,   33,    3, 0x102,    3 /* Public | MethodIsConst  */,
       5,    0,   34,    3, 0x102,    4 /* Public | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProgsFile::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseFile::staticMetaObject>(),
    qt_meta_stringdata_ProgsFile.offsetsAndSizes,
    qt_meta_data_ProgsFile,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ProgsFile_t,
        // property 'entityFields'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProgsFile, std::true_type>,
        // method 'globalDefs'
        QtPrivate::TypeAndForceComplete<DefMap, std::false_type>,
        // method 'fieldDefs'
        QtPrivate::TypeAndForceComplete<DefMap, std::false_type>,
        // method 'functions'
        QtPrivate::TypeAndForceComplete<FunctionMap, std::false_type>
    >,
    nullptr
} };

void ProgsFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgsFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { DefMap _r = _t->globalDefs();
            if (_a[0]) *reinterpret_cast< DefMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { DefMap _r = _t->fieldDefs();
            if (_a[0]) *reinterpret_cast< DefMap*>(_a[0]) = std::move(_r); }  break;
        case 2: { FunctionMap _r = _t->functions();
            if (_a[0]) *reinterpret_cast< FunctionMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProgsFile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->entityFields(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ProgsFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgsFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgsFile.stringdata0))
        return static_cast<void*>(this);
    return BaseFile::qt_metacast(_clname);
}

int ProgsFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFile::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
