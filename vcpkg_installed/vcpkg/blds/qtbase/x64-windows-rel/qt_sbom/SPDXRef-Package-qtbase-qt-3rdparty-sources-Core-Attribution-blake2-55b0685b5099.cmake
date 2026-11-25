
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_blake2
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099
PackageDownloadLocation: https://github.com/BLAKE2/BLAKE2/tree/ed1974ea83433eba7b2d95c5dcd9ac33cb847913
PackageVersion: ed1974ea83433eba7b2d95c5dcd9ac33cb847913
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: CC0-1.0 OR Apache-2.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/BLAKE2/BLAKE2@ed1974ea83433eba7b2d95c5dcd9ac33cb847913
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_blake2
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_blake2?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_blake2
PackageCopyrightText: <text>Copyright 2012, Samuel Neves <sneves@dei.uc.pt></text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_blake2
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/blake2/qt_attribution.json
    Entry index: 0
    Id: blake2
    Name: BLAKE2 (reference implementation)
    Description: BLAKE2 is a cryptographic hash function faster than MD5, SHA-1, SHA-2, and SHA-3, yet is at least as secure as the latest standard SHA-3.
    Qt usage: Used in Qt Core (QCryptographicHash).
    License: Creative Commons Zero v1.0 Universal or Apache License 2.0
    License file: COPYING
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:blake2:blake2:*:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-blake2-55b0685b5099
"
        )
