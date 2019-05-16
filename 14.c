#include<stdio.h>
int main()
{
	int n=99;
	while(n<50000)
	{
		n=n+1;
		if(n%100==0)
		{printf("XXXX");}
	else
	{
		if(n%50==0)
	printf("YYYY");
	else
	printf("0");
	}
	}
	return 0;
}
