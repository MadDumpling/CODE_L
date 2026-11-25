
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Gui
SPDXID: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099
PackageDownloadLocation: git://code.qt.io/qt/qtbase.git
PackageVersion: 6.11.3
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
PackageLicenseDeclared: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Gui#src/gui
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Gui?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Gui#src/gui
PackageCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Gui
CMake exported target name: Qt6::Gui
Contained in CMake package: Qt6Gui
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qt:6.11.3:*:*:*:*:*:*:*
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qtbase:6.11.3:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-PlatformModuleInternal-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapSystemMd4c-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-rhi-miniengine-d3d12-mipmap-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-es2-headers-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-grayraster-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-smooth-scaling-algorithm-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-aglfn-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-emoji-segmenter-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-icc-srgb-color-profile-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Gui-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-d3d12memoryallocator-55b0685b5099
"
        )
