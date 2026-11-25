/****************************************************************************
** Meta object code from reading C++ file 'qwindowsmenu.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/plugins/platforms/windows/qwindowsmenu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsmenu.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16QWindowsMenuItemE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsMenuItem::qt_create_metaobjectdata<qt_meta_tag_ZN16QWindowsMenuItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsMenuItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsMenuItem, qt_meta_tag_ZN16QWindowsMenuItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsMenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenuItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QWindowsMenuItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QWindowsMenuItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QWindowsMenuItemE_t>.metaTypes,
    nullptr
} };

void QWindowsMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsMenuItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QWindowsMenuItemE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformMenuItem::qt_metacast(_clname);
}

int QWindowsMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenuItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12QWindowsMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsMenu::qt_create_metaobjectdata<qt_meta_tag_ZN12QWindowsMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsMenu, qt_meta_tag_ZN12QWindowsMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QWindowsMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QWindowsMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QWindowsMenuE_t>.metaTypes,
    nullptr
} };

void QWindowsMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QWindowsMenuE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformMenu::qt_metacast(_clname);
}

int QWindowsMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17QWindowsPopupMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsPopupMenu::qt_create_metaobjectdata<qt_meta_tag_ZN17QWindowsPopupMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsPopupMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsPopupMenu, qt_meta_tag_ZN17QWindowsPopupMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsPopupMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWindowsMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QWindowsPopupMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QWindowsPopupMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QWindowsPopupMenuE_t>.metaTypes,
    nullptr
} };

void QWindowsPopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsPopupMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsPopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsPopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QWindowsPopupMenuE_t>.strings))
        return static_cast<void*>(this);
    return QWindowsMenu::qt_metacast(_clname);
}

int QWindowsPopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15QWindowsMenuBarE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsMenuBar::qt_create_metaobjectdata<qt_meta_tag_ZN15QWindowsMenuBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsMenuBar"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsMenuBar, qt_meta_tag_ZN15QWindowsMenuBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsMenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenuBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QWindowsMenuBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QWindowsMenuBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QWindowsMenuBarE_t>.metaTypes,
    nullptr
} };

void QWindowsMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsMenuBar *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QWindowsMenuBarE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformMenuBar::qt_metacast(_clname);
}

int QWindowsMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenuBar::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
