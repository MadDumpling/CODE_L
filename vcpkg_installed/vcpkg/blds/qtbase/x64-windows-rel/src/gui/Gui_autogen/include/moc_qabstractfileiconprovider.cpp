/****************************************************************************
** Meta object code from reading C++ file 'qabstractfileiconprovider.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/gui/image/qabstractfileiconprovider.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractfileiconprovider.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25QAbstractFileIconProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto QAbstractFileIconProvider::qt_create_metaobjectdata<qt_meta_tag_ZN25QAbstractFileIconProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QAbstractFileIconProvider",
        "IconType",
        "Computer",
        "Desktop",
        "Trashcan",
        "Network",
        "Drive",
        "Folder",
        "File"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'IconType'
        QtMocHelpers::EnumData<enum IconType>(1, 1, QMC::EnumFlags{}).add({
            {    2, IconType::Computer },
            {    3, IconType::Desktop },
            {    4, IconType::Trashcan },
            {    5, IconType::Network },
            {    6, IconType::Drive },
            {    7, IconType::Folder },
            {    8, IconType::File },
        }),
    };
    return QtMocHelpers::metaObjectData<QAbstractFileIconProvider, qt_meta_tag_ZN25QAbstractFileIconProviderE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QAbstractFileIconProvider::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QAbstractFileIconProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QAbstractFileIconProviderE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QAbstractFileIconProviderE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
