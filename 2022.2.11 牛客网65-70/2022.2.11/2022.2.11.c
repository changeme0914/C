#define  _CRT_SECURE_NO_WARNINGS 1
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
//输入描述：
//本题多组输入，每行一个整数（2~20）。
//输出描述：
//针对每行输入，输出用“*”组成的箭形。
//示例1入：
//输出：
//    *
//  **
//***
//  **
//    *
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 0; i <= n; i++)
//		{
//			int j;
//			for (j = 0; j < n * 2 - 2 * i; j++)
//			{
//				printf(" ");
//			}
//			int x;
//			for (x = 0; x <= i; x++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 1; i <=n; i++)
//		{
//			int j;
//			for (j = 0; j < 2 * i; j++)
//			{
//				printf(" ");
//			}
//			int x = 0;
//			for (x = 0; x <= n - i; x++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成反斜线的“*”的数量。
//输出描述：
//针对每行输入，输出用“*”组成的反斜线。
//*
// *
//  *
//   *
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}
//   *
//  *
// *
//*
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j < n-1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“*”组成的X形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	//多组输入
//	while ((scanf("%d", &n))!=EOF)
//	{
//		//控制行数
//		for (int i = 0; i < n; i++)
//		{
//			//控制列
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的f行数，也表示组成正方形边的“*”的数量。
//输出描述：
//针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		//hang
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= n; j++)
//			{
//				if (i > 1 && i < n)
//				{
//					if (j>1 && j < n)
//					{
//						printf("  ");
//					}
//					else
//					{
//						printf("* ");
//					}
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”三角形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“*”的数量。
//输出描述：
//针对每行输入，输出用“*”组成的“空心”三角形，每个“*”后面有一个空格。
//示例1
//*
//* *
//*   *
//* * * *
#include<stdio.h>
int main()
{
	int n;
	while ((scanf("%d", &n)) != EOF)
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			int j;
			for (j = 1; j <= n; j++)
			{
				if (i==j||j==1||i==n)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}