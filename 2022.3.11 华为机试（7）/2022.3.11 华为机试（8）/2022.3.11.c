#define _CRT_SECURE_NO_WARNINGS 1
// 统计每个月兔子的总数
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		int old = 1; int num = 1;
//		if (n <= 2)
//		{
//			printf("1");
//			break;
//		}
//		while (n>2)
//		{
//			sum = old + num;
//			num = old;
//			old = sum;
//			n--;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}
//整型数组合并
//#include<stdio.h>
//int main()
//{
//	int x;
//	int y;
//	int arr[1000];
//	int i;
//	int j;
//	scanf("%d", &x);
//	for (i = 0; i<x; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &y);
//	for (i = 0; i<y; i++)
//	{
//		scanf("%d", &arr[x + i]);
//	}
//	//冒泡排序
//	for (i = 0; i<x + y; i++)
//	{
//		for (j = 0; j<x + y - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i<x + y; i++)
//	{
//		if (arr[i] != arr[i - 1])
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}
//查找输入整数二进制中1的个数
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0; 
//		while (n)
//		{
//			if (n % 2 == 1)
//			{
//				sum++;
//			}
//			n /= 2;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//图片整理
#include<string.h>
#include<stdio.h>

int main(){
	char input[2000];
	char m;
	int len;
	while (gets(input) != NULL)
	{
		len = strlen(input);
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (input[i] < input[j])
				{
					m = input[i];
					input[i] = input[j];
					input[j] = m;
				}
			}
		}
		printf("%s\n", input);
	}
	return 0;
}