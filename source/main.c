#include <3ds.h>
#include "main.h"

void __appInit()
{
    // Initialize services
    srvInit();
    aptInit();
    hidInit();
    gfxInitDefault();
}

void __appExit()
{
    // Exit services
    gfxExit();
    hidExit();
    aptExit();
    srvExit();
}



int main()
{
    // HID Input
    hidScanInput();
    // Abort reboot if L is pressed
    if (hidKeysDown() != KEY_L) {
	aptOpenSession();
	APT_HardwareResetAsync();
	aptCloseSession();
    }
    return 0;
}
