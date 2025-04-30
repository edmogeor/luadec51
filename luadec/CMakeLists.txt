add_library(luadec STATIC)
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