/****************************************************************************
** Meta object code from reading C++ file 'qmessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/dialogs/qmessagebox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmessagebox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QMessageBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto QMessageBox::qt_create_metaobjectdata<qt_meta_tag_ZN11QMessageBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QMessageBox",
        "buttonClicked",
        "",
        "QAbstractButton*",
        "button",
        "text",
        "icon",
        "Icon",
        "iconPixmap",
        "QPixmap",
        "textFormat",
        "Qt::TextFormat",
        "standardButtons",
        "StandardButtons",
        "detailedText",
        "informativeText",
        "textInteractionFlags",
        "Qt::TextInteractionFlags",
        "options",
        "Options",
        "Option",
        "DontUseNativeDialog",
        "NoIcon",
        "Information",
        "Warning",
        "Critical",
        "Question",
        "ButtonRole",
        "InvalidRole",
        "AcceptRole",
        "RejectRole",
        "DestructiveRole",
        "ActionRole",
        "HelpRole",
        "YesRole",
        "NoRole",
        "ResetRole",
        "ApplyRole",
        "NRoles",
        "StandardButton",
        "NoButton",
        "Ok",
        "Save",
        "SaveAll",
        "Open",
        "Yes",
        "YesToAll",
        "No",
        "NoToAll",
        "Abort",
        "Retry",
        "Ignore",
        "Close",
        "Cancel",
        "Discard",
        "Help",
        "Apply",
        "Reset",
        "RestoreDefaults",
        "FirstButton",
        "LastButton",
        "YesAll",
        "NoAll",
        "Default",
        "Escape",
        "FlagMask",
        "ButtonMask"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'buttonClicked'
        QtMocHelpers::SignalData<void(QAbstractButton *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'text'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'icon'
        QtMocHelpers::PropertyData<enum Icon>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'iconPixmap'
        QtMocHelpers::PropertyData<QPixmap>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'textFormat'
        QtMocHelpers::PropertyData<Qt::TextFormat>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'standardButtons'
        QtMocHelpers::PropertyData<StandardButtons>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'detailedText'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'informativeText'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'textInteractionFlags'
        QtMocHelpers::PropertyData<Qt::TextInteractionFlags>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'options'
        QtMocHelpers::PropertyData<Options>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Option'
        QtMocHelpers::EnumData<enum Option>(20, 20, QMC::EnumIsScoped).add({
            {   21, Option::DontUseNativeDialog },
        }),
        // enum 'Icon'
        QtMocHelpers::EnumData<enum Icon>(7, 7, QMC::EnumFlags{}).add({
            {   22, Icon::NoIcon },
            {   23, Icon::Information },
            {   24, Icon::Warning },
            {   25, Icon::Critical },
            {   26, Icon::Question },
        }),
        // enum 'ButtonRole'
        QtMocHelpers::EnumData<enum ButtonRole>(27, 27, QMC::EnumFlags{}).add({
            {   28, ButtonRole::InvalidRole },
            {   29, ButtonRole::AcceptRole },
            {   30, ButtonRole::RejectRole },
            {   31, ButtonRole::DestructiveRole },
            {   32, ButtonRole::ActionRole },
            {   33, ButtonRole::HelpRole },
            {   34, ButtonRole::YesRole },
            {   35, ButtonRole::NoRole },
            {   36, ButtonRole::ResetRole },
            {   37, ButtonRole::ApplyRole },
            {   38, ButtonRole::NRoles },
        }),
        // enum 'StandardButton'
        QtMocHelpers::EnumData<enum StandardButton>(39, 39, QMC::EnumFlags{}).add({
            {   40, StandardButton::NoButton },
            {   41, StandardButton::Ok },
            {   42, StandardButton::Save },
            {   43, StandardButton::SaveAll },
            {   44, StandardButton::Open },
            {   45, StandardButton::Yes },
            {   46, StandardButton::YesToAll },
            {   47, StandardButton::No },
            {   48, StandardButton::NoToAll },
            {   49, StandardButton::Abort },
            {   50, StandardButton::Retry },
            {   51, StandardButton::Ignore },
            {   52, StandardButton::Close },
            {   53, StandardButton::Cancel },
            {   54, StandardButton::Discard },
            {   55, StandardButton::Help },
            {   56, StandardButton::Apply },
            {   57, StandardButton::Reset },
            {   58, StandardButton::RestoreDefaults },
            {   59, StandardButton::FirstButton },
            {   60, StandardButton::LastButton },
            {   61, StandardButton::YesAll },
            {   62, StandardButton::NoAll },
            {   63, StandardButton::Default },
            {   64, StandardButton::Escape },
            {   65, StandardButton::FlagMask },
            {   66, StandardButton::ButtonMask },
        }),
        // flag 'StandardButtons'
        QtMocHelpers::EnumData<StandardButtons>(13, 39, QMC::EnumIsFlag).add({
            {   40, StandardButton::NoButton },
            {   41, StandardButton::Ok },
            {   42, StandardButton::Save },
            {   43, StandardButton::SaveAll },
            {   44, StandardButton::Open },
            {   45, StandardButton::Yes },
            {   46, StandardButton::YesToAll },
            {   47, StandardButton::No },
            {   48, StandardButton::NoToAll },
            {   49, StandardButton::Abort },
            {   50, StandardButton::Retry },
            {   51, StandardButton::Ignore },
            {   52, StandardButton::Close },
            {   53, StandardButton::Cancel },
            {   54, StandardButton::Discard },
            {   55, StandardButton::Help },
            {   56, StandardButton::Apply },
            {   57, StandardButton::Reset },
            {   58, StandardButton::RestoreDefaults },
            {   59, StandardButton::FirstButton },
            {   60, StandardButton::LastButton },
            {   61, StandardButton::YesAll },
            {   62, StandardButton::NoAll },
            {   63, StandardButton::Default },
            {   64, StandardButton::Escape },
            {   65, StandardButton::FlagMask },
            {   66, StandardButton::ButtonMask },
        }),
    };
    return QtMocHelpers::metaObjectData<QMessageBox, qt_meta_tag_ZN11QMessageBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QMessageBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMessageBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMessageBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11QMessageBoxE_t>.metaTypes,
    nullptr
} };

void QMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMessageBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QMessageBox::*)(QAbstractButton * )>(_a, &QMessageBox::buttonClicked, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast<enum Icon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast<QPixmap*>(_v) = _t->iconPixmap(); break;
        case 3: *reinterpret_cast<Qt::TextFormat*>(_v) = _t->textFormat(); break;
        case 4: QtMocHelpers::assignFlags<StandardButtons>(_v, _t->standardButtons()); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->detailedText(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->informativeText(); break;
        case 7: *reinterpret_cast<Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 8: *reinterpret_cast<Options*>(_v) = _t->options(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast<enum Icon*>(_v)); break;
        case 2: _t->setIconPixmap(*reinterpret_cast<QPixmap*>(_v)); break;
        case 3: _t->setTextFormat(*reinterpret_cast<Qt::TextFormat*>(_v)); break;
        case 4: _t->setStandardButtons(*reinterpret_cast<StandardButtons*>(_v)); break;
        case 5: _t->setDetailedText(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setInformativeText(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setTextInteractionFlags(*reinterpret_cast<Qt::TextInteractionFlags*>(_v)); break;
        case 8: _t->setOptions(*reinterpret_cast<Options*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QMessageBoxE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QMessageBox::buttonClicked(QAbstractButton * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
