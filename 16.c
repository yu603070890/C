#include<stdio.h>
int main()
{
	int a,b,c;
	a=0,b=1;
	while(c<10000)
	{
		a=a+1;
		c=a*b;
		if(c%2==0)
		printf("2");
		if(c%3==0)
		printf("3");
		if(c%4==0)
		printf("4");
		if(c%5==0)
		printf("|");
		else
		printf(" ");
	}
	return 0;
}
