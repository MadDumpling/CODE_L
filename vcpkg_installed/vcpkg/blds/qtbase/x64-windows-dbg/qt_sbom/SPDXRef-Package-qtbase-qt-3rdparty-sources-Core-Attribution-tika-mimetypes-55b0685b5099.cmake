
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Core_Attribution_tika-mimetypes
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099
PackageDownloadLocation: https://github.com/apache/tika/blob/c29724782854bb5a319f4a1940d0828a58ace3f9/tika-core/src/main/resources/org/apache/tika/mime/tika-mimetypes.xml
PackageVersion: c29724782854bb5a319f4a1940d0828a58ace3f9
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: Apache-2.0
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/apache/tika@c29724782854bb5a319f4a1940d0828a58ace3f9#tika-core/src/main/resources/org/apache/tika/mime/tika-mimetypes.xml
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Core_Attribution_tika-mimetypes
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Core_Attribution_tika-mimetypes?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Core_Attribution_tika-mimetypes
PackageCopyrightText: <text>Copyright 2026 The Apache Software Foundation</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Core_Attribution_tika-mimetypes
    Information extracted from:
     /src_dir/qtbase/src/corelib/mimetypes/3rdparty/qt_attribution.json
    Entry index: 0
    Id: tika-mimetypes
    Name: Apache Tika MimeType Definitions
    Description: The Apache Tika MimeTypes list many known MIME types and how to match files (using globs and/or 'magic' rules for the file contents)
    Qt usage: Qt Core uses a copy of the Apache Tika MimeType Definitions if shared-mime-info isn't installed on the system.
    License: Apache License 2.0
</text>
ExternalRef: SECURITY cpe23Type cpe:2.3:a:apache:tika:*:*:*:*:*:*:*:*\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Core-Attribution-tika-mimetypes-55b0685b5099
"
        )
