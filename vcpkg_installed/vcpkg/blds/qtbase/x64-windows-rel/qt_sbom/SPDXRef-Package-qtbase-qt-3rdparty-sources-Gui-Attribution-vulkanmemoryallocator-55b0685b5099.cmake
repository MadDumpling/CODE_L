
        list(APPEND QT_SBOM_PACKAGES "SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099")
        set("QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099" false)

        file(APPEND "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/qt_sbom/staging-qtbase.spdx.in"
"
PackageName: Gui_Attribution_vulkanmemoryallocator
SPDXID: SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099
PackageDownloadLocation: https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator
PackageVersion: 3.2.1
PackageSupplier: Organization: TheQtCompany
PackageLicenseConcluded: MIT
PackageLicenseDeclared: NOASSERTION
ExternalRef: PACKAGE-MANAGER purl pkg:github/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator@v3.2.1
ExternalRef: PACKAGE-MANAGER purl pkg:github/qt/qtbase?library_name=Gui_Attribution_vulkanmemoryallocator
ExternalRef: PACKAGE-MANAGER purl pkg:generic/TheQtCompany/qtbase-Gui_Attribution_vulkanmemoryallocator?vcs_url=https://code.qt.io/qt/qtbase.git&library_name=Gui_Attribution_vulkanmemoryallocator
PackageCopyrightText: <text>Copyright (c) 2017-2025 Advanced Micro Devices, Inc. All rights reserved.</text>
PrimaryPackagePurpose: LIBRARY
PackageComment: <text>
CMake target name: Gui_Attribution_vulkanmemoryallocator
    Information extracted from:
     /src_dir/qtbase/src/3rdparty/VulkanMemoryAllocator/qt_attribution.json
    Entry index: 0
    Id: vulkanmemoryallocator
    Name: Vulkan Memory Allocator
    Description: Vulkan Memory Allocator
    Qt usage: Memory management for the Vulkan backend of QRhi.
    License: MIT License
    License file: LICENSE.txt
</text>\${QT_SBOM_VERIFICATION_CODE_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099}
FilesAnalyzed: \${QT_SBOM_PACKAGE_HAS_FILES_SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099}
Relationship: SPDXRef-Package-qtbase-55b0685b5099 CONTAINS SPDXRef-Package-qtbase-qt-3rdparty-sources-Gui-Attribution-vulkanmemoryallocator-55b0685b5099
"
        )
