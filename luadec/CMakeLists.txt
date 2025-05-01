add_executable(luadec)
target_sources(luadec PRIVATE
    guess.c
    ldprint.c
    luadec.c
    output.c
    output.h
    print.h
    proto.c
    proto.h
    StringBuffer.c
    StringBuffer.h
    structs.c
    structs.h)
target_link_libraries(luadec PRIVATE lua)
target_include_directories(luadec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(luadec PROPERTIES
        LINKER_LANGUAGE C
        WIN32_EXECUTABLE FALSE)
