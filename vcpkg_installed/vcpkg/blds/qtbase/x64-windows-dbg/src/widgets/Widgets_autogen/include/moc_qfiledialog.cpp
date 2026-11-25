/****************************************************************************
** Meta object code from reading C++ file 'qfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/widgets/dialogs/qfiledialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfiledialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QFileDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QFileDialog::qt_create_metaobjectdata<qt_meta_tag_ZN11QFileDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QFileDialog",
        "fileSelected",
        "",
        "file",
        "filesSelected",
        "files",
        "currentChanged",
        "path",
        "directoryEntered",
        "directory",
        "urlSelected",
        "QUrl",
        "url",
        "urlsSelected",
        "QList<QUrl>",
        "urls",
        "currentUrlChanged",
        "directoryUrlEntered",
        "filterSelected",
        "filter",
        "viewMode",
        "ViewMode",
        "fileMode",
        "FileMode",
        "acceptMode",
        "AcceptMode",
        "defaultSuffix",
        "options",
        "Options",
        "supportedSchemes",
        "Detail",
        "List",
        "AnyFile",
        "ExistingFile",
        "Directory",
        "ExistingFiles",
        "AcceptOpen",
        "AcceptSave",
        "Option",
        "ShowDirsOnly",
        "DontResolveSymlinks",
        "DontConfirmOverwrite",
        "DontUseNativeDialog",
        "ReadOnly",
        "HideNameFilterDetails",
        "DontUseCustomDirectoryIcons"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileSelected'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'filesSelected'
        QtMocHelpers::SignalData<void(const QStringList &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 5 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'directoryEntered'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'urlSelected'
        QtMocHelpers::SignalData<void(const QUrl &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'urlsSelected'
        QtMocHelpers::SignalData<void(const QList<QUrl> &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'currentUrlChanged'
        QtMocHelpers::SignalData<void(const QUrl &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'directoryUrlEntered'
        QtMocHelpers::SignalData<void(const QUrl &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 9 },
        }}),
        // Signal 'filterSelected'
        QtMocHelpers::SignalData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'viewMode'
        QtMocHelpers::PropertyData<enum ViewMode>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'fileMode'
        QtMocHelpers::PropertyData<enum FileMode>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'acceptMode'
        QtMocHelpers::PropertyData<enum AcceptMode>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'defaultSuffix'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'options'
        QtMocHelpers::PropertyData<Options>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'supportedSchemes'
        QtMocHelpers::PropertyData<QStringList>(29, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ViewMode'
        QtMocHelpers::EnumData<enum ViewMode>(21, 21, QMC::EnumFlags{}).add({
            {   30, ViewMode::Detail },
            {   31, ViewMode::List },
        }),
        // enum 'FileMode'
        QtMocHelpers::EnumData<enum FileMode>(23, 23, QMC::EnumFlags{}).add({
            {   32, FileMode::AnyFile },
            {   33, FileMode::ExistingFile },
            {   34, FileMode::Directory },
            {   35, FileMode::ExistingFiles },
        }),
        // enum 'AcceptMode'
        QtMocHelpers::EnumData<enum AcceptMode>(25, 25, QMC::EnumFlags{}).add({
            {   36, AcceptMode::AcceptOpen },
            {   37, AcceptMode::AcceptSave },
        }),
        // enum 'Option'
        QtMocHelpers::EnumData<enum Option>(38, 38, QMC::EnumFlags{}).add({
            {   39, Option::ShowDirsOnly },
            {   40, Option::DontResolveSymlinks },
            {   41, Option::DontConfirmOverwrite },
            {   42, Option::DontUseNativeDialog },
            {   43, Option::ReadOnly },
            {   44, Option::HideNameFilterDetails },
            {   45, Option::DontUseCustomDirectoryIcons },
        }),
        // flag 'Options'
        QtMocHelpers::EnumData<Options>(28, 38, QMC::EnumIsFlag).add({
            {   39, Option::ShowDirsOnly },
            {   40, Option::DontResolveSymlinks },
            {   41, Option::DontConfirmOverwrite },
            {   42, Option::DontUseNativeDialog },
            {   43, Option::ReadOnly },
            {   44, Option::HideNameFilterDetails },
            {   45, Option::DontUseCustomDirectoryIcons },
        }),
    };
    return QtMocHelpers::metaObjectData<QFileDialog, qt_meta_tag_ZN11QFileDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QFileDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QFileDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11QFileDialogE_t>.metaTypes,
    nullptr
} };

void QFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QFileDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->directoryEntered((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->urlSelected((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 5: _t->urlsSelected((*reinterpret_cast<std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 6: _t->currentUrlChanged((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 7: _t->directoryUrlEntered((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->filterSelected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QString & )>(_a, &QFileDialog::fileSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QStringList & )>(_a, &QFileDialog::filesSelected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QString & )>(_a, &QFileDialog::currentChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QString & )>(_a, &QFileDialog::directoryEntered, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QUrl & )>(_a, &QFileDialog::urlSelected, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QList<QUrl> & )>(_a, &QFileDialog::urlsSelected, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QUrl & )>(_a, &QFileDialog::currentUrlChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QUrl & )>(_a, &QFileDialog::directoryUrlEntered, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (QFileDialog::*)(const QString & )>(_a, &QFileDialog::filterSelected, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ViewMode*>(_v) = _t->viewMode(); break;
        case 1: *reinterpret_cast<enum FileMode*>(_v) = _t->fileMode(); break;
        case 2: *reinterpret_cast<enum AcceptMode*>(_v) = _t->acceptMode(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->defaultSuffix(); break;
        case 4: QtMocHelpers::assignFlags<Options>(_v, _t->options()); break;
        case 5: *reinterpret_cast<QStringList*>(_v) = _t->supportedSchemes(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewMode(*reinterpret_cast<enum ViewMode*>(_v)); break;
        case 1: _t->setFileMode(*reinterpret_cast<enum FileMode*>(_v)); break;
        case 2: _t->setAcceptMode(*reinterpret_cast<enum AcceptMode*>(_v)); break;
        case 3: _t->setDefaultSuffix(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setOptions(*reinterpret_cast<Options*>(_v)); break;
        case 5: _t->setSupportedSchemes(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QFileDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
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
void QFileDialog::fileSelected(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QFileDialog::filesSelected(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QFileDialog::currentChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QFileDialog::directoryEntered(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QFileDialog::urlSelected(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QFileDialog::urlsSelected(const QList<QUrl> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void QFileDialog::currentUrlChanged(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void QFileDialog::directoryUrlEntered(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void QFileDialog::filterSelected(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
