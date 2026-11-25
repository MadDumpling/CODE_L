
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_unicode-character-database
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099
PackageDownloadLocation: https://www.unicode.org/ucd/
PackageVersion: 36
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: Unicode-3.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_unicode-character-database
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_unicode-character-database?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_unicode-character-database
PackageCopyrightText: <text>Copyright (C) 1991-2025 Unicode, Inc.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_unicode-character-database
    Information extracted from:
     /src_dir/qtbase/src/corelib/text/qt_attribution.json
    Entry index: 0
    Id: unicode-character-database
    Name: Unicode Character Database (UCD)
    Description: The Unicode Character Database (UCD) is a set of files that
 define the Unicode character properties and internal mappings.
    Qt usage: Qt Core uses data obtained from UCD files for working with characters and strings.
    License: Unicode License Agreement - Data Files and Software (2016)
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-unicode-character-database-55b0685b5099
"
        )
