
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: WrapPCRE2
SPDXID: SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099
PackageDownloadLocation: https://github.com/PCRE2Project/pcre2
PackageVersion: 10.49.0
PackageSupplier: Person: Anonymous
PackageLicenseConcluded: NOASSERTION
PackageLicenseDeclared: NOASSERTION
PackageCopyrightText: NOASSERTION
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: WrapPCRE2::WrapPCRE2
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:pcre:pcre2:10.49.0:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-system-3rdparty-WrapPCRE2-55b0685b5099}

"
        )
