add_library(lua STATIC)
target_sources(lua PRIVATE
        lapi.c
        lapi.h
        lauxlib.c
        lauxlib.h
        lbaselib.c
        lcode.c
        lcode.h
        ldblib.c
        ldebug.c
        ldebug.h
        ldo.c
        ldo.h
        ldump.c
        lfunc.c
        lfunc.h
        lgc.c
        lgc.h
        linit.c
        liolib.c
        llex.c
        llex.h
        llimits.h
        lmathlib.c
        lmem.c
        lmem.h
        loadlib.c
        lobject.c
        lobject.h
        lopcodes.c
        lopcodes.h
        loslib.c
        lparser.c
        lparser.h
        lstate.c
        lstate.h
        lstring.c
        lstring.h
        lstrlib.c
        ltable.c
        ltable.h
        ltablib.c
        ltm.c
        ltm.h
        lua.c
        lua.h
        luac.c
        luaconf.h
        lualib.h
        lundump.c
        lundump.h
        lvm.c
        lvm.h
        lzio.c
        lzio.h
        print.c
)
target_include_directories(lua PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if (NOT WIN32)
    target_link_libraries(lua PRIVATE ${MATH_LIBRARY})
    target_compile_definitions(lua PUBLIC LUA_USE_LINUX)
endif()
