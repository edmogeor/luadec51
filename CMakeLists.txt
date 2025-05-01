project(luadec51)

if (NOT WIN32)
    find_library(MATH_LIBRARY m REQUIRED)
endif()

add_subdirectory(lua)
add_subdirectory(luadec)
