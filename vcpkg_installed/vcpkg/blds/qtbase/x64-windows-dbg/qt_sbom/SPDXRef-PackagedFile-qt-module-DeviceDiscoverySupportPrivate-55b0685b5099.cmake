
        if(NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Qt6DeviceDiscoverySupportd.lib"
                AND NOT QT_SBOM_BUILD_TIME AND NOT QT_SBOM_FAKE_CHECKSUM)
            if(NOT FALSE)
                message(FATAL_ERROR "Cannot find 'lib/Qt6DeviceDiscoverySupportd.lib' to compute its checksum. "
                    "Expected to find it at '$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Qt6DeviceDiscoverySupportd.lib' ")
            endif()
        else()
            if(NOT QT_SBOM_BUILD_TIME)
                if(QT_SBOM_FAKE_CHECKSUM)
                    set(sha1 "158942a783ee1095eafacaffd93de73edeadbeef")
                else()
                    file(SHA1 "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/Qt6DeviceDiscoverySupportd.lib" sha1)
                endif()

                set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099" true)

                list(APPEND QT_SBOM_PACKAGES_WITH_VERIFICATION_CODES
                    "SPDXRef-Package-qtbase-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099")
                list(APPEND
                    "QT_SBOM_PACKAGES_WITH_VERIFICATION_CODES_SPDXRef-Package-qtbase-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099"
                    "${sha1}")
            endif()
            file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/qt_sbom/staging-qtbase.spdx.in"
"
FileName: ./lib/Qt6DeviceDiscoverySupportd.lib
SPDXID: SPDXRef-PackagedFile-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099
FileType: BINARY
FileChecksum: SHA1: ${sha1}
LicenseConcluded: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
FileCopyrightText: <text>Copyright (C) The Qt Company Ltd. and other contributors.</text>
LicenseInfoInFile: NOASSERTION
Relationship: SPDXRef-Package-qtbase-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099 CONTAINS SPDXRef-PackagedFile-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099
Relationship: SPDXRef-PackagedFile-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /src_dir/qtbase/src/platformsupport/devicediscovery/qdevicediscovery_p.h
Relationship: SPDXRef-PackagedFile-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /src_dir/qtbase/src/platformsupport/devicediscovery/qdevicediscovery_dummy.cpp
Relationship: SPDXRef-PackagedFile-qt-module-DeviceDiscoverySupportPrivate-55b0685b5099 GENERATED_FROM NOASSERTION
RelationshipComment: /src_dir/qtbase/src/platformsupport/devicediscovery/qdevicediscovery_dummy_p.h
"
                )
        endif()
