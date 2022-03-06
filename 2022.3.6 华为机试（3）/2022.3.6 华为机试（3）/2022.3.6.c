#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	int sum = a*b;
//	while (a%b!=0)
//	{
//		int t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("%d", sum / b);
//	return 0;
//}
//字符逆序
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//等差数列
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		int sum = 0;
//		int num = 2;
//		for (i = 0; i < n; i++)
//		{
//			num = 2 + 3 * i;
//			sum += num;
//		}
//		printf("%d\n", sum);
//	}
//	
//	return 0;
//}
//自守数
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		int i;
//		for (i = 0; i <= n; i++)
//		{
//			int x = i*i;
//			if (x % 10000 == i || x % 1000 == i || x % 100 == i || x % 10 == i)
//			{
//				sum++;
//			}
//		}
//		printf("%d\n", sum);
//	}
//}
//记负均正
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int num;
//		int sum1 = 0;
//		int sum2 = 0;
//		int i;
//		double x = 0.0;
//		int y = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &num);
//			if (num < 0)
//			{
//				sum1++;
//			}
//			else if (num>0)
//			{
//				sum2 += num;
//				y++;
//			}
//		}
//		x = (float)sum2 / y;
//		printf("%d %.1lf\n", sum1,x);
//	}
//}
//统计字符
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1000] = { 0 };
	while (gets(arr) != NULL)
	{
		int len = strlen(arr);
		int a = 0;//字符
		int b = 0;//空格
		int c = 0;//数字
		int d = 0;//其他
		int i;
		for (i = 0; i < len; i++)
		{
			if (arr[i] >= 'a'&&arr[i] <= 'z' || arr[i] >= 'A'&&arr[i] <= 'Z')
			{
				a++;
			}
			else if (arr[i] == ' ')
			{
				b++;
			}
			else if (arr[i] >= '0'&&arr[i] <= '9')
			{
				c++;
			}
			else
			{
				d++;
			}
		}
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
		printf("%d\n", d);
	}

	return 0;
}