#include<stdio.h>
int main()
{
int a=1;
while(a<10000){
a=a+1;
if(a%2==0)
{
    printf("x ");
}
else
{printf("y ");}
}
return 0;
}
