#include <kipr/wombat.h>

int clawOpen = 454;
int clawClose = 930;

int armUp = 493;
int armFullUp = 493;
int armDown = 1374;
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
    msleep(10700);
    mav(0, -rdrive);//turn right 
    mav(1, ldrive);
    msleep(300);
    mav(0,rdrive);// drive forwards 
    mav(1,ldrive);
    msleep(5400);
    ao();
    set_servo_position(3, clawOpen);// open claw
    msleep(550);
    ao();
    mav(0, -rdrive);//drive backwards 
    mav(1, -ldrive);
    msleep(1000);
    mav(0,rdrive);// turn left 
    mav(1,-ldrive);
    msleep(1300);
    //mav(0, -rdrive);//drive backwards 
    //mav(1, -ldrive);
    //while ((digital(0) ==1) && (digital(1) ==1));
    //{ 
    mav(0, rdrive);//drive backwards 
    mav(1, ldrive);
    msleep(5000);
    ao();
    set_servo_position(3, clawClose);//close claw
    msleep(500);
    mav(0, -rdrive);//backwards
    mav(1, -ldrive);
    msleep(700);
    //mav(0, rdrive);//turn left
    //mav(1, -ldrive);
    //msleep(700);
    //set_servo_position(2, armDown);// arm down 
    //msleep(600);
    //mav(0, rdrive);// drive forwards 
    //mav(1, ldrive);
    //msleep(6000);
    //ao();
    //set_servo_position(3, clawClose);// close claw
    //msleep(600);
    //ao();
    //mav(0, -rdrive);// drive backwards 
    //mav(1, -ldrive);
    //msleep(1000);
    return 0;
}
