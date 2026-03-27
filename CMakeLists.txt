cmake_minimum_required(VERSION 3.16)
project(GDLevelGen VERSION 5.4.1)

set(CMAKE_CXX_STANDARD 17)

set(GEODE_PATH "/path/to/geode")
include(${GEODE_PATH}/CMake/GeodePlugin.cmake)

geode_plugin(
    GDLevelGen
    VERSION 5.4.1
    AUTHOR "T6"
    DESCRIPTION "Ultimate GDLevelGen Mega Mod for GD 2.2081"
    DEPENDS ""
)

file(GLOB_RECURSE SOURCES src/*.cpp)
geode_plugin_add_sources(${SOURCES})
