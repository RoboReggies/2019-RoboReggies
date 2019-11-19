#include <kipr/botball.h>

/*main(){
  linefollow(0,1,0,0,1,0,100)
}

void linefollow(int sensorport0,int sensorport1, int sensorport2,int motorport0,int motorport1 ,int lcolor, int mtime)//states what the fuction name is and the parameters the function will be using
{
  switch(mtime)//This is a switch for if the time is consistent
  {
    
    if (i > 0)
    {
      switch(sensor)//Contains data about how many sensors are being used and choosing what situation to execute.
      {
        case 0://signifies a new situation(or case)
        if (sensorport2 >= 0)
        {
          printf("Make sure sensor 3 is in a port other than port 0 and restart the program, if it is not being used, click a button to continue normally /n ")
          if (any_button()=1)
          {
            break;//signifies the ending of the switch statement
          }
          
        }
        else
        {
          switch(sensorvalues)
          {
            case 0://This is the logical thinking for the sensor in the first port
            if (analog(sensorport0)>170){
              motor(motorport0, 75);
            motor(motorport1,100);
            }
         }
        }
        case 1:
        
      }
      i++;
   }
   
   
  }
  
}*/
#include <kipr/botball.h>
int main(){
  linefollow(0,1,0,0,1,0,100);
}

void linefollow(int sensorport0,int sensorport1, int sensorport2,int motorport0,int motorport1 ,int lcolor, int mtime)//states what the fuction name is and the parameters the function will be using
{
   
   int i=0;
    if (i > 0)
        printf("time");
      switch(sensorport0)//Contains data about how many sensors are being used and choosing what situation to execute.
      {
        case 0://signifies a new situation(or case)
        if (sensorport2 >= 0)
        {
          printf("Make sure sensor 3 is in a port other than port 0 and restart the program, if it is not being used, click a button to continue normally \n ");
            wait_for_any_button();
        }
        else
        {
          switch(sensorport1)
          {
            case 0://This is the logical thinking for the sensor in the first port
            if (analog(sensorport0)>170){
              motor(motorport0, 75);
              motor(motorport1,100);
            }
          }
        }
        case 1:printf("yeet");
        
      }
      i++;
        if (i == mtime*1000)
        {
        msleep(0);
        }
    
   
   
  }
  

