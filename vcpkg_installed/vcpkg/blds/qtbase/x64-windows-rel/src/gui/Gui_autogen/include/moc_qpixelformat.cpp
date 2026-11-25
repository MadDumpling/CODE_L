/****************************************************************************
** Meta object code from reading C++ file 'qpixelformat.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/here-src-6-8349b2dce8.clean/src/gui/kernel/qpixelformat.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpixelformat.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QPixelFormatE_t {};
} // unnamed namespace

template <> constexpr inline auto QPixelFormat::qt_create_metaobjectdata<qt_meta_tag_ZN12QPixelFormatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QPixelFormat",
        "ColorModel",
        "RGB",
        "BGR",
        "Indexed",
        "Grayscale",
        "CMYK",
        "HSL",
        "HSV",
        "YUV",
        "Alpha",
        "AlphaUsage",
        "UsesAlpha",
        "IgnoresAlpha",
        "AlphaPosition",
        "AtBeginning",
        "AtEnd",
        "AlphaPremultiplied",
        "NotPremultiplied",
        "Premultiplied",
        "TypeInterpretation",
        "UnsignedInteger",
        "UnsignedShort",
        "UnsignedByte",
        "FloatingPoint",
        "YUVLayout",
        "YUV444",
        "YUV422",
        "YUV411",
        "YUV420P",
        "YUV420SP",
        "YV12",
        "UYVY",
        "YUYV",
        "NV12",
        "NV21",
        "IMC1",
        "IMC2",
        "IMC3",
        "IMC4",
        "Y8",
        "Y16",
        "ByteOrder",
        "LittleEndian",
        "BigEndian",
        "CurrentSystemEndian"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ColorModel'
        QtMocHelpers::EnumData<enum ColorModel>(1, 1, QMC::EnumFlags{}).add({
            {    2, ColorModel::RGB },
            {    3, ColorModel::BGR },
            {    4, ColorModel::Indexed },
            {    5, ColorModel::Grayscale },
            {    6, ColorModel::CMYK },
            {    7, ColorModel::HSL },
            {    8, ColorModel::HSV },
            {    9, ColorModel::YUV },
            {   10, ColorModel::Alpha },
        }),
        // enum 'AlphaUsage'
        QtMocHelpers::EnumData<enum AlphaUsage>(11, 11, QMC::EnumFlags{}).add({
            {   12, AlphaUsage::UsesAlpha },
            {   13, AlphaUsage::IgnoresAlpha },
        }),
        // enum 'AlphaPosition'
        QtMocHelpers::EnumData<enum AlphaPosition>(14, 14, QMC::EnumFlags{}).add({
            {   15, AlphaPosition::AtBeginning },
            {   16, AlphaPosition::AtEnd },
        }),
        // enum 'AlphaPremultiplied'
        QtMocHelpers::EnumData<enum AlphaPremultiplied>(17, 17, QMC::EnumFlags{}).add({
            {   18, AlphaPremultiplied::NotPremultiplied },
            {   19, AlphaPremultiplied::Premultiplied },
        }),
        // enum 'TypeInterpretation'
        QtMocHelpers::EnumData<enum TypeInterpretation>(20, 20, QMC::EnumFlags{}).add({
            {   21, TypeInterpretation::UnsignedInteger },
            {   22, TypeInterpretation::UnsignedShort },
            {   23, TypeInterpretation::UnsignedByte },
            {   24, TypeInterpretation::FloatingPoint },
        }),
        // enum 'YUVLayout'
        QtMocHelpers::EnumData<enum YUVLayout>(25, 25, QMC::EnumFlags{}).add({
            {   26, YUVLayout::YUV444 },
            {   27, YUVLayout::YUV422 },
            {   28, YUVLayout::YUV411 },
            {   29, YUVLayout::YUV420P },
            {   30, YUVLayout::YUV420SP },
            {   31, YUVLayout::YV12 },
            {   32, YUVLayout::UYVY },
            {   33, YUVLayout::YUYV },
            {   34, YUVLayout::NV12 },
            {   35, YUVLayout::NV21 },
            {   36, YUVLayout::IMC1 },
            {   37, YUVLayout::IMC2 },
            {   38, YUVLayout::IMC3 },
            {   39, YUVLayout::IMC4 },
            {   40, YUVLayout::Y8 },
            {   41, YUVLayout::Y16 },
        }),
        // enum 'ByteOrder'
        QtMocHelpers::EnumData<enum ByteOrder>(42, 42, QMC::EnumFlags{}).add({
            {   43, ByteOrder::LittleEndian },
            {   44, ByteOrder::BigEndian },
            {   45, ByteOrder::CurrentSystemEndian },
        }),
    };
    return QtMocHelpers::metaObjectData<QPixelFormat, qt_meta_tag_ZN12QPixelFormatE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QPixelFormat::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QPixelFormatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QPixelFormatE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QPixelFormatE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
