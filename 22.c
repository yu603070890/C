#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
/*
   输入一行字符，统计其中有多少个单词
   单词之间用空格分隔开
*/
int main(void)
{
	char str[81];
	int i, num = 0, word = 0;
	int c;
 
	//从终端获取（输入）一行字符
	printf("请输入一行字符（单词之间用空格分隔开）：\n");
	gets_s(str, 81); 
/* 
gets() 不安全，已在ISO/IEC 9899 2011(C11)标准中被移除，使用vs C++ 提供的特有gets_s()函数，格式：gets_s（字符数组名, 参数） 参数为存储字符串的空间长度！
*/
 
	//进行判断字符串单词的个数
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
	
	//输出字符串中单词的个数
	printf("此字符串中总共有%d个单词\n", num);
 
	system("pause");
	return 0;
}
