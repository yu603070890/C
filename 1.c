#include <stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double c;
    a=0,b=0;
    for(a=1,b=2;a<500,b<500;a++,b++)
    {
        c=sqrt(a*b);

printf("%d %d %f\n",a,b,c);
    }

    return 0;
}
