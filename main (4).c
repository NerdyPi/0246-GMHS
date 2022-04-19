#include <kipr/wombat.h>

int clawOpen = 454;
int clawClose = 930;

int armUp = 493;
int armFullUp = 493;
int armDown = 1374;
int armMiddle = 1320;
//int armFullDown = 1248;

int rdrive = 990;
int ldrive = 1000;
//1374 lowest, 493 highest
    
int main()
{
    //wait_for_light(0);
    enable_servos();// turn on servos
    set_servo_position(3, clawClose);//close claw
    msleep(500);
    set_servo_position(2, armFullUp);// arm up
    msleep(500);
    mav(0, rdrive);//drive forwards
    mav(1, ldrive);
    msleep(11700);
    mav(0, -rdrive);//turn right 
    mav(1, ldrive);
    msleep(350);
    mav(0,rdrive);// drive forwards 
    mav(1,ldrive);
    msleep(4730);
    ao();
    set_servo_position(3, clawOpen);// open claw
    msleep(550);
    ao();
    msleep(3500);
    //next 15-30 seconds
    mav(0, -rdrive);//drive backwards 
    mav(1, -ldrive);
    msleep(1000);
    mav(0,rdrive);// turn left 
    mav(1,-ldrive);
    msleep(980);
    set_servo_position(2, armMiddle);//lower arm
    msleep(500);
    mav(0, rdrive);//drive forwards 
    mav(1, ldrive);
    msleep(5620);
    ao();
    set_servo_position(3, clawClose);//close claw
    msleep(2000);
    mav(0, -rdrive);//backwards
    mav(1, -ldrive);
    msleep(3000);
    set_servo_position(2, armFullUp);//arm up
    msleep(500);
    mav(0,-rdrive);
    mav(1, ldrive);
    msleep(2200);
    mav(0,rdrive);
    mav(1, ldrive);
    msleep(600);
    return 0;
}
