#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////4.
////创建一个数组，
////实现函数init（）初始化数组、
////实现empty（）清空数组、
////实现reverse（）函数完成数组元素的逆置。
////要求：自己设计函数的参数，返回值。
//
//
////初始化
//void init(int arr[],int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
////打印
//void dy(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////逆置
//void reverse(int arr[], int n)
//{
//	int x = 0;
//	int y = n - 1;
//	int i;
//	for (i = 0; i < n / 2;i++)
//	{
//		if (x < y)
//		{
//			int t = 0;
//			t = arr[x];
//			arr[x] = arr[y];
//			arr[y] = t;
//			x++;
//			y--;
//		}
//		if (x >= y)
//		{
//			break;
//		}
//	}
//}
////清空数据
//void empty(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[9] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//初始化
//	init(arr,sz);
//	//打印
//	dy(arr, sz);
//	/*printf("%d\n", sz);*/
//	//数组逆置;
//	reverse(arr, sz);
//	dy(arr, sz);
//	//清空数据
//	empty(arr, sz);
//	dy(arr, sz);
//
//	return 0;
//
//}
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	printf("请输入：>\n");
//	scanf("%d",&n);
//	printf("奇数位：");
//	for (i = 31; i >= 0; i=i - 2)
//	{
//		int t = (n >> i) & 1;
//		printf("%d", t);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		int t = (n >> i) & 1;
//		printf("%d", t);
//	}
//	printf("\n");
//	return 0;
//}



//1. 打印100~200之间的素数
//2. 输出乘法口诀表
//3. 判断1000年-- - 2000年之间的闰年
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>=sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	printf("\n");
//	return 0;
//
//}
//给定两个整形变量的值，将两个值的内容进行交换。
#include<stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	printf("交换前：%d %d\n", i, j);
	int t = 0;
	t = i;
	i = j;
	j = t;
	printf("交换后：%d %d \n", i, j);
	return 0;
}