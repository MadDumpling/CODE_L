
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_easing
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099
PackageDownloadLocation: http://robertpenner.com/easing/
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: BSD-3-Clause
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_easing
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_easing?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_easing
PackageCopyrightText: <text>Copyright (c) 2001 Robert Penner</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_easing
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/easing/qt_attribution.json
    Entry index: 0
    Id: easing
    Name: Easing Equations by Robert Penner
    Qt usage: Used in Qt Core (QEasingCurve).
    License: BSD 3-clause \"New\" or \"Revised\" License
    License file: LICENSE
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-easing-55b0685b5099
"
        )
