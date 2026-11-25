/****************************************************************************
** Meta object code from reading C++ file 'qframe.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/widgets/qframe.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6QFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto QFrame::qt_create_metaobjectdata<qt_meta_tag_ZN6QFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QFrame",
        "frameShape",
        "Shape",
        "frameShadow",
        "Shadow",
        "lineWidth",
        "midLineWidth",
        "frameWidth",
        "frameRect",
        "QRect",
        "NoFrame",
        "Box",
        "Panel",
        "WinPanel",
        "HLine",
        "VLine",
        "StyledPanel",
        "Plain",
        "Raised",
        "Sunken"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'frameShape'
        QtMocHelpers::PropertyData<enum Shape>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'frameShadow'
        QtMocHelpers::PropertyData<enum Shadow>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'lineWidth'
        QtMocHelpers::PropertyData<int>(5, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'midLineWidth'
        QtMocHelpers::PropertyData<int>(6, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'frameWidth'
        QtMocHelpers::PropertyData<int>(7, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'frameRect'
        QtMocHelpers::PropertyData<QRect>(8, 0x80000000 | 9, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Shape'
        QtMocHelpers::EnumData<enum Shape>(2, 2, QMC::EnumFlags{}).add({
            {   10, Shape::NoFrame },
            {   11, Shape::Box },
            {   12, Shape::Panel },
            {   13, Shape::WinPanel },
            {   14, Shape::HLine },
            {   15, Shape::VLine },
            {   16, Shape::StyledPanel },
        }),
        // enum 'Shadow'
        QtMocHelpers::EnumData<enum Shadow>(4, 4, QMC::EnumFlags{}).add({
            {   17, Shadow::Plain },
            {   18, Shadow::Raised },
            {   19, Shadow::Sunken },
        }),
    };
    return QtMocHelpers::metaObjectData<QFrame, qt_meta_tag_ZN6QFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6QFrameE_t>.metaTypes,
    nullptr
} };

void QFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QFrame *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Shape*>(_v) = _t->frameShape(); break;
        case 1: *reinterpret_cast<enum Shadow*>(_v) = _t->frameShadow(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->lineWidth(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->midLineWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->frameWidth(); break;
        case 5: *reinterpret_cast<QRect*>(_v) = _t->frameRect(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrameShape(*reinterpret_cast<enum Shape*>(_v)); break;
        case 1: _t->setFrameShadow(*reinterpret_cast<enum Shadow*>(_v)); break;
        case 2: _t->setLineWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setMidLineWidth(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setFrameRect(*reinterpret_cast<QRect*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QFrameE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
