/****************************************************************************
** Meta object code from reading C++ file 'qinputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/gui/kernel/qinputdevice.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdevice.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QInputDeviceE_t {};
} // unnamed namespace

template <> constexpr inline auto QInputDevice::qt_create_metaobjectdata<qt_meta_tag_ZN12QInputDeviceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QInputDevice",
        "availableVirtualGeometryChanged",
        "",
        "QRect",
        "area",
        "capabilitiesChanged",
        "Capabilities",
        "capabilities",
        "name",
        "type",
        "DeviceType",
        "systemId",
        "seatName",
        "availableVirtualGeometry",
        "DeviceTypes",
        "Unknown",
        "Mouse",
        "TouchScreen",
        "TouchPad",
        "Puck",
        "Stylus",
        "Airbrush",
        "Keyboard",
        "AllDevices",
        "Capability",
        "None",
        "Position",
        "Area",
        "Pressure",
        "Velocity",
        "NormalizedPosition",
        "MouseEmulation",
        "PixelScroll",
        "Scroll",
        "Hover",
        "Rotation",
        "XTilt",
        "YTilt",
        "TangentialPressure",
        "ZPosition",
        "All"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'availableVirtualGeometryChanged'
        QtMocHelpers::SignalData<void(QRect)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'capabilitiesChanged'
        QtMocHelpers::RevisionedSignalData<void(Capabilities)>(5, 2, QMC::AccessPublic, 0x609, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'type'
        QtMocHelpers::PropertyData<enum DeviceType>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'capabilities'
        QtMocHelpers::PropertyData<Capabilities>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'systemId'
        QtMocHelpers::PropertyData<qint64>(11, QMetaType::LongLong, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'seatName'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'availableVirtualGeometry'
        QtMocHelpers::PropertyData<QRect>(13, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'DeviceTypes'
        QtMocHelpers::EnumData<DeviceTypes>(14, 10, QMC::EnumIsFlag | QMC::EnumIsScoped).add({
            {   15, DeviceType::Unknown },
            {   16, DeviceType::Mouse },
            {   17, DeviceType::TouchScreen },
            {   18, DeviceType::TouchPad },
            {   19, DeviceType::Puck },
            {   20, DeviceType::Stylus },
            {   21, DeviceType::Airbrush },
            {   22, DeviceType::Keyboard },
            {   23, DeviceType::AllDevices },
        }),
        // flag 'Capabilities'
        QtMocHelpers::EnumData<Capabilities>(6, 24, QMC::EnumIsFlag | QMC::EnumIsScoped).add({
            {   25, Capability::None },
            {   26, Capability::Position },
            {   27, Capability::Area },
            {   28, Capability::Pressure },
            {   29, Capability::Velocity },
            {   30, Capability::NormalizedPosition },
            {   31, Capability::MouseEmulation },
            {   32, Capability::PixelScroll },
            {   33, Capability::Scroll },
            {   34, Capability::Hover },
            {   35, Capability::Rotation },
            {   36, Capability::XTilt },
            {   37, Capability::YTilt },
            {   38, Capability::TangentialPressure },
            {   39, Capability::ZPosition },
            {   40, Capability::All },
        }),
    };
    return QtMocHelpers::metaObjectData<QInputDevice, qt_meta_tag_ZN12QInputDeviceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QInputDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QInputDeviceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QInputDeviceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QInputDeviceE_t>.metaTypes,
    nullptr
} };

void QInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QInputDevice *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->availableVirtualGeometryChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 1: _t->capabilitiesChanged((*reinterpret_cast<std::add_pointer_t<Capabilities>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QInputDevice::*)(QRect )>(_a, &QInputDevice::availableVirtualGeometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QInputDevice::*)(Capabilities )>(_a, &QInputDevice::capabilitiesChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<enum DeviceType*>(_v) = _t->type(); break;
        case 2: QtMocHelpers::assignFlags<Capabilities>(_v, _t->capabilities()); break;
        case 3: *reinterpret_cast<qint64*>(_v) = _t->systemId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->seatName(); break;
        case 5: *reinterpret_cast<QRect*>(_v) = _t->availableVirtualGeometry(); break;
        default: break;
        }
    }
}

const QMetaObject *QInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QInputDeviceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QInputDevice::availableVirtualGeometryChanged(QRect _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QInputDevice::capabilitiesChanged(Capabilities _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
