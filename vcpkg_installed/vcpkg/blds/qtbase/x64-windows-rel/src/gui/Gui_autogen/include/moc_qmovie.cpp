/****************************************************************************
** Meta object code from reading C++ file 'qmovie.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/gui/image/qmovie.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmovie.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6QMovieE_t {};
} // unnamed namespace

template <> constexpr inline auto QMovie::qt_create_metaobjectdata<qt_meta_tag_ZN6QMovieE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QMovie",
        "started",
        "",
        "resized",
        "QSize",
        "size",
        "updated",
        "QRect",
        "rect",
        "stateChanged",
        "QMovie::MovieState",
        "state",
        "error",
        "QImageReader::ImageReaderError",
        "finished",
        "frameChanged",
        "frameNumber",
        "start",
        "jumpToNextFrame",
        "setPaused",
        "paused",
        "stop",
        "setSpeed",
        "percentSpeed",
        "_q_loadNextFrame",
        "speed",
        "cacheMode",
        "CacheMode",
        "MovieState",
        "NotRunning",
        "Paused",
        "Running",
        "CacheNone",
        "CacheAll"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'started'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resized'
        QtMocHelpers::SignalData<void(const QSize &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'updated'
        QtMocHelpers::SignalData<void(const QRect &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void(QMovie::MovieState)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(QImageReader::ImageReaderError)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 12 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'frameChanged'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'jumpToNextFrame'
        QtMocHelpers::SlotData<bool()>(18, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setPaused'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSpeed'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot '_q_loadNextFrame'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'speed'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Bindable),
        // property 'cacheMode'
        QtMocHelpers::PropertyData<enum CacheMode>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Bindable),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'MovieState'
        QtMocHelpers::EnumData<enum MovieState>(28, 28, QMC::EnumFlags{}).add({
            {   29, MovieState::NotRunning },
            {   30, MovieState::Paused },
            {   31, MovieState::Running },
        }),
        // enum 'CacheMode'
        QtMocHelpers::EnumData<enum CacheMode>(27, 27, QMC::EnumFlags{}).add({
            {   32, CacheMode::CacheNone },
            {   33, CacheMode::CacheAll },
        }),
    };
    return QtMocHelpers::metaObjectData<QMovie, qt_meta_tag_ZN6QMovieE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QMovie::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QMovieE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QMovieE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6QMovieE_t>.metaTypes,
    nullptr
} };

void QMovie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMovie *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->resized((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast<std::add_pointer_t<QMovie::MovieState>>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast<std::add_pointer_t<QImageReader::ImageReaderError>>(_a[1]))); break;
        case 5: _t->finished(); break;
        case 6: _t->frameChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->start(); break;
        case 8: { bool _r = _t->jumpToNextFrame();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setPaused((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->stop(); break;
        case 11: _t->setSpeed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->d_func()->_q_loadNextFrame(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)()>(_a, &QMovie::started, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)(const QSize & )>(_a, &QMovie::resized, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)(const QRect & )>(_a, &QMovie::updated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)(QMovie::MovieState )>(_a, &QMovie::stateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)(QImageReader::ImageReaderError )>(_a, &QMovie::error, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)()>(_a, &QMovie::finished, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMovie::*)(int )>(_a, &QMovie::frameChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast<enum CacheMode*>(_v) = _t->cacheMode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setCacheMode(*reinterpret_cast<enum CacheMode*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::BindableProperty) {
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSpeed(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableCacheMode(); break;
        default: break;
        }
    }
}

const QMetaObject *QMovie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMovie::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QMovieE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMovie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QMovie::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMovie::resized(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QMovie::updated(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QMovie::stateChanged(QMovie::MovieState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QMovie::error(QImageReader::ImageReaderError _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QMovie::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QMovie::frameChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
