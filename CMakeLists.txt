cmake_minimum_required(VERSION 3.21)

project(CODE_L)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    OpenGLWidgets
)

qt_standard_project_setup()

qt_add_executable(CODE_L
    main.cpp
)
find_package(OpenGL REQUIRED)
target_link_libraries(CODE_L PRIVATE
    Qt6::Widgets
    Qt6::OpenGLWidgets
    OpenGL::GL
)
find_package(Eigen3 REQUIRED)

find_package(fmt CONFIG REQUIRED)

find_package(spdlog CONFIG REQUIRED)

find_package(nlohmann_json CONFIG REQUIRED)

find_package(Catch2 CONFIG REQUIRED)