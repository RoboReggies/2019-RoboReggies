#include <kipr/botball.h>
void s3lf();
int main()
{
  s3lf();
  return 0;
}
void s3lf()
{
    int ispeed=100;
    int ibright=300;
    int idistance=900;
    int idrove=0;
    int ilwheel=0;
    int irwheel=0;
    int islowspeed=15;
    int istop=0;
    int il=0;
    int ic=0;
    int ir=0;
    
    while (istop<1)//or you can use this code with (idistance > idrove) ||
    {
      printf("\nloop");
        if (analog(2) > ibright) {il=1;}
            else {il=0;}
        if (analog(1) > ibright) {ic=1;}
            else {ic=0;}
        if (analog(0) > ibright) {ir=1;}
            else {ir=0;}
          msleep(500);
         //printf(" %u",il);
       // printf(" %u",ic);
       // printf(" %u",ir);
        if (analog(0) < ibright && analog(1) > ibright && analog(2) < ibright)//1 0 1
        {
            motor(0, ispeed);
            motor(1, ispeed);
            printf("\nforward");
        }
        
        if (analog(0) < ibright && analog(1) < ibright && analog(2) > ibright)//1 1 0
        {
            motor(1, islowspeed);
            motor(0, ispeed/2);
             printf("\nright slow");
        }
       
        if (analog(0) < ibright && analog(1) > ibright && analog(2) > ibright)//1 0 0
        {
            motor(0, ispeed/2);
            motor(1, islowspeed);
             printf("\nright");
        }
        if (analog(0) > ibright && analog(1) > ibright && analog(2) < ibright)// 0 0 1
        {
            motor(0, islowspeed);
            motor(1, ispeed);
             printf("\nleft");
        }
        
		if (analog(0) > ibright && analog(1) < ibright && analog(2) < ibright)//0 1 1
        {
            motor(0, islowspeed);
            motor(1, ispeed/2);
             printf("\nleft slow");
        }
        if (analog(0) > ibright && analog(1) > ibright && analog(2) > ibright)//0 0 0
        {
            motor(0, 0);
            motor(1, 0);
            istop=1;
             printf("\nstop");
        }
        if (analog(0) < ibright && analog(1) < ibright && analog(2) < ibright)//1 1 1
        {
         motor(0, islowspeed);
          motor(1, ispeed);
             printf("\n left");
        }
    }
}