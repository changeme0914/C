#define  _CRT_SECURE_NO_WARNINGS 1
//qsort
#include<stdio.h>
//int paixu(const void *p1, const void *p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int i;
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),paixu);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//输入描述：
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//输出描述：
//#include<stdio.h>
//int main()
//{
//	int n,x;
//	scanf("%d", &n);
//	char arr[10000] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>x)
//		{
//			break;
//		}
//		if (arr[i] < x)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("%d ", x);
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，
//将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，
//以此类推，直到n为止。数组中不为0 的数即为素数。
//输入描述：
//多组输入，每行输入一个正整数（不大于100）。
//输出描述：
//针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
//
//第二行，输出数组中2之后被清0 的个数。每行输出后换行。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[101] = { 0 };
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//		int sum = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//			{
//				sum = sum + 1;
//			}
//		}
//		printf("\n");
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
//输入描述：
//多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个位密码。
//输出描述：
//针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10];
//	char brr[10];
//	char mima[10] = "admin";
//	while ((scanf("%s %s", &arr, &brr)) != EOF)
//	{
//		if (strcmp(arr, mima) == 0 && strcmp(brr, mima) == 0)
//		{
//			printf("Login Success!");
//		}
//		else
//		{
//			printf("Login Fail!");
//		}
//	}
//	
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	printf("I will learn C++ well!\n");
//	return 0;
//}
//这是一个非常简单的题目，意在考察你编程的基础能力。千万别想难了哦。输入为一行，
//包括了用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100, 000）。输出为一行，为“(a + b - c)*d”的计算结果。
//
//	输入描述：
//	输入为一行，用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100, 000）。
//	输出描述：
//	输出为一行，为“(a + b - c)*d”的计算结果。
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int sum = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	sum = (a + b - c)*d;
//	printf("%d\n", sum);
//	return 0;
//}
//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
//输入描述：
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
////}
//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//输入描述：
//一行，输入一个整数x。（ - 10000<x<10000）
//输出描述：
//一行，输出y的值。
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0");
//	}
//	else if (n > 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("1");
//	}
//	return 0;
////}
//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//输入描述：
//无
//输出描述：
//一行，一个整数，表示1~2019中共有多少个数包含数字9。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		if (i % 10 == 9 || i / 1000 == 9||(i/10)%10==9||(i/100)%10==9)
//		{
//			sum=sum+1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//
//输入描述：
//一行，一个正整数N。（1≤N≤100, 000）
//输出描述：
//一行，1~N之间奇数的个数和偶数的个数，用空格分开。
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum1 = sum1 + 1;
//		}
//		else
//		{
//			sum2 = sum2 + 1;
//		}
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	float arr[1000] = { 0 };
//	int i;
//	float sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum = sum + arr[i];
//	}
//	float max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			float t = max;
//			max = arr[i];
//			arr[i] = t;		
//		}
//	}
//	float min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (min > arr[i])
//		{
//			float t = min;
//			min = arr[i];
//			arr[i] = t;
//		}
//	}
//	printf("%.2f %.2f %.2f", max, min, sum / n);
//	
//	return 0;
//}
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//输入描述：
//共三行，
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//输出描述：
//输出为一行，N + 1个有序排列的整数。
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x;
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (x < arr[i])
		{
			break;
		}
		else
		{
			printf("%d ", arr[i]);
		}
	}
	printf("%d ", x);
	for (i; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}