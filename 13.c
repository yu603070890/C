#include<stdio.h>
int main()
{
	int n=1,sum=0,a=1;
	while(n<=20)
	{
		n=n+1;	//n=2,3,4,5,6....
		sum=sum+a;	//sum=1,2,3,4,5...
		a=a*n;	//a=n=2,3,4,5,6...
	}
	printf("计算结果是%d\n",sum);
	return 0;
}
