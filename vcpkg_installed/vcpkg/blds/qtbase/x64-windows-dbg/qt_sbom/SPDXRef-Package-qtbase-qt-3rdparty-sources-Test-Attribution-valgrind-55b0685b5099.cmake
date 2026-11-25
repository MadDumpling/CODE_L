
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Test_Attribution_valgrind
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099
PackageDownloadLocation: http://valgrind.org/
PackageVersion: 3.25.1
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: BSD-4-Clause
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:generic/valgrind@3.25.1?download_url=https://valgrind.org/
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Test_Attribution_valgrind
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Test_Attribution_valgrind?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Test_Attribution_valgrind
PackageCopyrightText: <text>Copyright (C) 2000-2017 Julian Seward
Copyright (C) 2003-2017 Josef Weidendorfer.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Test_Attribution_valgrind
    Information extracted from:
     /src_dir/qtbase/src/testlib/3rdparty/valgrind/qt_attribution.json
    Entry index: 0
    Id: valgrind
    Name: Valgrind
    Description: An instrumentation framework for building dynamic analysis tools.
    Qt usage: Used on Linux ond MacOS in the Qt Test module.
    License: BSD 4-clause \"Original\" or \"Old\" License
    License file: LICENSE.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Test-Attribution-valgrind-55b0685b5099
"
        )
