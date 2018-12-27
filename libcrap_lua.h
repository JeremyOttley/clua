#include "libcrap.h"

int crap_add_wrapper(lua_State* lua) {
  int top = lua_gettop(lua);
  if (2 != top) return -1;
  if (!lua_isnumber(lua, 1)) return -1;
  if (!lua_isnumber(lua, 2)) return -1;

  int num_a = lua_tonumber(lua, 1);
  int num_b = lua_tonumber(lua, 2);

  int res = crap_add(num_a, num_b);

  lua_settop(lua, 0);
  lua_pushnumber(lua, res);
  return 1;
}

int crap_isstreq_wrapper(lua_State* lua) {

int top = lua_gettop(lua);
if (2 != top) return -1;
if (!lua_isstring(lua, 1)) return -1;
if (!lua_isstring(lua, 2)) return -1;

int str_a = lua_tostring(lua, 1);
int str_b = lua_tostring(lua, 2);

int res = crap_isstreq(str_a, str_b);

lua_settop(lua, 0);
lua_pushboolean(lua, res);
return 1;
}

void glue(lua_State* lua) {
	lua_pushcfunction(lua, crap_add_wrapper);
	lua_setglobal(lua, "c_crap_add");

	lua_pushcfunction(lua, crap_isstreq_wrapper);
	lua_setglobal(lua, "c_crap_isstreq");
}
