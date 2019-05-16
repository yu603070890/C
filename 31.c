#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	for(i=0,j=0;i<3,j<3;j++)
	{
		printf("%d\t",a[i][j]);
		if(j==2)
		{
		printf("\n");
		j=0;
		}
		i++;
	}
	return 0;
}

