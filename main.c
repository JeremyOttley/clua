#include <lua.h> // Lua basic definitions
#include <lualib.h> // Lua standard libraries
#include <luaxlib.h> // Lua auxiliary functions
#include "libcrap_lua.h" // our Lua exported functions

int main(int argc, char *argv[]){
  lua_State* lua = luaL_newstate(); // create lua state object
  luaL_openlibs(lua); // initiates lua standard library
  glue(lua)' // adds glue functions to Lua from libcrap_lua.h
  luaL_dofile(lua, "./app.lua") // loads and executes app.lua
  lua_close(lua); // closes the interpreter
}
