#include<stdio.h>
main(){
	float a,b,max;
	printf("����������\n");
	scanf("%f %f",&a,&b);
	if(a>b)
	{
		max = a;
	printf("a���\n",max);
	}
	if(a<b)
	{
		max = b;
		printf("b���\n",max);
	}
	else
	{
		printf("���������\n");
	}
	return 0;
}
