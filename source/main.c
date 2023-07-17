#include <nds.h>
#include <stdio.h>
//---------------------------------------------------------------------------------
int main(void) {
//---------------------------------------------------------------------------------
	consoleDemoInit();
	iprintf("BTNTest\n");
	iprintf("By andre_w\n");
	iprintf("Press and hold START to exit the app\n");
	while(1) {
		swiWaitForVBlank();
		scanKeys();
		int pressed = keysDown();
		int held = keysHeld();
		if(held & KEY_START) {
			break;
		};
		if(pressed & KEY_START) break;
		if(pressed & KEY_SELECT) iprintf("Select\n");
		if(pressed & KEY_A) iprintf("A\n");
		if(pressed & KEY_B) iprintf("B\n");
		if(pressed & KEY_X) iprintf("X\n");
		if(pressed & KEY_Y) iprintf("Y\n");
		if(pressed & KEY_LEFT) iprintf("DPAD LEFT\n");
		if(pressed & KEY_RIGHT) iprintf("DPAD RIGHT\n");
		if(pressed & KEY_UP) iprintf("DPAD UP\n");
		if(pressed & KEY_DOWN) iprintf("DPAD DOWN\n");
		if(pressed & KEY_L) iprintf("TRIGGER L\n");
		if(pressed & KEY_R) iprintf("TRIGGER R\n");
		if(pressed & KEY_TOUCH) iprintf("Screen touched\n");
	}
}
