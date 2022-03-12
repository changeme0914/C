#define _CRT_SECURE_NO_WARNINGS 1
//质数因子
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		while (n%i == 0)
//		{
//			printf("%d ", i);
//			n /= i;
//		}
//	}
//	if (n > 1)
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}
//字符串排序
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr1[1000][1000];
//	char arr2[1000];
//	int i; int j;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(arr1[j], arr1[j + 1])>0)
//			{
//				strcpy(arr2, arr1[j + 1]);
//				strcpy(arr1[j + 1], arr1[j]);
//				strcpy(arr1[j], arr2);
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", arr1[i]);
//	}
//	return 0;
//}
//求int型正整数在内存中存储时1的个数
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			sum++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", sum);
//}
//简单密码
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100]; 
//	gets(arr);
//	int len = strlen(arr);
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a'&&arr[i] <= 'c')
//			arr[i] = '2';
//		else if (arr[i] >= 'd'&&arr[i] <= 'f')
//			arr[i] = '3';
//		else if (arr[i] >= 'g'&&arr[i] <= 'i')
//			arr[i] = '4';
//		else if (arr[i] >= 'j'&&arr[i] <= 'l')
//			arr[i] = '5';
//		else if (arr[i] >= 'm'&&arr[i] <= 'o')
//			arr[i] = '6';
//		else if (arr[i] >= 'p'&&arr[i] <= 's')
//			arr[i] = '7';
//		else if (arr[i] >= 't'&&arr[i] <= 'v')
//			arr[i] = '8';
//		else if (arr[i] >= 'w'&&arr[i] <= 'z')
//			arr[i] = '9';
//		else if (arr[i] >= 'A'&&arr[i] <= 'Y')
//			arr[i] = arr[i] + 33;
//		else if (arr[i] == 'Z')
//			arr[i] = 'a';
//		else if (arr[i] >= '0'&&arr[i] <= '9')
//			arr[i] = arr[i];
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//表示数字
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	gets(arr);
	int len = strlen(arr);
	int i=0;
	while (i<len)
	{
		if (arr[i] >= '0'&&arr[i] <= '9')
		{
			printf("*");
			while (arr[i] >= '0'&&arr[i] <= '9')
			{
				printf("%c", arr[i]);
				i++;
			}
			printf("*");
		}
		else
		{
			printf("%c", arr[i]);
			i++;
		}
	}
	return 0;
}