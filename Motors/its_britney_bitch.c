/* 
 * File:   its_britney_bitch.c
 * Author: Luke
 *
 * Created on 11 October 2018, 09:17
 */

 #include <p30f6014A.h>
 #include <e_epuck_ports.h>
 #include <e_init_port.h>
 #include <e_prox.h>
 #include <my_wheels.h>
 #include <stdio.h>
 #include <common.h>

 int main(void)
 {
 	int value;
 	e_init_port();
 	e_init_prox();
    lightStartUp();
    while(1)
    {
 		long i;
        int j;
 		/*
        int *activeSensors; 
        int active;
        activeSensors = proxActiveSensors();
        for(j = 0; j < 8; j++) {
            active = *(activeSensors + j);
            set(j,active);
        }*/
        
        goForward();
        loopInDirection(0);
        delay(2);
        goBackwards();
        loopInDirection(1);
        delay(2);
 	}
 }

