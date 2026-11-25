/****************************************************************************
** Meta object code from reading C++ file 'qwindowspipereader_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/corelib/io/qwindowspipereader_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowspipereader_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18QWindowsPipeReaderE_t {};
} // unnamed namespace

template <> constexpr inline auto QWindowsPipeReader::qt_create_metaobjectdata<qt_meta_tag_ZN18QWindowsPipeReaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QWindowsPipeReader",
        "winError",
        "",
        "readyRead",
        "pipeClosed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'winError'
        QtMocHelpers::SignalData<void(ulong, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULong, 2 }, { QMetaType::QString, 2 },
        }}),
        // Signal 'readyRead'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pipeClosed'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QWindowsPipeReader, qt_meta_tag_ZN18QWindowsPipeReaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QWindowsPipeReader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QWindowsPipeReaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QWindowsPipeReaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QWindowsPipeReaderE_t>.metaTypes,
    nullptr
} };

void QWindowsPipeReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QWindowsPipeReader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->winError((*reinterpret_cast<std::add_pointer_t<ulong>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->readyRead(); break;
        case 2: _t->pipeClosed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QWindowsPipeReader::*)(ulong , const QString & )>(_a, &QWindowsPipeReader::winError, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QWindowsPipeReader::*)()>(_a, &QWindowsPipeReader::readyRead, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QWindowsPipeReader::*)()>(_a, &QWindowsPipeReader::pipeClosed, 2))
            return;
    }
}

const QMetaObject *QWindowsPipeReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsPipeReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QWindowsPipeReaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWindowsPipeReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QWindowsPipeReader::winError(ulong _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QWindowsPipeReader::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QWindowsPipeReader::pipeClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
