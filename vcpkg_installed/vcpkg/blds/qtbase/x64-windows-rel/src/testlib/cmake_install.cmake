# Install script for directory: C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/QtTestProperties.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/metatypes" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/meta_types/qt6test_metatypes.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestConfig.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestConfigVersion.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestConfigVersionImpl.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestTargetsPrecheck.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateConfig.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateConfigVersion.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateConfigVersionImpl.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateTargetsPrecheck.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/lib/Qt6Test.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/bin/Qt6Test.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Qt6Test.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Qt6Test.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "CMAKE_STRIP-NOTFOUND" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/Qt6Test.dll")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6Test/Qt6TestTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6Test/Qt6TestTargets.cmake"
         "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/CMakeFiles/Export/f91c599f64f4c90409d30a45d3c155d0/Qt6TestTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6Test/Qt6TestTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6Test/Qt6TestTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/CMakeFiles/Export/f91c599f64f4c90409d30a45d3c155d0/Qt6TestTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/CMakeFiles/Export/f91c599f64f4c90409d30a45d3c155d0/Qt6TestTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestVersionlessAliasTargets.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestVersionlessTargets.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate/Qt6TestPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate/Qt6TestPrivateTargets.cmake"
         "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/CMakeFiles/Export/b7e3aada5139fbc803e595124e934d60/Qt6TestPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate/Qt6TestPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate/Qt6TestPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/CMakeFiles/Export/b7e3aada5139fbc803e595124e934d60/Qt6TestPrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateVersionlessAliasTargets.cmake"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateVersionlessTargets.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate" TYPE FILE FILES
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/bin/Qt6Test.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6/modules" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6/modules/Test.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_html_docs_Test")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc/Qt6/qttestlib" TYPE DIRECTORY FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/doc/Qt6/qttestlib/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_qch_docs_Test")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc/Qt6" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/doc/Qt6/qttestlib.qch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6Test" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6Test/Qt6TestAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6TestPrivate" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6TestPrivate/Qt6TestPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Qt6/QtTest" TYPE DIRECTORY FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/include/QtTest/.syncqt_staging/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Qt6/QtTest" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/include/QtTest/qttestexports.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmark.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarkmetric.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qsignalspy.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtest.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtest_gui.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtest_network.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtest_widgets.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestaccessible.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestassert.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestcase.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestdata.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestevent.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtesteventloop.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestkeyboard.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestmouse.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestspontaneevent.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestsystem.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtesttouch.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtesttostring.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestwheel.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qttestglobal.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/qttestlib-config.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qabstractitemmodeltester.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/include/QtTest/QtTestDepends"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Qt6/QtTest/6.11.3/QtTest/private" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/3rdparty/cycle/cycle_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/3rdparty/cycle/cycle_include_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/3rdparty/catch2/catch_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qabstracttestlogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmark_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarkevent_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarkmeasurement_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarkmetric_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarkperfevents_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qbenchmarktimemeasurers_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qcomparisontesthelper_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qcsvbenchmarklogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qemulationdetector_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qjunittestlogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qplaintestlogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qpropertytesthelper_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qsignaldumper_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtaptestlogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qteamcitylogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestblacklist_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestcase_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestcoreelement_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestcrashhandler_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestelement_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestelementattribute_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtesthelpers_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestjunitstreamer_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestlog_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtestresult_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qtesttable_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/src/here-src-6-8349b2dce8.clean/src/testlib/qxmltestlogger_p.h"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/qttestlib-config_p.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/lib/Qt6Test.prl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Qt6/mkspecs/modules" TYPE FILE FILES
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6/mkspecs/modules/qt_lib_testlib.pri"
    "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/share/Qt6/mkspecs/modules/qt_lib_testlib_private.pri"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-rel/src/testlib/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
