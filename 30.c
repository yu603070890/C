#include <stdio.h>
int main()
{
    int a[10]={0};
    int i;
    for(i=0; i<=9;i++)
	{
        a[i]=i;
        printf("%d\t", a[i]);
        if(i%2!=0&&i>0)
        printf("\n");
    }
    a[i] = 0;  //�˴�Ϊ��ӵĴ��룬Ҳ����д�� str[i] = '\0';
    return 0;
}
