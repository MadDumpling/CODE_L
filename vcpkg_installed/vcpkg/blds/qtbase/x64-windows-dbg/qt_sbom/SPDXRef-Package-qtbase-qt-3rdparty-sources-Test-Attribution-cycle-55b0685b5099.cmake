
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Test_Attribution_cycle
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099
PackageDownloadLocation: http://fftw.org/
PackageVersion: 3.3.11
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: MIT
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/FFTW/fftw3@fftw-3.3.11
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Test_Attribution_cycle
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Test_Attribution_cycle?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Test_Attribution_cycle
PackageCopyrightText: <text>Copyright (c) 2003, 2007-14 Matteo Frigo
Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Test_Attribution_cycle
    Information extracted from:
     /src_dir/qtbase/src/testlib/3rdparty/cycle/qt_attribution.json
    Entry index: 0
    Id: cycle
    Name: Cycle
    Description: Enables access to the CPU's cycle counters.
    Qt usage: Used in the Qt Test module.
    License: MIT License
    License file: LICENSE.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-cycle-55b0685b5099
"
        )
