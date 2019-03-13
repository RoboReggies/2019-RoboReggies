#include <kipr/botball.h>

int main()
{
  create_connect();
  printf("Beginning +connected");
  shut_down_in(15);
  printf("Shut down in 15 seconds");
  create_drive_direct(100,100);
  printf("moving forward");
  msleep(15000);
  printf("Distance in mm: %d\n", get_create_distance());
  create_disconnect();
  return 0;
}