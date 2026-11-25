
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Gui_Attribution_opengl-headers
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099
PackageDownloadLocation: https://www.khronos.org/
PackageVersion: Revision 27684
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: MIT
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:generic/khronos-opengl-headers?download_url=https://www.khronos.org/?revision=27684
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Gui_Attribution_opengl-headers
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Gui_Attribution_opengl-headers?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Gui_Attribution_opengl-headers
PackageCopyrightText: <text>Copyright (c) 2013-2014 The Khronos Group Inc.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Gui_Attribution_opengl-headers
    Information extracted from:
     /src_dir/qtbase/src/gui/opengl/qt_attribution.json
    Entry index: 0
    Id: opengl-headers
    Name: OpenGL Headers
    Description: OpenGL header generated from the Khronos OpenGL / OpenGL ES XML API Registry.
    Qt usage: Used on Windows and Linux in the OpenGL related headers of Qt GUI.
    License: MIT License
    License file: LICENSE.KHRONOS.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-opengl-headers-55b0685b5099
"
        )
