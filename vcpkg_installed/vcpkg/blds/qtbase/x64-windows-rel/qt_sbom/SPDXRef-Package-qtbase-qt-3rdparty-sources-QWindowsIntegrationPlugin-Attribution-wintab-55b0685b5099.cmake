
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: QWindowsIntegrationPlugin_Attribution_wintab
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099
PackageDownloadLocation: NOASSERTION
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: LicenseRef-Lcs-Telegraphics
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=QWindowsIntegrationPlugin_Attribution_wintab
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-QWindowsIntegrationPlugin_Attribution_wintab?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=QWindowsIntegrationPlugin_Attribution_wintab
PackageCopyrightText: <text>Copyright 1991-1998 by LCS/Telegraphics.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: QWindowsIntegrationPlugin_Attribution_wintab
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/wintab/qt_attribution.json
    Entry index: 0
    Id: wintab
    Name: Wintab API
    Description: Wintab is a de facto API for pointing devices on Windows.
    Qt usage: Used in the Qt platform plugin for Windows. Configure with -no-feature-tabletevent to avoid.
    License: LCS-Telegraphics License
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-QWindowsIntegrationPlugin-Attribution-wintab-55b0685b5099
"
        )
