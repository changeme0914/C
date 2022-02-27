#define  _CRT_SECURE_NO_WARNINGS 1
//牛牛的10类人
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = 0;
//	int i;
//	
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		int sum1 = 0;//1的数量
//		int sum2 = 0;//0的数量
//		while (num)
//		{
//			if (num % 2 == 1)
//			{
//				sum1++;
//			}
//			else
//			{
//				sum2++;
//			}
//			num /= 2;
//		}
//		if (sum1 % 2 == 0 && sum2 % 2 == 0)
//		{
//			printf("10");
//		}
//		else if (sum1 % 2 == 0)
//		{
//			printf("1");
//		}
//		else if (sum2 % 2 == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("100");
//		}
//
//	}
//	return 0;
//}
//小乐乐走台阶
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);//走一步或者两步
//	int arr[100] = { 0 };
//	arr[0] = 1;
//	arr[1] = 2;
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];//典型斐波那契
//	}
//	printf("%d", arr[n - 1]);
//}
//函数计算实现一个数的阶乘
//#include<stdio.h>
//
//int jiecheng(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * jiecheng(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = jiecheng(n);
//	printf("%d", ret);
//	return 0;
//}
//牛牛的西格玛
//#include<stdio.h>
//int Xga(int n)
//{
//	if (n==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n + Xga(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Xga(n);
//	printf("%d", ret);
//	return 0;
//}
//牛牛的Ackmann
//#include<stdio.h>
//int Ackmann(int n, int m)
//{
//	if (m == 0)
//		return n + 1;
//	if (m > 0 && n == 0)
//		return Ackmann(m - 1, 1);
//	if (m > 0 && n > 0)
//		return Ackmann(m - 1, Ackmann(m, n - 1));
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int ret = Ackmann(n, m);
//	printf("%d", ret);
//	return 0;
//}
//牛牛的digit
//#include<stdio.h>
//void digit(int x, int i)
//{
//	int arr[100], j = 0;
//	while (i)
//	{
//		int tmp = x % 10;
//		x /= 10;
//		arr[j++] = tmp;
//		i--;
//	}
//	int k;
//	for (k = j - 1; k >= 0; k--)
//	{
//		printf("%d", arr[k]);
//	}
//}
//int main()
//{
//	int x, i;
//	scanf("%d %d", &x, &i);
//	digit(x, i);
//	return 0;
//}
//牛牛的Hermite多项式
//#include<stdio.h>
//int Hermite(int n, int x)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2 * n;
//	}
//	else
//	{
//		return 2 * x * Hermite(n - 1, x) - 2 * (n - 1)* Hermite(n - 2, x);
//	}
//}
//int main()
//{
//	int n, x;
//	scanf("%d %d", &n, &x);
//	int ret=Hermite(n, x);
//	printf("%d", ret);
//	return 0;
//}
//牛牛的排列数
#include<stdio.h>
long long Anm(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*Anm(n - 1);
	}
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n < m)
	{
		printf("0");
	}
	else
	{	
		long long ret=Anm(n);
		long long num=Anm(n - m);
		printf("%lld", ret / num);
	}
	return 0;
}