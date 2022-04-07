#include <kipr/wombat.h>

int main()
{
 // wait_for_light(0);//turn on
    shut_down_in(45);
    create_connect();
    msleep(4000); //wait for lego bot to move
    create_drive_direct(200,-200);//turn 90
    msleep(1000);
   create_drive_direct(200,200);//drive forward
    msleep(2000);
    create_drive_direct(200,-200);//turn 90
    msleep(1000);
    create_drive_direct(200,200);//exit starting box
    msleep(500);
    create_drive_direct(-200,200);//turn 90
    msleep(1000);
    create_drive_direct(200,200);//push poms
    msleep(800);
    create_drive_direct(200,-200);//push poms
    msleep(1000);
    create_drive_direct(200,200);//push poms
    msleep(3500);
    create_drive_direct(200,200);//push poms
    msleep(4000);
    create_drive_direct(200,-200);//turn 180
    msleep(1900);
    create_drive_direct(200,200);//push poms
    msleep(7500);
    create_stop();
    printf("25\n");
    create_disconnect();
    return 0;
}
