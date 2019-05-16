#include <stdio.h>
int main()
{
    int a[3][3]={0,1,2,3,4,5,6,7,8};
	int i,j;
	for(i=0,j=0;j<3,i<3;j++)
	{
		printf("%d\t",a[i][j]);
		if(j==2)
		{
		printf("\n");
		j=-1;
		i++;
		}

	}
    printf("Anycodes, Hello World of C!");
    return 0;
}
