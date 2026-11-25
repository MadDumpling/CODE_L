/****************************************************************************
** Meta object code from reading C++ file 'qitemeditorfactory_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/itemviews/qitemeditorfactory_p.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qitemeditorfactory_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18QExpandingLineEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QExpandingLineEdit::qt_create_metaobjectdata<qt_meta_tag_ZN18QExpandingLineEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QExpandingLineEdit",
        "resizeToContents",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'resizeToContents'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QExpandingLineEdit, qt_meta_tag_ZN18QExpandingLineEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QExpandingLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QExpandingLineEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QExpandingLineEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QExpandingLineEditE_t>.metaTypes,
    nullptr
} };

void QExpandingLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QExpandingLineEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resizeToContents(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QExpandingLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QExpandingLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QExpandingLineEditE_t>.strings))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int QExpandingLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN23QItemEditorDateTimeEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QItemEditorDateTimeEdit::qt_create_metaobjectdata<qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QItemEditorDateTimeEdit",
        "dateTimeChanged",
        "dateTime"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dateTime'
        QtMocHelpers::PropertyData<QDateTime>(2, QMetaType::QDateTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::User, 0x70000000 | 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QItemEditorDateTimeEdit, qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QItemEditorDateTimeEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDateTimeEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>.metaTypes,
    nullptr
} };

void QItemEditorDateTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QItemEditorDateTimeEdit *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QDateTime*>(_v) = _t->dateTime(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDateTimeItemEditor(*reinterpret_cast<QDateTime*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QItemEditorDateTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QItemEditorDateTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QItemEditorDateTimeEditE_t>.strings))
        return static_cast<void*>(this);
    return QDateTimeEdit::qt_metacast(_clname);
}

int QItemEditorDateTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace CheckNotifySignalValidity_ZN23QItemEditorDateTimeEditE {
template<typename T> using has_nullary_dateTimeChanged = decltype(std::declval<T>().dateTimeChanged());
template<typename T> using has_unary_dateTimeChanged = decltype(std::declval<T>().dateTimeChanged(std::declval<QDateTime>()));
static_assert(qxp::is_detected_v<has_nullary_dateTimeChanged, QItemEditorDateTimeEdit> || qxp::is_detected_v<has_unary_dateTimeChanged, QItemEditorDateTimeEdit>,
              "NOTIFY signal dateTimeChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
