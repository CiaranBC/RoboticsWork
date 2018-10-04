#include "init_port.h"

int main(void)
{
	
	int led=0;
	int led_1=0;
	bool do_loop = true;
	int toggle = 0;
	int pos = 0;

	InitPort();

	while(do_loop)
	{
		loopInDirection(pos);
		pos = pos^1;
	}
}

// 0 = for, 1 = back
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

void flash(int pos) {
	if(pos == 8) {
		pos = 0;
	}
	set(pos,1);
	delay(0.1);
	set(pos,0);
}

void delay(double seconds) {
	long i;
	double maf = SECOND * seconds;
	long delay = (double)maf;
	for(i=0;i < delay;i++) {
		asm("nop");
	}
}


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
