#define _CRT_SECURE_NO_WARNINGS 1
// �ַ������һ�����ʵĳ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[5000] = { 0 };
//	gets(arr);
//	int sum = 0;
//	int len = strlen(arr);
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] != ' ')
//		{
//			sum += 1;
//		}
//		else
//		{
//			sum = 0;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//����ĳ�ַ����ִ���
//#include<stdio.h>
//#include<string.h>
//#include <ctype.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	char n;
//	scanf("%c", &n);
//	int len = strlen(arr);
//	int i;
//	int sum = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (tolower(arr[i]) == tolower(n))
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//����ת��
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%x", &n) != EOF)
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}
//�ַ����ָ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100];
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = strlen(arr);
//		int sum = 0;
//		int i;
//		for (i = 0; i < len; i++)
//		{
//			if (i>0&&i % 8 == 0)
//			{
//				printf("\n");
//				sum = 0;
//			}
//			printf("%c", arr[i]);
//			sum++;
//		}
//		while (sum<8)
//		{
//			printf("0");
//			sum++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ַ�����ͳ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[500] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int i;
//	int sum = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j;
//		for (j = i+1; j < len; j++)
//		{
//			if (arr[i] != arr[j])
//			{
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (j == len)
//		{
//			sum+=1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//���ֵߵ�
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0");
//	}
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}
//�ַ�����ת
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	int i;
//	while (left < right)
//	{
//		char t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//��������
#include<stdio.h>
#include<string.h>
void change(char * left,char *right)
{
	while (left < right)
	{
		char t = *left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}
//�������
void w_change(char *arr)
{
	int sz = strlen(arr);
	char *left = arr;
	char *right = arr + sz - 1;
	change(left,right);
	while (*arr)
	{
		left = arr;
		while ((*arr) != ' ' && (*arr) != '\0')
		{
			arr++;
		}
		right = arr - 1;
		change(left, right);
		if ((*arr) == ' ')
		{
			arr++;
		}
	}
}
int main()
{
	char arr[256] = { 0 };
	gets(arr);
	w_change(arr);
	printf("%s\n", arr);
	return 0;
}