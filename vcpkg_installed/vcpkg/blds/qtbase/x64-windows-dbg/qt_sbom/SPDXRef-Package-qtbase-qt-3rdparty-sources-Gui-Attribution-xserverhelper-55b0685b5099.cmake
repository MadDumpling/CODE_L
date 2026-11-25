
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Gui_Attribution_xserverhelper
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099
PackageDownloadLocation: https://www.x.org/
PackageVersion: unknown
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: X11 AND HPND
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:generic/xserverhelper?download_url=https://www.x.org/
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Gui_Attribution_xserverhelper
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Gui_Attribution_xserverhelper?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Gui_Attribution_xserverhelper
PackageCopyrightText: <text>Copyright (c) 1987, 1988 X Consortium
Copyright 1987, 1988 by Digital Equipment Corporation, Maynard, Massachusetts.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Gui_Attribution_xserverhelper
    Information extracted from:
     /src_dir/qtbase/src/gui/painting/qt_attribution.json
    Entry index: 2
    Id: xserverhelper
    Name: X Server helper
    Description: Code from X11's region.h, Region.c, poly.h, and PolyReg.c
    Qt usage: Used in Qt GUI (QRegion).
    License: X11 License and Historical Permission Notice and Disclaimer
    License file: LICENSE.XCONSORTIUM.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-xserverhelper-55b0685b5099
"
        )
