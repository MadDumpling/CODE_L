# Additional target information for Qt6CoreTools
if(NOT DEFINED QT_DEFAULT_IMPORT_CONFIGURATION)
    set(QT_DEFAULT_IMPORT_CONFIGURATION DEBUG)
endif()
get_target_property(_qt_imported_location_default Qt6::syncqt IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::syncqt PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::moc IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::moc PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::rcc IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::rcc PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::tracepointgen IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::tracepointgen PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::tracegen IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::tracegen PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::cmake_automoc_parser IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::cmake_automoc_parser PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::qlalr IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::qlalr PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::qtpaths IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::qtpaths PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::androiddeployqt IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::androiddeployqt PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::androidtestrunner IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::androidtestrunner PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::wasmdeployqt IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::wasmdeployqt PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()
get_target_property(_qt_imported_location_default Qt6::qmake IMPORTED_LOCATION_${QT_DEFAULT_IMPORT_CONFIGURATION})

# Default configuration
if(_qt_imported_location_default)
    set_property(TARGET Qt6::qmake PROPERTY IMPORTED_LOCATION "${_qt_imported_location_default}")
endif()

unset(_qt_imported_location)
unset(_qt_imported_location_default)
unset(_qt_imported_soname)
unset(_qt_imported_soname_default)
unset(_qt_imported_link_dependencies)
unset(_qt_imported_link_dependencies_default)
unset(_qt_imported_objects)
unset(_qt_imported_objects_default)
unset(_qt_imported_clr)
unset(_qt_imported_clr_default)
unset(_qt_imported_configs)