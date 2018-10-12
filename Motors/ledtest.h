/* 
 * File:   ledtest.h
 * Author: Luke
 *
 * Created on 11 October 2018, 10:23
 */

#ifndef LEDTEST_H
#define	LEDTEST_H

#ifdef	__cplusplus
extern "C" {
#endif

void loopInDirection(int dir);
void flash(int pos);
void delay(double seconds);
void set(int index, int val);
void lightStartUp(void);
void lightAllOn(void);
void lightAllOff(void);

#ifdef	__cplusplus
}
#endif

#endif	/* LEDTEST_H */

typedef enum { false, true } bool;