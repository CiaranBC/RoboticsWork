#include "e_epuck_ports.h"
#include "common.h"

/**
 * Set a light to be on (1) or off (0)
 * @param index
 * @param val
 */
void set(int index, int val) {
	switch(index) {
		case 0:
			LED0 = val;
		break;
		case 1:
			LED1 = val;
		break;
		case 2:
			LED2 = val;
		break;
		case 3:
			LED3 = val;
		break;
		case 4:
			LED4 = val;
		break;
		case 5:
			LED5 = val;
		break;
		case 6:
			LED6 = val;
		break;
		case 7:
			LED7 = val;
		break;
	}
}

/**
 * Flash a light on and off
 * @param pos
 */
void flash(int pos) {
	if(pos == 8) {
		pos = 0;
	}
	set(pos,1);
	delay(0.1);
	set(pos,0);
}

/**
 * Flash all of the lights in sequence
 * @param dir
 */
void loopInDirection(int dir) {
	int i;
	if(dir) {
		for(i = 7; i >= 0; i--) {
			flash(i);
		}
	} else {
		for(i = 0; i <= 8; i++) {
			flash(i);
		}
	}
}

/**
 * Turn all of the lights on
 */
void lightAllOn() {
    int i;
    for(i = 0; i <= 7; i++) {
        set(i,1);
    }
}

/**
 * Turn all of the lights off
 */
void lightAllOff() {
    int i;
    for(i = 0; i <= 7; i++) {
        set(i,0);
    }
}

/**
 * Perform the lights startup sequence
 */
void lightStartUp() {
    loopInDirection(0);
    int x;
    for(x = 0; x <= 1; x++) {
        lightAllOn();
        delay(0.4);
        lightAllOff();
        delay(0.4);
    }
}



