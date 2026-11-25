
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_md4
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099
PackageDownloadLocation: NOASSERTION
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: CC0-1.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_md4
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_md4?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_md4
PackageCopyrightText: <text>Written by Alexander Peslyak - better known as Solar Designer <solar@openwall.com> - in 2001, and placed in the public domain. There's absolutely no warranty.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_md4
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/md4/qt_attribution.json
    Entry index: 0
    Id: md4
    Name: MD4
    Description: An OpenSSL-compatible implementation of the RSA Data Security, Inc. MD4 Message-Digest Algorithm.
    Qt usage: Used in Qt Core (QCryptographicHash).
    License: Public Domain
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md4-55b0685b5099
"
        )
