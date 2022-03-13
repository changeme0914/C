#define _CRT_SECURE_NO_WARNINGS 1
//走方格的方案数
//#include<stdio.h>
//int set(int x, int y)
//{
//	if (x == 0 || y == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return set(x, y - 1) + set(x - 1, y);
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	printf("%d",set(n, m));
//}
//记票统计
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i; int j;
//	int n;
//	char name[100][100];
//	char sele[100][100];
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum[100] = {0};
//		int In = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%s", name[i]);
//		}
//		int m;
//		scanf("%d", &m);
//		for (i = 0; i < m; i++)
//		{
//			scanf("%s", sele[i]);
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (0 == strcmp(sele[i], name[j]))
//				{
//					sum[j]++;
//					break;
//				}
//
//			}				
//			if (j==n)
//				In++;
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%s : %d\n", name[i], sum[i]);
//		}
//		printf("Invalid : %d\n", In);
//	}
//	return 0;
//}
//求最大连续bit数
//#include<stdio.h>
//int main()
//{
//	int n; int arr[100] = {0}; int m = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			arr[m]++;
//		}
//		else
//		{
//			m++;
//		}
//		n /= 2;
//	}
//	int i;
//	int max = arr[0];
//	for (i = 0; i <= m; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
// 尼科彻斯定理
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n); int i;int m = n*n - (n - 1);
	for (i = 0; i < n-1; i++)
	{
		printf("%d+", m);
		m += 2;
	}
	printf("%d", m);
	return 0;
}