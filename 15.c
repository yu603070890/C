#include<stdio.h>
int main()
{
	int a,b,c;
	a=0,b=2;
	while(c<1000)
	{
		c=a*b;
		a=a+1;
		printf("a=%d\tc=%d\n",a,c);
	}
	return 0;
}
