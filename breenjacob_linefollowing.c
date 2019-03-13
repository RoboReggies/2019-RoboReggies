#include <kipr/botball.h>

int main()
{
    while (digital(0) == 0)
    {
        if(analog(0) > 1800)
        {
        motor(0, 5);
        motor(1, 90);
        }
    else
    {
        motor(0, 90);
        motor(1, 5);
    }
    }
ao();

return 0;
}
