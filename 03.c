#include <stdio.h>
int main()
{
    int a, b, max;
    printf("��������������");
    scanf("%d %d", &a, &b);
    max=b;  // ����b���
    if(a>b) {max=a;}// ���a>b����ô����max��ֵ
    else{
	max=b;}
    printf("%d��%d�Ľϴ�ֵ��:%d\n", a, b, max);

    return 0;
}
