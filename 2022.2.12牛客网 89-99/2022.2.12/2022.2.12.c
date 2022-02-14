#define  _CRT_SECURE_NO_WARNINGS 1
//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
//输入描述：
//每行有两个用空格分开的字符串，第一个为密码，第二个为重复密码。
//输出描述：
//每组输出一个字符串（“same”或“different”）。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char mima[10] = { 0 };
//	char mima2[10] = { 0 };
//	scanf("%s %s", &mima, &mima2);
//	if (strcmp(mima, mima2) == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//	return 0;
//}
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//输入描述：
//第一行为N M(N: 矩阵行数；M : 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
//输出描述：
//一行，其中大于零的元素之和。
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	int sum = 0;
//	char arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>0)
//			{
//				sum = sum + arr[i][j];
//			}
//		}	
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//输入10科成绩，换行显示输入的10科成绩。
//输入描述：
//一行，输入10科成绩（整数表示，范围0~100），用空格分隔。
//输出描述：
//一行，输出输入的10科成绩，用空格分隔。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//输入描述：
//一行，输入10个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述：
//一行，逆序输出输入的10个整数，用空格分隔。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//输入10个整数，分别统计输出正数、负数的个数。
//输入描述：
//输入10个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述：
//两行，第一行正数个数，第二行负数个数，具体格式见样例
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>0)
//		{
//			sum1 = sum1 + 1;
//		}
//		else if (arr[i] < 0)
//		{
//			sum2 = sum2 + 1;
//		}
//	}
//	printf("positive:%d\n", sum1);
//	printf("negative:%d\n", sum2);
//	return 0;
//}
//输入数字N，然后输入N个数，计算这N个数的和。
//输入描述：
//第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数。
//输出描述：
//输出为一行，为第二行输入的“N个整数之和”的计算结果。
//#include<stdio.h>
//int main()
//{
//	int n; 
//	int sum = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	printf("%d", sum);
//	return 0;
//}
//两行，第一行为n，表示n个成绩，不会大于10000。
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出描述：
//一行，输出n个成绩中最高分数和最低分数的差。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			int t = max;
//			max = arr[i];
//			arr[i] = t;
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		if (min > arr[i])
//		{
//			int t = min;
//			min = arr[i];
//			arr[i] = t;
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//数据范围： 3 \le n \le 50 \3≤n≤50  序列中的值都满足 1 \le val \le 100 \1≤val≤100
//输入描述：
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述：
//输出为一行，如果序列有序输出sorted，否则输出unsorted
#include <stdio.h>
int main()
{
	int n, i;
	int arr[50] = { 0 };
	int x = 0, y = 0;  
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i<(n - 1); i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			x = x + 1;
		}
		else if (arr[i] >= arr[i + 1])
		{
			y = y + 1;    
		}
	}
	if (x == n - 1 || y== n - 1)
		printf("sorted\n");
	else
		printf("unsorted\n");
	return 0;
}
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//输入描述：
//第一行输入一个整数N(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x;
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < x)
//		{
//			printf("%d ",arr[i]);
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d ", x);
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足 1 \le n \le 501≤n≤50
//输入描述：
//第一行入一个整数(0≤N≤50)。
//第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x;
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != x)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//输入
//输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。
//输出描述：
//输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔。
//#include<stdio.h>
//int main()
//{
//	int n, i, arr[5000];
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//			arr[j] = 0;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}