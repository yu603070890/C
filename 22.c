#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
/*
   ����һ���ַ���ͳ�������ж��ٸ�����
   ����֮���ÿո�ָ���
*/
int main(void)
{
	char str[81];
	int i, num = 0, word = 0;
	int c;
 
	//���ն˻�ȡ�����룩һ���ַ�
	printf("������һ���ַ�������֮���ÿո�ָ�������\n");
	gets_s(str, 81); 
/* 
gets() ����ȫ������ISO/IEC 9899 2011(C11)��׼�б��Ƴ���ʹ��vs C++ �ṩ������gets_s()��������ʽ��gets_s���ַ�������, ������ ����Ϊ�洢�ַ����Ŀռ䳤�ȣ�
*/
 
	//�����ж��ַ������ʵĸ���
	for (i = 0; ((c = str[i]) != '\0'); i++)
	{
		if (c == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	
	//����ַ����е��ʵĸ���
	printf("���ַ������ܹ���%d������\n", num);
 
	system("pause");
	return 0;
}
