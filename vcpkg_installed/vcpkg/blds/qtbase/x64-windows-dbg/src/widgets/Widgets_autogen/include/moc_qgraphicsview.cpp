/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/graphicsview/qgraphicsview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QGraphicsViewE_t {};
} // unnamed namespace

template <> constexpr inline auto QGraphicsView::qt_create_metaobjectdata<qt_meta_tag_ZN13QGraphicsViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGraphicsView",
        "rubberBandChanged",
        "",
        "QRect",
        "viewportRect",
        "QPointF",
        "fromScenePoint",
        "toScenePoint",
        "updateScene",
        "QList<QRectF>",
        "rects",
        "invalidateScene",
        "QRectF",
        "rect",
        "QGraphicsScene::SceneLayers",
        "layers",
        "updateSceneRect",
        "setupViewport",
        "QWidget*",
        "widget",
        "_q_setViewportCursor",
        "QCursor",
        "_q_unsetViewportCursor",
        "backgroundBrush",
        "QBrush",
        "foregroundBrush",
        "interactive",
        "sceneRect",
        "alignment",
        "Qt::Alignment",
        "renderHints",
        "QPainter::RenderHints",
        "dragMode",
        "DragMode",
        "cacheMode",
        "CacheMode",
        "transformationAnchor",
        "ViewportAnchor",
        "resizeAnchor",
        "viewportUpdateMode",
        "ViewportUpdateMode",
        "rubberBandSelectionMode",
        "Qt::ItemSelectionMode",
        "optimizationFlags",
        "OptimizationFlags",
        "NoAnchor",
        "AnchorViewCenter",
        "AnchorUnderMouse",
        "CacheModeFlag",
        "CacheNone",
        "CacheBackground",
        "NoDrag",
        "ScrollHandDrag",
        "RubberBandDrag",
        "FullViewportUpdate",
        "MinimalViewportUpdate",
        "SmartViewportUpdate",
        "NoViewportUpdate",
        "BoundingRectViewportUpdate",
        "OptimizationFlag",
        "DontSavePainterState",
        "DontAdjustForAntialiasing",
        "IndirectPainting"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rubberBandChanged'
        QtMocHelpers::SignalData<void(QRect, QPointF, QPointF)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 },
        }}),
        // Slot 'updateScene'
        QtMocHelpers::SlotData<void(const QList<QRectF> &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'invalidateScene'
        QtMocHelpers::SlotData<void(const QRectF &, QGraphicsScene::SceneLayers)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'invalidateScene'
        QtMocHelpers::SlotData<void(const QRectF &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'invalidateScene'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateSceneRect'
        QtMocHelpers::SlotData<void(const QRectF &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setupViewport'
        QtMocHelpers::SlotData<void(QWidget *)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot '_q_setViewportCursor'
        QtMocHelpers::SlotData<void(const QCursor &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Slot '_q_unsetViewportCursor'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'backgroundBrush'
        QtMocHelpers::PropertyData<QBrush>(23, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'foregroundBrush'
        QtMocHelpers::PropertyData<QBrush>(25, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'interactive'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sceneRect'
        QtMocHelpers::PropertyData<QRectF>(27, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'alignment'
        QtMocHelpers::PropertyData<Qt::Alignment>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'renderHints'
        QtMocHelpers::PropertyData<QPainter::RenderHints>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'dragMode'
        QtMocHelpers::PropertyData<enum DragMode>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'cacheMode'
        QtMocHelpers::PropertyData<CacheMode>(34, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'transformationAnchor'
        QtMocHelpers::PropertyData<enum ViewportAnchor>(36, 0x80000000 | 37, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'resizeAnchor'
        QtMocHelpers::PropertyData<enum ViewportAnchor>(38, 0x80000000 | 37, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'viewportUpdateMode'
        QtMocHelpers::PropertyData<enum ViewportUpdateMode>(39, 0x80000000 | 40, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'rubberBandSelectionMode'
        QtMocHelpers::PropertyData<Qt::ItemSelectionMode>(41, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'optimizationFlags'
        QtMocHelpers::PropertyData<OptimizationFlags>(43, 0x80000000 | 44, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ViewportAnchor'
        QtMocHelpers::EnumData<enum ViewportAnchor>(37, 37, QMC::EnumFlags{}).add({
            {   45, ViewportAnchor::NoAnchor },
            {   46, ViewportAnchor::AnchorViewCenter },
            {   47, ViewportAnchor::AnchorUnderMouse },
        }),
        // flag 'CacheMode'
        QtMocHelpers::EnumData<CacheMode>(35, 48, QMC::EnumIsFlag).add({
            {   49, CacheModeFlag::CacheNone },
            {   50, CacheModeFlag::CacheBackground },
        }),
        // enum 'DragMode'
        QtMocHelpers::EnumData<enum DragMode>(33, 33, QMC::EnumFlags{}).add({
            {   51, DragMode::NoDrag },
            {   52, DragMode::ScrollHandDrag },
            {   53, DragMode::RubberBandDrag },
        }),
        // enum 'ViewportUpdateMode'
        QtMocHelpers::EnumData<enum ViewportUpdateMode>(40, 40, QMC::EnumFlags{}).add({
            {   54, ViewportUpdateMode::FullViewportUpdate },
            {   55, ViewportUpdateMode::MinimalViewportUpdate },
            {   56, ViewportUpdateMode::SmartViewportUpdate },
            {   57, ViewportUpdateMode::NoViewportUpdate },
            {   58, ViewportUpdateMode::BoundingRectViewportUpdate },
        }),
        // flag 'OptimizationFlags'
        QtMocHelpers::EnumData<OptimizationFlags>(44, 59, QMC::EnumIsFlag).add({
            {   60, OptimizationFlag::DontSavePainterState },
            {   61, OptimizationFlag::DontAdjustForAntialiasing },
            {   62, OptimizationFlag::IndirectPainting },
        }),
    };
    return QtMocHelpers::metaObjectData<QGraphicsView, qt_meta_tag_ZN13QGraphicsViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN13QGraphicsViewE[] = {
    QMetaObject::SuperData::link<QPainter::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QGraphicsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QGraphicsViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QGraphicsViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN13QGraphicsViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QGraphicsViewE_t>.metaTypes,
    nullptr
} };

void QGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QGraphicsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rubberBandChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 1: _t->updateScene((*reinterpret_cast<std::add_pointer_t<QList<QRectF>>>(_a[1]))); break;
        case 2: _t->invalidateScene((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QGraphicsScene::SceneLayers>>(_a[2]))); break;
        case 3: _t->invalidateScene((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 4: _t->invalidateScene(); break;
        case 5: _t->updateSceneRect((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 6: _t->setupViewport((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 7: _t->d_func()->_q_setViewportCursor((*reinterpret_cast<std::add_pointer_t<QCursor>>(_a[1]))); break;
        case 8: _t->d_func()->_q_unsetViewportCursor(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QGraphicsView::*)(QRect , QPointF , QPointF )>(_a, &QGraphicsView::rubberBandChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QBrush*>(_v) = _t->backgroundBrush(); break;
        case 1: *reinterpret_cast<QBrush*>(_v) = _t->foregroundBrush(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isInteractive(); break;
        case 3: *reinterpret_cast<QRectF*>(_v) = _t->sceneRect(); break;
        case 4: *reinterpret_cast<Qt::Alignment*>(_v) = _t->alignment(); break;
        case 5: *reinterpret_cast<QPainter::RenderHints*>(_v) = _t->renderHints(); break;
        case 6: *reinterpret_cast<enum DragMode*>(_v) = _t->dragMode(); break;
        case 7: QtMocHelpers::assignFlags<CacheMode>(_v, _t->cacheMode()); break;
        case 8: *reinterpret_cast<enum ViewportAnchor*>(_v) = _t->transformationAnchor(); break;
        case 9: *reinterpret_cast<enum ViewportAnchor*>(_v) = _t->resizeAnchor(); break;
        case 10: *reinterpret_cast<enum ViewportUpdateMode*>(_v) = _t->viewportUpdateMode(); break;
        case 11: *reinterpret_cast<Qt::ItemSelectionMode*>(_v) = _t->rubberBandSelectionMode(); break;
        case 12: QtMocHelpers::assignFlags<OptimizationFlags>(_v, _t->optimizationFlags()); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundBrush(*reinterpret_cast<QBrush*>(_v)); break;
        case 1: _t->setForegroundBrush(*reinterpret_cast<QBrush*>(_v)); break;
        case 2: _t->setInteractive(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setSceneRect(*reinterpret_cast<QRectF*>(_v)); break;
        case 4: _t->setAlignment(*reinterpret_cast<Qt::Alignment*>(_v)); break;
        case 5: _t->setRenderHints(*reinterpret_cast<QPainter::RenderHints*>(_v)); break;
        case 6: _t->setDragMode(*reinterpret_cast<enum DragMode*>(_v)); break;
        case 7: _t->setCacheMode(*reinterpret_cast<CacheMode*>(_v)); break;
        case 8: _t->setTransformationAnchor(*reinterpret_cast<enum ViewportAnchor*>(_v)); break;
        case 9: _t->setResizeAnchor(*reinterpret_cast<enum ViewportAnchor*>(_v)); break;
        case 10: _t->setViewportUpdateMode(*reinterpret_cast<enum ViewportUpdateMode*>(_v)); break;
        case 11: _t->setRubberBandSelectionMode(*reinterpret_cast<Qt::ItemSelectionMode*>(_v)); break;
        case 12: _t->setOptimizationFlags(*reinterpret_cast<OptimizationFlags*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QGraphicsViewE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsView::rubberBandChanged(QRect _t1, QPointF _t2, QPointF _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
