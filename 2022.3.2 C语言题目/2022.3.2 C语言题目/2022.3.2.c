#define _CRT_SECURE_NO_WARNINGS 1
//取近似值
//#include<stdio.h>
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	int x = n;
//	if ((n - x) >= 0.5)
//	{
//		printf("%d", x + 1);
//	}
//	else
//	{
//		printf("%d", x);
//	}
//	return 0;
//}
//截取字符串
//#include<stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	while (scanf("%s", &arr) != EOF)
//	{
//		int k;
//		scanf("%d", &k);
//		int i;
//		for (i = 0; i < k; i++)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;	
//}
//输入n个整数，输出其中最小的k个
//#include<stdio.h>
//int main()
//{
//	int n, k;
//	int arr[1000] = { 0 };
//	while (scanf("%d%d", &n, &k) != EOF)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n - 1; i++)//比较几趟
//		{
//			int j;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				if (arr[j]>arr[j + 1])
//				{
//					int t = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = t;
//				}
//			}
//		}
//		for (i = 0; i < k; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//输入整型数组和排序标识，对其元素按照升序或降序进行排序
#include<stdio.h>
int main()
{
	int n;
	int arr[100] = { 0 };
	while (scanf("%d", &n) != EOF)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int x;
		scanf("%d", &x);
		if (x == 0)//升序
		{
			for (i = 0; i < n - 1; i++)
			{
				int j;
				for (j = 0; j < n - 1 - i; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						int t = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = t;
					}
				}
			}
			for (i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
		else//降序
		{
			for (i = 0; i < n - 1; i++)
			{
				int j;
				for (j = 0; j < n - 1 - i; j++)
				{
					if (arr[j] < arr[j + 1])
					{
						int t = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = t;
					}
				}
			}
			for (i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}
	return 0;
}