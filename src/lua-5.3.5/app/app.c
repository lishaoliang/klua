#include "app.h"

int main(int argc, char **argv)
{
    return lua_main(argc, argv);
}

int app_openlibs_ex(lua_State *L)
{
    return 0;
}
