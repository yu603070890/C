#include<stdio.h>
main(){
	float a,b,max;
	printf("输入两个数\n");
	scanf("%f %f",&a,&b);
	if(a>b)
	{
		max = a;
	printf("a最大\n",max);
	}
	if(a<b)
	{
		max = b;
		printf("b最大\n",max);
	}
	else
	{
		printf("两个数相等\n");
	}
	return 0;
}
