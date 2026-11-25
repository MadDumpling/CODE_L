
        if(NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/syncqt.exe"
                AND NOT QT_SBOM_BUILD_TIME AND NOT QT_SBOM_FAKE_CHECKSUM)
            if(NOT FALSE)
                message(FATAL_ERROR "Cannot find 'bin/syncqt.exe' to compute its checksum. "
                    "Expected to find it at '$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/syncqt.exe' ")
            endif()
        else()
            if(NOT QT_SBOM_BUILD_TIME)
                if(QT_SBOM_FAKE_CHECKSUM)
                    set(sha1 "158942a783ee1095eafacaffd93de73edeadbeef")
                else()
                    file(SHA1 "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/syncqt.exe" sha1)
                endif()

                set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-tool-syncqt-55b0685b5099" true)

                list(APPEND QT_SBOM_PACKAGES_WITH_VERIFICATION_CODES
                    "SPDXRef-Package-qtbase-qt-tool-syncqt-55b0685b5099")
                list(APPEND
                    "QT_SBOM_PACKAGES_WITH_VERIFICATION_CODES_SPDXRef-Package-qtbase-qt-tool-syncqt-55b0685b5099"
                    "${sha1}")
            endif()
            file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
FileName: ./bin/syncqt.exe
SPDXID: SPDXRef-PackagedFile-qt-tool-syncqt-55b0685b5099
FileType: BINARY
FileChecksum: SHA1: ${sha1}
LicenseConcluded: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0
FileCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
LicenseInfoInFile: NOASSERTION
Relationship: SPDXRef-Package-qtbase-qt-tool-syncqt-55b0685b5099 CONTAINS SPDXRef-PackagedFile-qt-tool-syncqt-55b0685b5099
Relationship: SPDXRef-PackagedFile-qt-tool-syncqt-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /src_dir/qtbase/src/tools/syncqt/C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/tools/syncqt/syncqt_resource.rc
Relationship: SPDXRef-PackagedFile-qt-tool-syncqt-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /src_dir/qtbase/src/tools/syncqt/main.cpp
Relationship: SPDXRef-PackagedFile-qt-tool-syncqt-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /build_dir/qtbase/src/tools/syncqt/syncqt_internal_qt.manifest
"
                )
        endif()
