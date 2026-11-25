
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_tinycbor
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099
PackageDownloadLocation: https://github.com/intel/tinycbor/archive/v7.0/tinycbor-7.0.tar.gz
PackageVersion: 7.0
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: MIT
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/intel/tinycbor@v7.0
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_tinycbor
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_tinycbor?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_tinycbor
PackageCopyrightText: <text>Copyright (C) 2015-2025 Intel Corporation</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_tinycbor
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/tinycbor/qt_attribution.json
    Entry index: 0
    Id: tinycbor
    Name: TinyCBOR
    Description: Concise Binary Object Representation (CBOR) Library
    Qt usage: Used for QCborStreamReader and QCborStreamWriter.
    License: MIT License
    License file: LICENSE
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:tinycbor:tinycbor:7.0:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tinycbor-55b0685b5099
"
        )
