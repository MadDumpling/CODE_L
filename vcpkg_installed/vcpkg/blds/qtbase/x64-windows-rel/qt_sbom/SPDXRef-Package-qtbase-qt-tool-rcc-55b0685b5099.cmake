
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: rcc
SPDXID: SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099
PackageDownloadLocation: git://code.qt.io/qt/qtbase.git
PackageVersion: 6.11.3
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0
PackageLicenseDeclared: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=rcc#src/tools/rcc
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-rcc?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=rcc#src/tools/rcc
PackageCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
PrimaryPackagePurpose: APPLICATION
PackageComment: <text>
CMake target name: rcc
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qt:6.11.3:*:*:*:*:*:*:*
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qtbase:6.11.3:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-PlatformToolInternal-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-tool-rcc-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-PlatformCommonInternal-55b0685b5099
"
        )
