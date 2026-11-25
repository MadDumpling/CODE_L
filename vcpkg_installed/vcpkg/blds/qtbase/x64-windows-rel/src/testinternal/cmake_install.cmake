# Install script for directory: C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testinternal

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/pkgs/qtbase_x64-windows")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "CMAKE_OBJDUMP-NOTFOUND")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/3rdparty/cmake" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testinternal/3rdparty/cmake/QtRunCMakeTestHelpers.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/3rdparty/cmake" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testinternal/3rdparty/cmake/RunCMake.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testinternal/QtRunCMakeTestWrappers.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testinternal/QtRunCMake.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateConfig.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateConfigVersion.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateConfigVersionImpl.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateTargetsPrecheck.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateTargets.cmake"
         "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testinternal/CMakeFiles/Export/f3072d4ef30a1ff87657fe14ca77e8e5/Qt6TestInternalsPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testinternal/CMakeFiles/Export/f3072d4ef30a1ff87657fe14ca77e8e5/Qt6TestInternalsPrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateVersionlessAliasTargets.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestInternalsPrivate/Qt6TestInternalsPrivateVersionlessTargets.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestInternalsPrivate" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6/modules" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6/modules/TestInternalsPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6/mkspecs/modules" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6/mkspecs/modules/qt_lib_testinternals_private.pri")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testinternal/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
