#include <lua.h> // Lua basic definitions
#include <lualib.h> // Lua standard libraries
#include <luaxlib.h> // Lua auxiliary functions
#include "libcrap_lua.h" // our Lua exported functions

int main(int argc, char *argv[]){
  lua_State* lua = luaL_newstate();
  luaL_openlibs(lua);
  glue(lua)' //WTF?
  luaL_dofile(lua, "./app.lua")
  lua_close(lua);
}
