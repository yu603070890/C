#include<stdio.h>
int main()
{
	int n=1,sum=0,a=2;
	while(n<=100)
	{
	n=n+1;
	sum=sum+a;
	a=a+2;	
	}
	printf("计算结果是%d\n",sum);
	return 0;
}
