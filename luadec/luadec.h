#pragma once

#include "proto.h"

void luaU_decompile(const Proto * f, int lflag);
void luaU_decompileFunctions(const Proto * f, int lflag, int functions);
void luaU_disassemble(const Proto* f, int dflag, int functions, char* name);
