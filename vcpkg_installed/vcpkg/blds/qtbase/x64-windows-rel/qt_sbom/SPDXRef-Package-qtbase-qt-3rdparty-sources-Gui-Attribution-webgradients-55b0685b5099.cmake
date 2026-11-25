
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Gui_Attribution_webgradients
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099
PackageDownloadLocation: https://webgradients.com/
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: MIT
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:generic/webgradients?download_url=https://webgradients.com/
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Gui_Attribution_webgradients
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Gui_Attribution_webgradients?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Gui_Attribution_webgradients
PackageCopyrightText: <text>Copyright (c) 2017 itmeo</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Gui_Attribution_webgradients
    Information extracted from:
     /src_dir/qtbase/util/gradientgen/qt_attribution.json
    Entry index: 0
    Id: webgradients
    Name: WebGradients
    Description: WebGradients is a free collection of 180 linear gradients.
    Qt usage: Used in Qt GUI to provide presets for QGradient.
    License: MIT License
    License file: LICENSE.WEBGRADIENTS.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-webgradients-55b0685b5099
"
        )
