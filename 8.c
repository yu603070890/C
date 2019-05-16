#include<stdio.h>
int sum()
{
        int a=0,b=0;
        int sum=0;
	printf("输入两个数\n");
	scanf("%d,%d",&a,&b);
	a=a*a;
	b=b*b;
	printf("%d %d",a,b);
	if(a>b)
	sum=a;
	else
	sum=b;

	}
	main(sum)
	{
	    printf("最大值是%d\n",sum);

	return 0;
	}
