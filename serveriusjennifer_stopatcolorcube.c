#include <kipr/botball.h>

int main()
{
  create_connect(); //connects to the create bot
  shut_down_in(120); //shuts down in 60 seconds
  
  camera_open();
  
  //turn left example code
  /*
  camera_update();
  while(get_object_center_x(0,0) < 60) //while camera track object being less than 60 pixels, turn left
  {
    camera_update();
    create_drive_direct(-11,11);
  }
  */
  
  //turn right example code
  camera update();
  while(get_object_count(0) == 0) //while no object is detected turn right
  {
    camera_update();
    create_drive_direct(11,-11);
  }
  
  camera_close();
  
  create_stop(); //create motors will stop
  create_disconnect(); //disconnects
  
  return 0;
}