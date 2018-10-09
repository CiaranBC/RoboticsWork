/* 
 * File:   my_wheels.h
 * Author: Luke
 *
 * Created on 08 October 2018, 22:44
 */

#ifndef MY_WHEELS_H
#define	MY_WHEELS_H

#ifdef	__cplusplus
extern "C" {
#endif


#define FULL_SPIN 1298;
#define ONE_DEGREE 3.61;

#ifdef	__cplusplus
}
#endif

/**
 * Functions
 */

void init_my_wheels(void);

void goForward(void);

void goBackwards(void);

void stopMoving(void);

void turnLeft(int degrees);

void turnRight(int degrees);

#endif	/* MY_WHEELS_H */

