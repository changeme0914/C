#define _CRT_SECURE_NO_WARNINGS 1
// 密码验证合格程序
//#include<stdio.h>
//#include<string.h>
//int main()
//{	
//	int a, b, c, d;
//	char arr[200] = { 0 };
//	while (scanf("%s",&arr) != EOF)
//	{
//		int sum = 0; int num = 0;
//		int len = strlen(arr);
//		int i;
//		for (i = 0; i < len; i++)
//		{
//			if (arr[i] >= '0'&&arr[i] < '9')
//			{
//				a = 1;
//			}
//			else if (arr[i] >= 'A'&&arr[i] <= 'Z')
//			{
//				b = 1;
//			}
//			else if (arr[i] >= 'a'&&arr[i] <= 'z')
//			{
//				c = 1;
//			}
//			else
//			{
//				d = 1;
//			}
//		}
//		sum = a + b + c + d;
//		for (int i = 0; i <= len - 6; i++)
//		{
//			for (int j = i + 3; j <= len - 3; j++)
//			{
//				if ((arr[i] == arr[j]) && (arr[i + 1] == arr[j + 1]) && (arr[i + 2] == arr[j + 2]))
//				{
//					num++;
//				}
//				if (num != 0)
//				{
//					break;
//				}
//			}
//			if (num != 0)
//			{
//				break;
//			}
//		}
//		if ((sum >= 3) && (num == 0) && (len>9))
//		{
//			printf("OK\n");
//		}
//		else if ((sum<=2)||(num!=0)||(len<=8))
//		{
//			printf("NG\n");
//		}
//	}
//	return 0;
//}
// 字符串加解密
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	while (gets(s)!=NULL)
	{
		char s1[1000] = { 0 };
		gets(s1);
		int len = strlen(s);
		int len1 = strlen(s1);
		for (int i = 0; i<len; i++)
		{
			if (s[i] >= '0'&&s[i] <= '9')
			{
				if (s[i] != '9')
					s[i] = s[i] + 1;
				else
					s[i] = '0';
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i] != 'z')
					s[i] = s[i]-32 + 1;
				else
					s[i] = 'A';
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				if (s[i] != 'Z')
					s[i] = s[i] + 32 + 1;
				else
					s[i] = 'a';
			}
		}
		for (int i = 0; i<len1; i++)
		{
			if (s1[i] >= '0'&&s1[i] <= '9')
			{
				if (s1[i] != '0')
					s1[i] = s1[i] - 1;
				else
					s1[i] = '9';
			}
			else if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				if (s1[i] != 'a')
					s1[i] = s1[i]-32 - 1;
				else
					s1[i] = 'Z';
			}
			else if (s1[i] >= 'A' && s1[i] <= 'Z')
			{
				if (s1[i] != 'A')
					s1[i] = s1[i] + 32 - 1;
				else
					s1[i] = 'z';
			}
		}
		printf("%s\n", s);
		printf("%s\n", s1);
	}
	return 0;
}
