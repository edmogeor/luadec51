cmake_minimum_required(VERSION 3.10)
project(luadec51)

if (NOT WIN32)
    find_library(MATH_LIBRARY m REQUIRED)
endif()

add_subdirectory(lua)
add_subdirectory(luadec)
