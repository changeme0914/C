#define  _CRT_SECURE_NO_WARNINGS 1
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000  ， 序列中的值满足 0 \le val \le 30000 \0≤val≤30000
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int m;
//	scanf("%d %d", &n, &m);
//	int arr1[3000] = { 0 };
//	int arr2[3000] = {0};
//	int sum[6000] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int x = 0;
//	for (i = 0; i < n+m; i++)
//	{
//		if (i < n)
//		{
//			sum[i] = arr1[i];
//			x = i + 1;
//		}
//		else
//		{
//			sum[i] = arr2[i - x];
//		}
//	}
//	for (int i = 0; i < n + m - 1; i++)
//	{
//		int j;
//		for (j = 0; j < n + m - 1 - i; j++)
//		{
//			if (sum[j] > sum[j + 1])
//			{
//				int t = 0;
//				t = sum[j + 1];
//				sum[j + 1] =sum[j];
//				sum[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ",sum[i]);
//	}
//
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float arr[5][5] = { 0 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		int j;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int j;
//		float sum = 0.0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.1f ", arr[i][j]);
//			sum = sum + arr[i][j];
//		}
//		printf("%.1f ", sum);
//		printf("\n");
//	}
//	return 0;
//}
//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
//数据范围：1 \le n, m \le 5 \1≤n, m≤5  ，矩阵中的值满足 1 \le val \le 25 \1≤val≤25
//输入描述：
//第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），
//用空格分隔，共输入n*m个数，表示矩阵中的元素。接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
//输出描述：
//一行，输出一个整数值，为KiKi想知道的值。
////示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int m;
//	scanf("%d %d", &n, &m);
//	int arr[20][20] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x;
//	int y;
//	scanf("%d %d", &x, &y);
//	printf("%d", arr[x - 1][y - 1]);
//}
//KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。
//输入描述：
//一行，输入两个整数n和m，用空格分隔，第二行包含n*m个整数（范围 - 231~231 - 1）。(1≤n≤10, 1≤m≤10)
//输出描述：
////输出规划后n行m列的矩阵，每个数的后面有一个空格。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int m;
//	scanf("%d %d", &n, &m);
//	int arr[20][20] = {0};
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
//输入描述：
//第一行包含两个整数n和m，表示这个方阵队列包含n行m列。从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），
//用空格分隔，共输入n*m个数，表示方阵中的所有人的身高（保证输入身高都不相同）。(1≤x≤n≤10，1≤y≤m≤10)
//输出描述：
//一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号。
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	int x, y;
//	scanf("%d %d", &n, &m);
//	int arr[20][20] = { 0 };
//	int max = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>max)
//			{
//				x = i + 1;
//				y = j + 1;
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("%d %d", x, y);
//	return 0;
//}
//第一行包含两个整数n和m，表示两个矩阵包含n行m列，用空格分隔。
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
//从n + 2行到2n + 1，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n*m个数，表示第二个矩阵中的元素。
//1 < n, m < 10
//输出描述：
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[20][20] = { 0 };
//	int arr2[20][20] = { 0 };
//	int max = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i<n; i++)
//	{
//		int j;
//		for (j = 0; j<m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				sum++;
//			}
//		}
//	}
//	if (sum == m*n)
//	{
//
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i, j;
	int arr[10][10] = { 0 };
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<i; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}