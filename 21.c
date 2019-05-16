#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	printf("%d\t",a[1][3]);
	printf("%d\t",a[0][1]);
	printf("%d\n",a[0][2]);
	printf("%d\t",a[0][3]);
	printf("%d\t",a[1][1]);
	printf("%d\n",a[1][2]);
	printf("\n");
	return 0;
}
