/****************************************************************************
** Meta object code from reading C++ file 'qwindowsvistaanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/plugins/styles/modernwindows/qwindowsvistaanimation_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsvistaanimation_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22QWindowsVistaAnimationE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsVistaAnimation::qt_create_metaobjectdata<qt_meta_tag_ZN22QWindowsVistaAnimationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsVistaAnimation"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsVistaAnimation, qt_meta_tag_ZN22QWindowsVistaAnimationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsVistaAnimation::staticMetaObject = { {
    QMetaObject::SuperData::link<QBlendStyleAnimation::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QWindowsVistaAnimationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QWindowsVistaAnimationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QWindowsVistaAnimationE_t>.metaTypes,
    nullptr
} };

void QWindowsVistaAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsVistaAnimation *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsVistaAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsVistaAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QWindowsVistaAnimationE_t>.strings))
        return static_cast<void*>(this);
    return QBlendStyleAnimation::qt_metacast(_clname);
}

int QWindowsVistaAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBlendStyleAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN23QWindowsVistaTransitionE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsVistaTransition::qt_create_metaobjectdata<qt_meta_tag_ZN23QWindowsVistaTransitionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsVistaTransition"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsVistaTransition, qt_meta_tag_ZN23QWindowsVistaTransitionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsVistaTransition::staticMetaObject = { {
    QMetaObject::SuperData::link<QWindowsVistaAnimation::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QWindowsVistaTransitionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QWindowsVistaTransitionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QWindowsVistaTransitionE_t>.metaTypes,
    nullptr
} };

void QWindowsVistaTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsVistaTransition *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsVistaTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsVistaTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QWindowsVistaTransitionE_t>.strings))
        return static_cast<void*>(this);
    return QWindowsVistaAnimation::qt_metacast(_clname);
}

int QWindowsVistaTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsVistaAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
