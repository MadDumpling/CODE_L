/****************************************************************************
** Meta object code from reading C++ file 'qmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/widgets/qmainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto QMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN11QMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QMainWindow",
        "iconSizeChanged",
        "",
        "QSize",
        "iconSize",
        "toolButtonStyleChanged",
        "Qt::ToolButtonStyle",
        "toolButtonStyle",
        "tabifiedDockWidgetActivated",
        "QDockWidget*",
        "dockWidget",
        "setAnimated",
        "enabled",
        "setDockNestingEnabled",
        "setUnifiedTitleAndToolBarOnMac",
        "set",
        "animated",
        "documentMode",
        "tabShape",
        "QTabWidget::TabShape",
        "dockNestingEnabled",
        "dockOptions",
        "DockOptions",
        "unifiedTitleAndToolBarOnMac",
        "DockOption",
        "AnimatedDocks",
        "AllowNestedDocks",
        "AllowTabbedDocks",
        "ForceTabbedDocks",
        "VerticalTabs",
        "GroupedDragging"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'iconSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'toolButtonStyleChanged'
        QtMocHelpers::SignalData<void(Qt::ToolButtonStyle)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'tabifiedDockWidgetActivated'
        QtMocHelpers::SignalData<void(QDockWidget *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'setAnimated'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setDockNestingEnabled'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setUnifiedTitleAndToolBarOnMac'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'iconSize'
        QtMocHelpers::PropertyData<QSize>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'toolButtonStyle'
        QtMocHelpers::PropertyData<Qt::ToolButtonStyle>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'animated'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'documentMode'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tabShape'
        QtMocHelpers::PropertyData<QTabWidget::TabShape>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'dockNestingEnabled'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dockOptions'
        QtMocHelpers::PropertyData<DockOptions>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'unifiedTitleAndToolBarOnMac'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DockOption'
        QtMocHelpers::EnumData<enum DockOption>(24, 24, QMC::EnumFlags{}).add({
            {   25, DockOption::AnimatedDocks },
            {   26, DockOption::AllowNestedDocks },
            {   27, DockOption::AllowTabbedDocks },
            {   28, DockOption::ForceTabbedDocks },
            {   29, DockOption::VerticalTabs },
            {   30, DockOption::GroupedDragging },
        }),
        // flag 'DockOptions'
        QtMocHelpers::EnumData<DockOptions>(22, 24, QMC::EnumIsFlag).add({
            {   25, DockOption::AnimatedDocks },
            {   26, DockOption::AllowNestedDocks },
            {   27, DockOption::AllowTabbedDocks },
            {   28, DockOption::ForceTabbedDocks },
            {   29, DockOption::VerticalTabs },
            {   30, DockOption::GroupedDragging },
        }),
    };
    return QtMocHelpers::metaObjectData<QMainWindow, qt_meta_tag_ZN11QMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN11QMainWindowE[] = {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMainWindowE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN11QMainWindowE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11QMainWindowE_t>.metaTypes,
    nullptr
} };

void QMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->iconSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 1: _t->toolButtonStyleChanged((*reinterpret_cast<std::add_pointer_t<Qt::ToolButtonStyle>>(_a[1]))); break;
        case 2: _t->tabifiedDockWidgetActivated((*reinterpret_cast<std::add_pointer_t<QDockWidget*>>(_a[1]))); break;
        case 3: _t->setAnimated((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setDockNestingEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setUnifiedTitleAndToolBarOnMac((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QMainWindow::*)(const QSize & )>(_a, &QMainWindow::iconSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMainWindow::*)(Qt::ToolButtonStyle )>(_a, &QMainWindow::toolButtonStyleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMainWindow::*)(QDockWidget * )>(_a, &QMainWindow::tabifiedDockWidgetActivated, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QSize*>(_v) = _t->iconSize(); break;
        case 1: *reinterpret_cast<Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isAnimated(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->documentMode(); break;
        case 4: *reinterpret_cast<QTabWidget::TabShape*>(_v) = _t->tabShape(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isDockNestingEnabled(); break;
        case 6: QtMocHelpers::assignFlags<DockOptions>(_v, _t->dockOptions()); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->unifiedTitleAndToolBarOnMac(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconSize(*reinterpret_cast<QSize*>(_v)); break;
        case 1: _t->setToolButtonStyle(*reinterpret_cast<Qt::ToolButtonStyle*>(_v)); break;
        case 2: _t->setAnimated(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setDocumentMode(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setTabShape(*reinterpret_cast<QTabWidget::TabShape*>(_v)); break;
        case 5: _t->setDockNestingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDockOptions(*reinterpret_cast<DockOptions*>(_v)); break;
        case 7: _t->setUnifiedTitleAndToolBarOnMac(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QMainWindow::iconSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QMainWindow::tabifiedDockWidgetActivated(QDockWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
