#include <common.h>
#include <e_motors.h>
#include <my_wheels.h>

/**
 * Init the wheels
 */
void init_my_wheels(void) {
    e_init_motors();
}

/**
 * Set the speed of the left wheel
 * @param speed
 */
void set_left_wheel_speed(int speed) {
     e_set_speed_left(speed);
}

/**
 * Set the speed of the right wheel
 * @param speed
 */
void set_right_wheel_speed(int speed) {
     e_set_speed_right(speed);
}

/**
 * Move the robot forwards for n seconds
 */
void goForward(void) {
    set_left_wheel_speed(500); 
    set_right_wheel_speed(500);
}

/**
 * Make the robot move backwards
 */
void goBackwards(void) {
    set_left_wheel_speed(-500); 
    set_right_wheel_speed(-500);
}

/**
 * Stop the robot from moving
 */
void stopMoving(void) {
    set_left_wheel_speed(0); 
    set_right_wheel_speed(0);
}

/**
 * Make the robot turn left N Degrees
 * @param degrees
 */
void turnLeft(int degrees) {
    stopMoving();
    e_set_steps_left(0); 
    e_set_steps_right(0);
    set_left_wheel_speed(-500); 
    set_right_wheel_speed(500);
    double _steps = degrees * ONE_DEGREE;
    int int_steps = (double) _steps;
    while(e_get_steps_right() < int_steps) {
        asm("nop");
    }
    stopMoving();
}

/**
 * Turn right N degrees
 * @param degrees
 */
void turnRight(int degrees) {
    stopMoving();
    e_set_steps_left(0); 
    e_set_steps_right(0);
    set_left_wheel_speed(500); 
    set_right_wheel_speed(-500);
    double _steps = degrees * ONE_DEGREE;
    int int_steps = (double) _steps;
    while(e_get_steps_left() < int_steps) {
        asm("nop");
    }
    stopMoving();
}


