#include <constants.h>

/**
 * Wait for n seconds before continuing
 * @param seconds
 */
void delay(double seconds) {
	long i;
	double maf = SECOND * seconds;
	long delay = (double)maf;
	for(i=0;i < delay;i++) {
		asm("nop");
	}
}
