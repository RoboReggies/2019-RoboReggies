#include <kipr/botball.h>

int main()
{
  create_connect(); //create will be connected
  shut_down_in(120); //stops after 2 minutes
  
  printf("I'll start to move");
  create_drive_direct(-100,100); //turning left
  
  printf("I'm done moving, going to wait now");
  msleep(4000); //waits after 4 seconds
  
  printf(I'm stopping now");
  create_stop(); //motors will be turned off
  create_disconnect(); //create will be turned off
  return 0;
}