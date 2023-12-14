cmake_minimum_required(VERSION 3.22)
project(SuperNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(SuperNote main.cpp MainWindow.cpp MainWindow.h TextEdit.cpp TextEdit.h)
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

if(NOT GTKMM_FOUND)
    message(FATAL_ERROR "gtkmm-3.0 not found!")
endif()

link_directories(
        ${GTKMM_LIBRARY_DIRS}
)
include_directories(
        ${GTKMM_INCLUDE_DIRS}
)

file(
        GLOB_RECURSE
        source_files
        src/*
)


target_link_libraries(
        SuperNote
        ${GTKMM_LIBRARIES}
)