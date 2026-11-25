
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: OpenGLWidgets
SPDXID: SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099
PackageDownloadLocation: git://code.qt.io/qt/qtbase.git
PackageVersion: 6.11.3
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
PackageLicenseDeclared: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=OpenGLWidgets#src/openglwidgets
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-OpenGLWidgets?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=OpenGLWidgets#src/openglwidgets
PackageCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: OpenGLWidgets
CMake exported target name: Qt6::OpenGLWidgets
Contained in CMake package: Qt6OpenGLWidgets
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qt:6.11.3:*:*:*:*:*:*:*
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qtbase:6.11.3:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-OpenGL-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-Widgets-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-OpenGLWidgets-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-PlatformModuleInternal-55b0685b5099
"
        )
