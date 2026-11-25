/****************************************************************************
** Meta object code from reading C++ file 'qfontcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/widgets/qfontcombobox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontcombobox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QFontComboBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto QFontComboBox::qt_create_metaobjectdata<qt_meta_tag_ZN13QFontComboBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QFontComboBox",
        "currentFontChanged",
        "",
        "QFont",
        "f",
        "setCurrentFont",
        "writingSystem",
        "QFontDatabase::WritingSystem",
        "fontFilters",
        "FontFilters",
        "currentFont",
        "FontFilter",
        "AllFonts",
        "ScalableFonts",
        "NonScalableFonts",
        "MonospacedFonts",
        "ProportionalFonts"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentFontChanged'
        QtMocHelpers::SignalData<void(const QFont &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setCurrentFont'
        QtMocHelpers::SlotData<void(const QFont &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'writingSystem'
        QtMocHelpers::PropertyData<QFontDatabase::WritingSystem>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'fontFilters'
        QtMocHelpers::PropertyData<FontFilters>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'currentFont'
        QtMocHelpers::PropertyData<QFont>(10, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'FontFilters'
        QtMocHelpers::EnumData<FontFilters>(9, 11, QMC::EnumIsFlag).add({
            {   12, FontFilter::AllFonts },
            {   13, FontFilter::ScalableFonts },
            {   14, FontFilter::NonScalableFonts },
            {   15, FontFilter::MonospacedFonts },
            {   16, FontFilter::ProportionalFonts },
        }),
    };
    return QtMocHelpers::metaObjectData<QFontComboBox, qt_meta_tag_ZN13QFontComboBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN13QFontComboBoxE[] = {
    QMetaObject::SuperData::link<QFontDatabase::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QFontComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QFontComboBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QFontComboBoxE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN13QFontComboBoxE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QFontComboBoxE_t>.metaTypes,
    nullptr
} };

void QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QFontComboBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QFontComboBox::*)(const QFont & )>(_a, &QFontComboBox::currentFontChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QFontDatabase::WritingSystem*>(_v) = _t->writingSystem(); break;
        case 1: QtMocHelpers::assignFlags<FontFilters>(_v, _t->fontFilters()); break;
        case 2: *reinterpret_cast<QFont*>(_v) = _t->currentFont(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWritingSystem(*reinterpret_cast<QFontDatabase::WritingSystem*>(_v)); break;
        case 1: _t->setFontFilters(*reinterpret_cast<FontFilters*>(_v)); break;
        case 2: _t->setCurrentFont(*reinterpret_cast<QFont*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QFontComboBoxE_t>.strings))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QFontComboBox::currentFontChanged(const QFont & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
