
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: WrapZLIB
SPDXID: SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099
PackageDownloadLocation: https://github.com/madler/zlib
PackageVersion: 1.4
PackageSupplier: Person: Anonymous
PackageLicenseConcluded: NOASSERTION
PackageLicenseDeclared: NOASSERTION
PackageCopyrightText: NOASSERTION
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: WrapZLIB::WrapZLIB
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:zlib:zlib:1.4:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-system-3rdparty-WrapZLIB-55b0685b5099}

"
        )
