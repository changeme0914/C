#define  _CRT_SECURE_NO_WARNINGS 1
//牛牛学数列4帮助牛牛计算 1+（1+2）+（1+2+3）+...+(1+2+3+...+n)
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0; int num = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		num += i;
//		sum = sum + num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//数位之和
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n = n / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//魔法数字变换
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		else
//		{
//			n = n * 3 + 1;
//		}
//		sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//[NOIP2015]金币
//试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？//记数问题

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d %d", &n,&x);
	int i; int sum = 0;
	for (i = 1; i <= n; i++)
	{
		int t = i;
		while (t!=0)
		{
			if (t % 10 == x)
			{
				sum++;
				t = t/10;
			}
			else
			{
				t = t / 10;
			}
			
		}
	}
	printf("%d", sum);
	return 0;
}