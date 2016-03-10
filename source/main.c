#include <3ds.h>
#include "main.h"

void __appInit()
{
    // Initialize services
    srvInit();
    aptInit();
    gfxInitDefault();
}

void __appExit()
{
    // Exit services
    gfxExit();
    aptExit();
    srvExit();
}

int main()
{
	aptOpenSession();
	APT_HardwareResetAsync();
	aptCloseSession();
    return 0;
}
