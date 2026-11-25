
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_unicode-cldr
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099
PackageDownloadLocation: https://cldr.unicode.org/
PackageVersion: v48.2
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: Unicode-3.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_unicode-cldr
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_unicode-cldr?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_unicode-cldr
PackageCopyrightText: <text>Copyright (C) 2004-2025 Unicode, Inc.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_unicode-cldr
    Information extracted from:
     /src_dir/qtbase/src/corelib/text/qt_attribution.json
    Entry index: 1
    Id: unicode-cldr
    Name: Unicode Common Locale Data Repository (CLDR)
    Description: The Unicode CLDR provides key building blocks for software to support the
 world's languages, with the largest and most extensive standard repository of locale data
 available.
    Qt usage: Used in Qt Core (QTimeZone, QLocale).
    License: Unicode License v3
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-cldr-55b0685b5099
"
        )
