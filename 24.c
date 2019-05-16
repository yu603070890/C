#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,a;
    x=1,y=1,a=2;
    z=sqrt(x*x+y*y);
    while(x<50000&&y<50000)
    {
        a=a*a;
        if(z=!a)
        printf(" ");
        else
            printf("0");
            x++;y++;
    }
    return 0;
}
