/****************************************************************************
** Meta object code from reading C++ file 'qplatformsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/gui/kernel/qplatformsystemtrayicon.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsystemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23QPlatformSystemTrayIconE_t {};
} // unnamed namespace

template <> constexpr inline auto QPlatformSystemTrayIcon::qt_create_metaobjectdata<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QPlatformSystemTrayIcon",
        "activated",
        "",
        "QPlatformSystemTrayIcon::ActivationReason",
        "reason",
        "contextMenuRequested",
        "QPoint",
        "globalPos",
        "const QPlatformScreen*",
        "screen",
        "messageClicked",
        "ActivationReason",
        "Unknown",
        "Context",
        "DoubleClick",
        "Trigger",
        "MiddleClick",
        "MessageIcon",
        "NoIcon",
        "Information",
        "Warning",
        "Critical"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activated'
        QtMocHelpers::SignalData<void(QPlatformSystemTrayIcon::ActivationReason)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'contextMenuRequested'
        QtMocHelpers::SignalData<void(QPoint, const QPlatformScreen *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'messageClicked'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ActivationReason'
        QtMocHelpers::EnumData<enum ActivationReason>(11, 11, QMC::EnumFlags{}).add({
            {   12, ActivationReason::Unknown },
            {   13, ActivationReason::Context },
            {   14, ActivationReason::DoubleClick },
            {   15, ActivationReason::Trigger },
            {   16, ActivationReason::MiddleClick },
        }),
        // enum 'MessageIcon'
        QtMocHelpers::EnumData<enum MessageIcon>(17, 17, QMC::EnumFlags{}).add({
            {   18, MessageIcon::NoIcon },
            {   19, MessageIcon::Information },
            {   20, MessageIcon::Warning },
            {   21, MessageIcon::Critical },
        }),
    };
    return QtMocHelpers::metaObjectData<QPlatformSystemTrayIcon, qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QPlatformSystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>.metaTypes,
    nullptr
} };

void QPlatformSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QPlatformSystemTrayIcon *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast<std::add_pointer_t<QPlatformSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const QPlatformScreen*>>(_a[2]))); break;
        case 2: _t->messageClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QPlatformSystemTrayIcon::*)(QPlatformSystemTrayIcon::ActivationReason )>(_a, &QPlatformSystemTrayIcon::activated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QPlatformSystemTrayIcon::*)(QPoint , const QPlatformScreen * )>(_a, &QPlatformSystemTrayIcon::contextMenuRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QPlatformSystemTrayIcon::*)()>(_a, &QPlatformSystemTrayIcon::messageClicked, 2))
            return;
    }
}

const QMetaObject *QPlatformSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QPlatformSystemTrayIcon::activated(QPlatformSystemTrayIcon::ActivationReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QPlatformSystemTrayIcon::contextMenuRequested(QPoint _t1, const QPlatformScreen * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void QPlatformSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
