/* 
 * File:   run_me.c
 * Author: Luke
 *
 * Created on 09 October 2018, 14:51
 */

#include <stdio.h>
#include <stdlib.h>
#include <e_sound.h>
#include <e_init_port.h>

/*
 * 
 */
int main(int argc, char** argv) {
    e_init_port();
  	e_init_sound();
  	while(1)
  	{
  		long i;
  		e_play_sound(0, 2112); //sound 1
  		for(i=0; i<4000000; i++) {asm("nop");}
  		e_play_sound(2116, 1760); //sound 2
  		for(i=0; i<4000000; i++) {asm("nop");}
  		e_play_sound(3878, 3412); //sound 3
  		for(i=0; i<4000000; i++) {asm("nop");}
  		e_play_sound(7294, 3732); //sound 4
  		for(i=0; i<4000000; i++) {asm("nop");}
  		e_play_sound(11028, 8016); //sound 5
  		for(i=0; i<4000000; i++) {asm("nop");}
  	}
}

