
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_sha1
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099
PackageDownloadLocation: http://www.dominik-reichl.de/projects/csha1/
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-SHA1-Public-Domain
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:generic/csha1?download_url=https://www.dominik-reichl.de/projects/csha1/
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_sha1
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_sha1?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_sha1
PackageCopyrightText: <text>Copyright (C) Dominik Reichl <dominik.reichl@t-online.de>
Copyright (C) 2016 The Qt Company Ltd</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_sha1
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/sha1/qt_attribution.json
    Entry index: 0
    Id: sha1
    Name: Secure Hash Algorithm SHA-1
    Description: Implements the Secure Hash Algorithms SHA 1
    Qt usage: Used in Qt Core (QCryptographicHash).
    License: Public Domain
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-sha1-55b0685b5099
"
        )
