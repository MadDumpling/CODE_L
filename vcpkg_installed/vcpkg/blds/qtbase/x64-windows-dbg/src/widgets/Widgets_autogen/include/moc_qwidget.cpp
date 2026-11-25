/****************************************************************************
** Meta object code from reading C++ file 'qwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/kernel/qwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7QWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto QWidget::qt_create_metaobjectdata<qt_meta_tag_ZN7QWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWidget",
        "windowTitleChanged",
        "",
        "title",
        "windowIconChanged",
        "QIcon",
        "icon",
        "windowIconTextChanged",
        "iconText",
        "customContextMenuRequested",
        "QPoint",
        "pos",
        "setEnabled",
        "setDisabled",
        "setWindowModified",
        "setWindowTitle",
        "setStyleSheet",
        "styleSheet",
        "setFocus",
        "update",
        "repaint",
        "setVisible",
        "visible",
        "setHidden",
        "hidden",
        "show",
        "hide",
        "showMinimized",
        "showMaximized",
        "showFullScreen",
        "showNormal",
        "close",
        "raise",
        "lower",
        "updateMicroFocus",
        "Qt::InputMethodQuery",
        "query",
        "_q_showIfNotHidden",
        "_q_closestWindowHandle",
        "QWindow*",
        "grab",
        "QPixmap",
        "QRect",
        "rectangle",
        "modal",
        "windowModality",
        "Qt::WindowModality",
        "enabled",
        "geometry",
        "frameGeometry",
        "normalGeometry",
        "x",
        "y",
        "frameSize",
        "QSize",
        "size",
        "width",
        "height",
        "rect",
        "childrenRect",
        "childrenRegion",
        "QRegion",
        "sizePolicy",
        "QSizePolicy",
        "minimumSize",
        "maximumSize",
        "minimumWidth",
        "minimumHeight",
        "maximumWidth",
        "maximumHeight",
        "sizeIncrement",
        "baseSize",
        "palette",
        "QPalette",
        "font",
        "QFont",
        "cursor",
        "QCursor",
        "mouseTracking",
        "tabletTracking",
        "isActiveWindow",
        "focusPolicy",
        "Qt::FocusPolicy",
        "focus",
        "contextMenuPolicy",
        "Qt::ContextMenuPolicy",
        "updatesEnabled",
        "minimized",
        "maximized",
        "fullScreen",
        "sizeHint",
        "minimumSizeHint",
        "acceptDrops",
        "windowTitle",
        "windowIcon",
        "windowIconText",
        "windowOpacity",
        "windowModified",
        "toolTip",
        "toolTipDuration",
        "statusTip",
        "whatsThis",
        "accessibleName",
        "accessibleDescription",
        "accessibleIdentifier",
        "layoutDirection",
        "Qt::LayoutDirection",
        "autoFillBackground",
        "locale",
        "windowFilePath",
        "inputMethodHints",
        "Qt::InputMethodHints"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowTitleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'windowIconChanged'
        QtMocHelpers::SignalData<void(const QIcon &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'windowIconTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Signal 'customContextMenuRequested'
        QtMocHelpers::SignalData<void(const QPoint &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'setEnabled'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setDisabled'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setWindowModified'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setWindowTitle'
        QtMocHelpers::SlotData<void(const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setStyleSheet'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setFocus'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'repaint'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVisible'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setHidden'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'show'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hide'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showMinimized'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showMaximized'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showFullScreen'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showNormal'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<bool()>(31, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'raise'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lower'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateMicroFocus'
        QtMocHelpers::SlotData<void(Qt::InputMethodQuery)>(34, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'updateMicroFocus'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot '_q_showIfNotHidden'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot '_q_closestWindowHandle'
        QtMocHelpers::SlotData<QWindow *()>(38, 2, QMC::AccessPrivate, 0x80000000 | 39),
        // Method 'grab'
        QtMocHelpers::MethodData<QPixmap(const QRect &)>(40, 2, QMC::AccessPublic, 0x80000000 | 41, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Method 'grab'
        QtMocHelpers::MethodData<QPixmap()>(40, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 41),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'windowModality'
        QtMocHelpers::PropertyData<Qt::WindowModality>(45, 0x80000000 | 46, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'geometry'
        QtMocHelpers::PropertyData<QRect>(48, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'frameGeometry'
        QtMocHelpers::PropertyData<QRect>(49, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'normalGeometry'
        QtMocHelpers::PropertyData<QRect>(50, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'x'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'y'
        QtMocHelpers::PropertyData<int>(52, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'pos'
        QtMocHelpers::PropertyData<QPoint>(11, 0x80000000 | 10, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::EnumOrFlag),
        // property 'frameSize'
        QtMocHelpers::PropertyData<QSize>(53, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(55, 0x80000000 | 54, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::EnumOrFlag),
        // property 'width'
        QtMocHelpers::PropertyData<int>(56, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'height'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'rect'
        QtMocHelpers::PropertyData<QRect>(58, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'childrenRect'
        QtMocHelpers::PropertyData<QRect>(59, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'childrenRegion'
        QtMocHelpers::PropertyData<QRegion>(60, 0x80000000 | 61, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'sizePolicy'
        QtMocHelpers::PropertyData<QSizePolicy>(62, 0x80000000 | 63, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'minimumSize'
        QtMocHelpers::PropertyData<QSize>(64, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'maximumSize'
        QtMocHelpers::PropertyData<QSize>(65, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'minimumWidth'
        QtMocHelpers::PropertyData<int>(66, QMetaType::Int, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::StdCppSet),
        // property 'minimumHeight'
        QtMocHelpers::PropertyData<int>(67, QMetaType::Int, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::StdCppSet),
        // property 'maximumWidth'
        QtMocHelpers::PropertyData<int>(68, QMetaType::Int, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::StdCppSet),
        // property 'maximumHeight'
        QtMocHelpers::PropertyData<int>(69, QMetaType::Int, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::StdCppSet),
        // property 'sizeIncrement'
        QtMocHelpers::PropertyData<QSize>(70, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'baseSize'
        QtMocHelpers::PropertyData<QSize>(71, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'palette'
        QtMocHelpers::PropertyData<QPalette>(72, 0x80000000 | 73, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'font'
        QtMocHelpers::PropertyData<QFont>(74, 0x80000000 | 75, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'cursor'
        QtMocHelpers::PropertyData<QCursor>(76, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'mouseTracking'
        QtMocHelpers::PropertyData<bool>(78, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'tabletTracking'
        QtMocHelpers::PropertyData<bool>(79, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isActiveWindow'
        QtMocHelpers::PropertyData<bool>(80, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'focusPolicy'
        QtMocHelpers::PropertyData<Qt::FocusPolicy>(81, 0x80000000 | 82, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'focus'
        QtMocHelpers::PropertyData<bool>(83, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'contextMenuPolicy'
        QtMocHelpers::PropertyData<Qt::ContextMenuPolicy>(84, 0x80000000 | 85, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'updatesEnabled'
        QtMocHelpers::PropertyData<bool>(86, QMetaType::Bool, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::Stored | QMC::StdCppSet),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::Stored | QMC::StdCppSet),
        // property 'minimized'
        QtMocHelpers::PropertyData<bool>(87, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'maximized'
        QtMocHelpers::PropertyData<bool>(88, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'fullScreen'
        QtMocHelpers::PropertyData<bool>(89, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'sizeHint'
        QtMocHelpers::PropertyData<QSize>(90, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'minimumSizeHint'
        QtMocHelpers::PropertyData<QSize>(91, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'acceptDrops'
        QtMocHelpers::PropertyData<bool>(92, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'windowTitle'
        QtMocHelpers::PropertyData<QString>(93, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'windowIcon'
        QtMocHelpers::PropertyData<QIcon>(94, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'windowIconText'
        QtMocHelpers::PropertyData<QString>(95, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'windowOpacity'
        QtMocHelpers::PropertyData<double>(96, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'windowModified'
        QtMocHelpers::PropertyData<bool>(97, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'toolTip'
        QtMocHelpers::PropertyData<QString>(98, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'toolTipDuration'
        QtMocHelpers::PropertyData<int>(99, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'statusTip'
        QtMocHelpers::PropertyData<QString>(100, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'whatsThis'
        QtMocHelpers::PropertyData<QString>(101, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'accessibleName'
        QtMocHelpers::PropertyData<QString>(102, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'accessibleDescription'
        QtMocHelpers::PropertyData<QString>(103, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'accessibleIdentifier'
        QtMocHelpers::PropertyData<QString>(104, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'layoutDirection'
        QtMocHelpers::PropertyData<Qt::LayoutDirection>(105, 0x80000000 | 106, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'autoFillBackground'
        QtMocHelpers::PropertyData<bool>(107, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'styleSheet'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(108, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet),
        // property 'windowFilePath'
        QtMocHelpers::PropertyData<QString>(109, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'inputMethodHints'
        QtMocHelpers::PropertyData<Qt::InputMethodHints>(110, 0x80000000 | 111, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWidget, qt_meta_tag_ZN7QWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7QWidgetE_t>.metaTypes,
    nullptr
} };

void QWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowTitleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->windowIconChanged((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 2: _t->windowIconTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->customContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->setEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDisabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setWindowModified((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setWindowTitle((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setStyleSheet((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setFocus(); break;
        case 10: _t->update(); break;
        case 11: _t->repaint(); break;
        case 12: _t->setVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setHidden((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->show(); break;
        case 15: _t->hide(); break;
        case 16: _t->showMinimized(); break;
        case 17: _t->showMaximized(); break;
        case 18: _t->showFullScreen(); break;
        case 19: _t->showNormal(); break;
        case 20: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->raise(); break;
        case 22: _t->lower(); break;
        case 23: _t->updateMicroFocus((*reinterpret_cast<std::add_pointer_t<Qt::InputMethodQuery>>(_a[1]))); break;
        case 24: _t->updateMicroFocus(); break;
        case 25: _t->d_func()->_q_showIfNotHidden(); break;
        case 26: { QWindow* _r = _t->d_func()->_q_closestWindowHandle();
            if (_a[0]) *reinterpret_cast<QWindow**>(_a[0]) = std::move(_r); }  break;
        case 27: { QPixmap _r = _t->grab((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 28: { QPixmap _r = _t->grab();
            if (_a[0]) *reinterpret_cast<QPixmap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QWidget::*)(const QString & )>(_a, &QWidget::windowTitleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QWidget::*)(const QIcon & )>(_a, &QWidget::windowIconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QWidget::*)(const QString & )>(_a, &QWidget::windowIconTextChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QWidget::*)(const QPoint & )>(_a, &QWidget::customContextMenuRequested, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 1: *reinterpret_cast<Qt::WindowModality*>(_v) = _t->windowModality(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast<QRect*>(_v) = _t->geometry(); break;
        case 4: *reinterpret_cast<QRect*>(_v) = _t->frameGeometry(); break;
        case 5: *reinterpret_cast<QRect*>(_v) = _t->normalGeometry(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->x(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->y(); break;
        case 8: *reinterpret_cast<QPoint*>(_v) = _t->pos(); break;
        case 9: *reinterpret_cast<QSize*>(_v) = _t->frameSize(); break;
        case 10: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->width(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->height(); break;
        case 13: *reinterpret_cast<QRect*>(_v) = _t->rect(); break;
        case 14: *reinterpret_cast<QRect*>(_v) = _t->childrenRect(); break;
        case 15: *reinterpret_cast<QRegion*>(_v) = _t->childrenRegion(); break;
        case 16: *reinterpret_cast<QSizePolicy*>(_v) = _t->sizePolicy(); break;
        case 17: *reinterpret_cast<QSize*>(_v) = _t->minimumSize(); break;
        case 18: *reinterpret_cast<QSize*>(_v) = _t->maximumSize(); break;
        case 19: *reinterpret_cast<int*>(_v) = _t->minimumWidth(); break;
        case 20: *reinterpret_cast<int*>(_v) = _t->minimumHeight(); break;
        case 21: *reinterpret_cast<int*>(_v) = _t->maximumWidth(); break;
        case 22: *reinterpret_cast<int*>(_v) = _t->maximumHeight(); break;
        case 23: *reinterpret_cast<QSize*>(_v) = _t->sizeIncrement(); break;
        case 24: *reinterpret_cast<QSize*>(_v) = _t->baseSize(); break;
        case 25: *reinterpret_cast<QPalette*>(_v) = _t->palette(); break;
        case 26: *reinterpret_cast<QFont*>(_v) = _t->font(); break;
        case 27: *reinterpret_cast<QCursor*>(_v) = _t->cursor(); break;
        case 28: *reinterpret_cast<bool*>(_v) = _t->hasMouseTracking(); break;
        case 29: *reinterpret_cast<bool*>(_v) = _t->hasTabletTracking(); break;
        case 30: *reinterpret_cast<bool*>(_v) = _t->isActiveWindow(); break;
        case 31: *reinterpret_cast<Qt::FocusPolicy*>(_v) = _t->focusPolicy(); break;
        case 32: *reinterpret_cast<bool*>(_v) = _t->hasFocus(); break;
        case 33: *reinterpret_cast<Qt::ContextMenuPolicy*>(_v) = _t->contextMenuPolicy(); break;
        case 34: *reinterpret_cast<bool*>(_v) = _t->updatesEnabled(); break;
        case 35: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 36: *reinterpret_cast<bool*>(_v) = _t->isMinimized(); break;
        case 37: *reinterpret_cast<bool*>(_v) = _t->isMaximized(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->isFullScreen(); break;
        case 39: *reinterpret_cast<QSize*>(_v) = _t->sizeHint(); break;
        case 40: *reinterpret_cast<QSize*>(_v) = _t->minimumSizeHint(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->acceptDrops(); break;
        case 42: *reinterpret_cast<QString*>(_v) = _t->windowTitle(); break;
        case 43: *reinterpret_cast<QIcon*>(_v) = _t->windowIcon(); break;
        case 44: *reinterpret_cast<QString*>(_v) = _t->windowIconText(); break;
        case 45: *reinterpret_cast<double*>(_v) = _t->windowOpacity(); break;
        case 46: *reinterpret_cast<bool*>(_v) = _t->isWindowModified(); break;
        case 47: *reinterpret_cast<QString*>(_v) = _t->toolTip(); break;
        case 48: *reinterpret_cast<int*>(_v) = _t->toolTipDuration(); break;
        case 49: *reinterpret_cast<QString*>(_v) = _t->statusTip(); break;
        case 50: *reinterpret_cast<QString*>(_v) = _t->whatsThis(); break;
        case 51: *reinterpret_cast<QString*>(_v) = _t->accessibleName(); break;
        case 52: *reinterpret_cast<QString*>(_v) = _t->accessibleDescription(); break;
        case 53: *reinterpret_cast<QString*>(_v) = _t->accessibleIdentifier(); break;
        case 54: *reinterpret_cast<Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 55: *reinterpret_cast<bool*>(_v) = _t->autoFillBackground(); break;
        case 56: *reinterpret_cast<QString*>(_v) = _t->styleSheet(); break;
        case 57: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 58: *reinterpret_cast<QString*>(_v) = _t->windowFilePath(); break;
        case 59: *reinterpret_cast<Qt::InputMethodHints*>(_v) = _t->inputMethodHints(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setWindowModality(*reinterpret_cast<Qt::WindowModality*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setGeometry(*reinterpret_cast<QRect*>(_v)); break;
        case 8: _t->move(*reinterpret_cast<QPoint*>(_v)); break;
        case 10: _t->resize(*reinterpret_cast<QSize*>(_v)); break;
        case 16: _t->setSizePolicy(*reinterpret_cast<QSizePolicy*>(_v)); break;
        case 17: _t->setMinimumSize(*reinterpret_cast<QSize*>(_v)); break;
        case 18: _t->setMaximumSize(*reinterpret_cast<QSize*>(_v)); break;
        case 19: _t->setMinimumWidth(*reinterpret_cast<int*>(_v)); break;
        case 20: _t->setMinimumHeight(*reinterpret_cast<int*>(_v)); break;
        case 21: _t->setMaximumWidth(*reinterpret_cast<int*>(_v)); break;
        case 22: _t->setMaximumHeight(*reinterpret_cast<int*>(_v)); break;
        case 23: _t->setSizeIncrement(*reinterpret_cast<QSize*>(_v)); break;
        case 24: _t->setBaseSize(*reinterpret_cast<QSize*>(_v)); break;
        case 25: _t->setPalette(*reinterpret_cast<QPalette*>(_v)); break;
        case 26: _t->setFont(*reinterpret_cast<QFont*>(_v)); break;
        case 27: _t->setCursor(*reinterpret_cast<QCursor*>(_v)); break;
        case 28: _t->setMouseTracking(*reinterpret_cast<bool*>(_v)); break;
        case 29: _t->setTabletTracking(*reinterpret_cast<bool*>(_v)); break;
        case 31: _t->setFocusPolicy(*reinterpret_cast<Qt::FocusPolicy*>(_v)); break;
        case 33: _t->setContextMenuPolicy(*reinterpret_cast<Qt::ContextMenuPolicy*>(_v)); break;
        case 34: _t->setUpdatesEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 35: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        case 41: _t->setAcceptDrops(*reinterpret_cast<bool*>(_v)); break;
        case 42: _t->setWindowTitle(*reinterpret_cast<QString*>(_v)); break;
        case 43: _t->setWindowIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 44: _t->setWindowIconText(*reinterpret_cast<QString*>(_v)); break;
        case 45: _t->setWindowOpacity(*reinterpret_cast<double*>(_v)); break;
        case 46: _t->setWindowModified(*reinterpret_cast<bool*>(_v)); break;
        case 47: _t->setToolTip(*reinterpret_cast<QString*>(_v)); break;
        case 48: _t->setToolTipDuration(*reinterpret_cast<int*>(_v)); break;
        case 49: _t->setStatusTip(*reinterpret_cast<QString*>(_v)); break;
        case 50: _t->setWhatsThis(*reinterpret_cast<QString*>(_v)); break;
        case 51: _t->setAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        case 52: _t->setAccessibleDescription(*reinterpret_cast<QString*>(_v)); break;
        case 53: _t->setAccessibleIdentifier(*reinterpret_cast<QString*>(_v)); break;
        case 54: _t->setLayoutDirection(*reinterpret_cast<Qt::LayoutDirection*>(_v)); break;
        case 55: _t->setAutoFillBackground(*reinterpret_cast<bool*>(_v)); break;
        case 56: _t->setStyleSheet(*reinterpret_cast<QString*>(_v)); break;
        case 57: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 58: _t->setWindowFilePath(*reinterpret_cast<QString*>(_v)); break;
        case 59: _t->setInputMethodHints(*reinterpret_cast<Qt::InputMethodHints*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 27: _t->unsetCursor(); break;
        case 54: _t->unsetLayoutDirection(); break;
        case 57: _t->unsetLocale(); break;
        default: break;
        }
    }
}

const QMetaObject *QWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPaintDevice"))
        return static_cast< QPaintDevice*>(this);
    return QObject::qt_metacast(_clname);
}

int QWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}

// SIGNAL 0
void QWidget::windowTitleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QWidget::windowIconChanged(const QIcon & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QWidget::windowIconTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QWidget::customContextMenuRequested(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
