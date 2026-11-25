/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/itemviews/qabstractitemview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QAbstractItemViewE_t {};
} // unnamed namespace

template <> constexpr inline auto QAbstractItemView::qt_create_metaobjectdata<qt_meta_tag_ZN17QAbstractItemViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QAbstractItemView",
        "pressed",
        "",
        "QModelIndex",
        "index",
        "clicked",
        "doubleClicked",
        "activated",
        "entered",
        "viewportEntered",
        "iconSizeChanged",
        "QSize",
        "size",
        "reset",
        "setRootIndex",
        "doItemsLayout",
        "selectAll",
        "edit",
        "clearSelection",
        "setCurrentIndex",
        "scrollToTop",
        "scrollToBottom",
        "update",
        "dataChanged",
        "topLeft",
        "bottomRight",
        "QList<int>",
        "roles",
        "rowsInserted",
        "parent",
        "start",
        "end",
        "rowsAboutToBeRemoved",
        "selectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "currentChanged",
        "current",
        "previous",
        "updateEditorData",
        "updateEditorGeometries",
        "updateGeometries",
        "verticalScrollbarAction",
        "action",
        "horizontalScrollbarAction",
        "verticalScrollbarValueChanged",
        "value",
        "horizontalScrollbarValueChanged",
        "closeEditor",
        "QWidget*",
        "editor",
        "QAbstractItemDelegate::EndEditHint",
        "hint",
        "commitData",
        "editorDestroyed",
        "autoScroll",
        "autoScrollMargin",
        "editTriggers",
        "EditTriggers",
        "tabKeyNavigation",
        "showDropIndicator",
        "dragEnabled",
        "dragDropOverwriteMode",
        "dragDropMode",
        "DragDropMode",
        "defaultDropAction",
        "Qt::DropAction",
        "alternatingRowColors",
        "selectionMode",
        "SelectionMode",
        "selectionBehavior",
        "SelectionBehavior",
        "iconSize",
        "textElideMode",
        "Qt::TextElideMode",
        "verticalScrollMode",
        "ScrollMode",
        "horizontalScrollMode",
        "updateThreshold",
        "keyboardSearchFlags",
        "Qt::MatchFlags",
        "NoSelection",
        "SingleSelection",
        "MultiSelection",
        "ExtendedSelection",
        "ContiguousSelection",
        "SelectItems",
        "SelectRows",
        "SelectColumns",
        "ScrollHint",
        "EnsureVisible",
        "PositionAtTop",
        "PositionAtBottom",
        "PositionAtCenter",
        "EditTrigger",
        "NoEditTriggers",
        "CurrentChanged",
        "DoubleClicked",
        "SelectedClicked",
        "EditKeyPressed",
        "AnyKeyPressed",
        "AllEditTriggers",
        "ScrollPerItem",
        "ScrollPerPixel",
        "NoDragDrop",
        "DragOnly",
        "DropOnly",
        "DragDrop",
        "InternalMove"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pressed'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'clicked'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activated'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'entered'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'viewportEntered'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setRootIndex'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'doItemsLayout'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'edit'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'clearSelection'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentIndex'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'scrollToTop'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scrollToBottom'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'dataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &, const QList<int> &)>(23, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 24 }, { 0x80000000 | 3, 25 }, { 0x80000000 | 26, 27 },
        }}),
        // Slot 'dataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(23, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 24 }, { 0x80000000 | 3, 25 },
        }}),
        // Slot 'rowsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(28, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 29 }, { QMetaType::Int, 30 }, { QMetaType::Int, 31 },
        }}),
        // Slot 'rowsAboutToBeRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(32, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 29 }, { QMetaType::Int, 30 }, { QMetaType::Int, 31 },
        }}),
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(33, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 34, 35 }, { 0x80000000 | 34, 36 },
        }}),
        // Slot 'currentChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(37, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 38 }, { 0x80000000 | 3, 39 },
        }}),
        // Slot 'updateEditorData'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateEditorGeometries'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateGeometries'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'verticalScrollbarAction'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 44 },
        }}),
        // Slot 'horizontalScrollbarAction'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 44 },
        }}),
        // Slot 'verticalScrollbarValueChanged'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 47 },
        }}),
        // Slot 'horizontalScrollbarValueChanged'
        QtMocHelpers::SlotData<void(int)>(48, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 47 },
        }}),
        // Slot 'closeEditor'
        QtMocHelpers::SlotData<void(QWidget *, QAbstractItemDelegate::EndEditHint)>(49, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 50, 51 }, { 0x80000000 | 52, 53 },
        }}),
        // Slot 'commitData'
        QtMocHelpers::SlotData<void(QWidget *)>(54, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 50, 51 },
        }}),
        // Slot 'editorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(55, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QObjectStar, 51 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'autoScroll'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'autoScrollMargin'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'editTriggers'
        QtMocHelpers::PropertyData<EditTriggers>(58, 0x80000000 | 59, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'tabKeyNavigation'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'showDropIndicator'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'dragEnabled'
        QtMocHelpers::PropertyData<bool>(62, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dragDropOverwriteMode'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dragDropMode'
        QtMocHelpers::PropertyData<enum DragDropMode>(64, 0x80000000 | 65, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'defaultDropAction'
        QtMocHelpers::PropertyData<Qt::DropAction>(66, 0x80000000 | 67, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'alternatingRowColors'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'selectionMode'
        QtMocHelpers::PropertyData<enum SelectionMode>(69, 0x80000000 | 70, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'selectionBehavior'
        QtMocHelpers::PropertyData<enum SelectionBehavior>(71, 0x80000000 | 72, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'iconSize'
        QtMocHelpers::PropertyData<QSize>(73, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'textElideMode'
        QtMocHelpers::PropertyData<Qt::TextElideMode>(74, 0x80000000 | 75, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'verticalScrollMode'
        QtMocHelpers::PropertyData<enum ScrollMode>(76, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'horizontalScrollMode'
        QtMocHelpers::PropertyData<enum ScrollMode>(78, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'updateThreshold'
        QtMocHelpers::PropertyData<int>(79, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'keyboardSearchFlags'
        QtMocHelpers::PropertyData<Qt::MatchFlags>(80, 0x80000000 | 81, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SelectionMode'
        QtMocHelpers::EnumData<enum SelectionMode>(70, 70, QMC::EnumFlags{}).add({
            {   82, SelectionMode::NoSelection },
            {   83, SelectionMode::SingleSelection },
            {   84, SelectionMode::MultiSelection },
            {   85, SelectionMode::ExtendedSelection },
            {   86, SelectionMode::ContiguousSelection },
        }),
        // enum 'SelectionBehavior'
        QtMocHelpers::EnumData<enum SelectionBehavior>(72, 72, QMC::EnumFlags{}).add({
            {   87, SelectionBehavior::SelectItems },
            {   88, SelectionBehavior::SelectRows },
            {   89, SelectionBehavior::SelectColumns },
        }),
        // enum 'ScrollHint'
        QtMocHelpers::EnumData<enum ScrollHint>(90, 90, QMC::EnumFlags{}).add({
            {   91, ScrollHint::EnsureVisible },
            {   92, ScrollHint::PositionAtTop },
            {   93, ScrollHint::PositionAtBottom },
            {   94, ScrollHint::PositionAtCenter },
        }),
        // flag 'EditTriggers'
        QtMocHelpers::EnumData<EditTriggers>(59, 95, QMC::EnumIsFlag).add({
            {   96, EditTrigger::NoEditTriggers },
            {   97, EditTrigger::CurrentChanged },
            {   98, EditTrigger::DoubleClicked },
            {   99, EditTrigger::SelectedClicked },
            {  100, EditTrigger::EditKeyPressed },
            {  101, EditTrigger::AnyKeyPressed },
            {  102, EditTrigger::AllEditTriggers },
        }),
        // enum 'ScrollMode'
        QtMocHelpers::EnumData<enum ScrollMode>(77, 77, QMC::EnumFlags{}).add({
            {  103, ScrollMode::ScrollPerItem },
            {  104, ScrollMode::ScrollPerPixel },
        }),
        // enum 'DragDropMode'
        QtMocHelpers::EnumData<enum DragDropMode>(65, 65, QMC::EnumFlags{}).add({
            {  105, DragDropMode::NoDragDrop },
            {  106, DragDropMode::DragOnly },
            {  107, DragDropMode::DropOnly },
            {  108, DragDropMode::DragDrop },
            {  109, DragDropMode::InternalMove },
        }),
    };
    return QtMocHelpers::metaObjectData<QAbstractItemView, qt_meta_tag_ZN17QAbstractItemViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QAbstractItemView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QAbstractItemViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QAbstractItemViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QAbstractItemViewE_t>.metaTypes,
    nullptr
} };

void QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QAbstractItemView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->activated((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->entered((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->viewportEntered(); break;
        case 6: _t->iconSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 7: _t->reset(); break;
        case 8: _t->setRootIndex((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->doItemsLayout(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->edit((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->clearSelection(); break;
        case 13: _t->setCurrentIndex((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 14: _t->scrollToTop(); break;
        case 15: _t->scrollToBottom(); break;
        case 16: _t->update((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->dataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 18: _t->dataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 19: _t->rowsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 20: _t->rowsAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 21: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 22: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 23: _t->updateEditorData(); break;
        case 24: _t->updateEditorGeometries(); break;
        case 25: _t->updateGeometries(); break;
        case 26: _t->verticalScrollbarAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->horizontalScrollbarAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->verticalScrollbarValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->horizontalScrollbarValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->closeEditor((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QAbstractItemDelegate::EndEditHint>>(_a[2]))); break;
        case 31: _t->commitData((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 32: _t->editorDestroyed((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QModelIndex & )>(_a, &QAbstractItemView::pressed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QModelIndex & )>(_a, &QAbstractItemView::clicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QModelIndex & )>(_a, &QAbstractItemView::doubleClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QModelIndex & )>(_a, &QAbstractItemView::activated, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QModelIndex & )>(_a, &QAbstractItemView::entered, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)()>(_a, &QAbstractItemView::viewportEntered, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QAbstractItemView::*)(const QSize & )>(_a, &QAbstractItemView::iconSizeChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->hasAutoScroll(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->autoScrollMargin(); break;
        case 2: QtMocHelpers::assignFlags<EditTriggers>(_v, _t->editTriggers()); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->tabKeyNavigation(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->showDropIndicator(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->dragEnabled(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->dragDropOverwriteMode(); break;
        case 7: *reinterpret_cast<enum DragDropMode*>(_v) = _t->dragDropMode(); break;
        case 8: *reinterpret_cast<Qt::DropAction*>(_v) = _t->defaultDropAction(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->alternatingRowColors(); break;
        case 10: *reinterpret_cast<enum SelectionMode*>(_v) = _t->selectionMode(); break;
        case 11: *reinterpret_cast<enum SelectionBehavior*>(_v) = _t->selectionBehavior(); break;
        case 12: *reinterpret_cast<QSize*>(_v) = _t->iconSize(); break;
        case 13: *reinterpret_cast<Qt::TextElideMode*>(_v) = _t->textElideMode(); break;
        case 14: *reinterpret_cast<enum ScrollMode*>(_v) = _t->verticalScrollMode(); break;
        case 15: *reinterpret_cast<enum ScrollMode*>(_v) = _t->horizontalScrollMode(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->updateThreshold(); break;
        case 17: *reinterpret_cast<Qt::MatchFlags*>(_v) = _t->keyboardSearchFlags(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoScroll(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAutoScrollMargin(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setEditTriggers(*reinterpret_cast<EditTriggers*>(_v)); break;
        case 3: _t->setTabKeyNavigation(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setDropIndicatorShown(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setDragEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDragDropOverwriteMode(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setDragDropMode(*reinterpret_cast<enum DragDropMode*>(_v)); break;
        case 8: _t->setDefaultDropAction(*reinterpret_cast<Qt::DropAction*>(_v)); break;
        case 9: _t->setAlternatingRowColors(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setSelectionMode(*reinterpret_cast<enum SelectionMode*>(_v)); break;
        case 11: _t->setSelectionBehavior(*reinterpret_cast<enum SelectionBehavior*>(_v)); break;
        case 12: _t->setIconSize(*reinterpret_cast<QSize*>(_v)); break;
        case 13: _t->setTextElideMode(*reinterpret_cast<Qt::TextElideMode*>(_v)); break;
        case 14: _t->setVerticalScrollMode(*reinterpret_cast<enum ScrollMode*>(_v)); break;
        case 15: _t->setHorizontalScrollMode(*reinterpret_cast<enum ScrollMode*>(_v)); break;
        case 16: _t->setUpdateThreshold(*reinterpret_cast<int*>(_v)); break;
        case 17: _t->setKeyboardSearchFlags(*reinterpret_cast<Qt::MatchFlags*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 14: _t->resetVerticalScrollMode(); break;
        case 15: _t->resetHorizontalScrollMode(); break;
        default: break;
        }
    }
}

const QMetaObject *QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QAbstractItemViewE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QAbstractItemView::pressed(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QAbstractItemView::clicked(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QAbstractItemView::doubleClicked(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QAbstractItemView::activated(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QAbstractItemView::entered(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QAbstractItemView::viewportEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QAbstractItemView::iconSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
