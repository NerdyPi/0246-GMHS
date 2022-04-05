#include <kipr/wombat.h>

int clawOpen = 454;
int clawClose = 930;

int armUp = 493;
int armFullUp = 493;
int armFullDown = 1374;
int armDown = 1248;

int rdrive = 990;
int ldrive = 1000;

int main()
{
    enable_servos();
    mav(0, -rdrive);
    mav(1, -ldrive);
    msleep(500);
    mav(0, rdrive);
    mav(1, -ldrive);
    msleep(650);
    set_servo_position(2, armDown);
    msleep(600);
    mav(0, rdrive);
    mav(1, ldrive);
    msleep(6000);
    ao();
    set_servo_position(3, clawClose);
    msleep(600);
    ao();
    mav(0, -rdrive);
    mav(1, -ldrive);
    msleep(1000);
    
    
    
        
    return 0;
}
