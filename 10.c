#include<stdio.h>
int main()
{
	int a,b,z;
	a=0,b=0;

	for(;a<10000,b<10000;a++,b++)
	{
		z=a+b;
		printf("%d\t%d\t",a,b);
		if(a%9==0)
            printf("*\n");
        else
            printf("%d\t",z);
	}
	return 0;
}
