#include <kipr/wombat.h>

int clawOpen = 454;
int clawClose = 930;

int armUp = 493;
int armFullUp = 493;
int armDown = 1374;
int armFullDown = 1248;

int rdrive = 990;
int ldrive = 1000;
//1374 lowest, 493 highest
int main()
{
    //wait_for_light(0);
    enable_servos();
    //set_servo_position(2, armDown);
    //set_servo_position(3, clawOpen);
    //msleep(500);
    //mav(0, drive);
    //mav(1, drive);
    //msleep(200);
    //ao();
    set_servo_position(3, clawClose);
    msleep(500);
    set_servo_position(2, armFullUp);
    msleep(500);
    mav(0, rdrive);
    mav(1, ldrive);
    msleep(11000);
    mav(0, -rdrive);
    mav(1, ldrive);
    msleep(200);
    mav(0,rdrive);
    mav(1,ldrive);
    msleep(5000);
    ao();
    set_servo_position(3, clawOpen);
    msleep(600);
    return 0;
}
