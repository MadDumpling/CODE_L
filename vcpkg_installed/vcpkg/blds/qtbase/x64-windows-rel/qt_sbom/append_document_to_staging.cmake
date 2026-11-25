
        cmake_minimum_required(VERSION 3.16)
        message(STATUS "Starting SPDX SBOM generation in build dir: C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in")
        
        set(QT_SBOM_EXTERNAL_DOC_REFS "")

        file(READ "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/SPDXRef-DOCUMENT-qtbase.spdx.in" content)
        # Override any previous file because we're starting from scratch.
        file(WRITE "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in" "${content}")
