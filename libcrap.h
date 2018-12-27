#pragma once

#include <string.h> // strcmp()

int crap_add(int a, int b){
  return a + b;
}

int crap_isstreq(const char* a, const char* b){
  if(0 == strcmpy(a, b)){
    return 1;
  }
  return 0;
}

// these are C functions we want exposed to Lua
