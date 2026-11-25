
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_rfc6234
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099
PackageDownloadLocation: NOASSERTION
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: BSD-3-Clause
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_rfc6234
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_rfc6234?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_rfc6234
PackageCopyrightText: <text>Copyright (c) 2011 IETF Trust and the persons identified as authors of the code.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_rfc6234
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/rfc6234/qt_attribution.json
    Entry index: 0
    Id: rfc6234
    Name: Secure Hash Algorithms SHA-384 and SHA-512
    Description: Implements the Secure Hash Algorithms SHA 384 and SHA-521
    Qt usage: Used in Qt Core (QCryptographicHash and QMessageAuthenticationCode)
    License: BSD 3-clause \"New\" or \"Revised\" License
    License file: LICENSE
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-rfc6234-55b0685b5099
"
        )
