
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core
SPDXID: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099
PackageDownloadLocation: git://code.qt.io/qt/qtbase.git
PackageVersion: 6.11.3
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
PackageLicenseDeclared: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core#src/corelib
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core#src/corelib
PackageCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core
CMake exported target name: Qt6::Core
Contained in CMake package: Qt6Core
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qt:6.11.3:*:*:*:*:*:*:*
ExternalRef: SECURITY cpe23Type cpe:2.3:a:qt:qtbase:6.11.3:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-GlobalConfigPrivate-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-PlatformModuleInternal-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapSystemDoubleConversion-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-module-Platform-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-system-3rdparty-WrapAtomic-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tlexpected-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-siphash-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha3-endian-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha3-keccak-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099
Relationship: SPDXRef-Package-qtbase-qt-module-Core-55b0685b5099 DEPENDS_ON SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099
"
        )
