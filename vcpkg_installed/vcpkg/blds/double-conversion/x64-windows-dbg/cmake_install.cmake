# Install script for directory: C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/pkgs/double-conversion_x64-windows/debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "OFF")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/double-conversion.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/double-conversion.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/double-conversion" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/bignum.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/bignum-dtoa.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/cached-powers.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/diy-fp.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/double-conversion.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/double-to-string.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/fast-dtoa.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/fixed-dtoa.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/ieee.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/string-to-double.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/strtod.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/src/v3.4.0-f7cc018a3e.clean/double-conversion/utils.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/double-conversion.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/generated/double-conversionConfig.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/generated/double-conversionConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion/double-conversionTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion/double-conversionTargets.cmake"
         "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/CMakeFiles/Export/c48c7609cf3e7fc29c0e568549d63421/double-conversionTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion/double-conversionTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion/double-conversionTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/CMakeFiles/Export/c48c7609cf3e7fc29c0e568549d63421/double-conversionTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/double-conversion" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/CMakeFiles/Export/c48c7609cf3e7fc29c0e568549d63421/double-conversionTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/double-conversion.pdb")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/double-conversion/x64-windows-dbg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
