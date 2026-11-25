
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_md5
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099
PackageDownloadLocation: NOASSERTION
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: CC0-1.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_md5
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_md5?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_md5
PackageCopyrightText: <text>Written by Colin Plumb in 1993, no copyright is claimed. Ian Jackson <ian@chiark.greenend.org.uk>.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_md5
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/md5/qt_attribution.json
    Entry index: 0
    Id: md5
    Name: MD5
    Description: MD5 message-digest algorithm.
    Qt usage: Used in Qt Core (QCryptographicHash).
    License: Public Domain
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-md5-55b0685b5099
"
        )
