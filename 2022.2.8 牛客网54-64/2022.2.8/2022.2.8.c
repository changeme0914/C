#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//#include<stdio.h>
//int main()
//{
//	int year, month;
//	while ((scanf("%d %d", &year, &month)) != EOF)
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("31\n");
//		}
//		else if (month == 2)
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("28\n");
//			}
//		}
//		else
//		{
//			printf("30\n");
//		}
//	}
//	return 0;
//}
//KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，
//计算并输出表达式的值，如果输入的运算符号不包括在（ + 、 - 、*、 / ）范围内，输出“”
//。当运算符为除法运算，即“ / ”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”
//数据范围：字符串长度满足 3 \le n \le 50 \3≤n≤50  ，保证运算符是一个char类型字符。
//输入描述：
//输入一行字符串，操作数1 + 运算符 + 操作数2 （其中合法的运算符包括： + 、 - 、*、 / ）。
//输出描述：
//#include <stdio.h>
//int main()
//{
//	char n;
//	double a, b;
//	scanf("%lf%c%lf", &a, &n, &b);
//	if (n == '+')
//		printf("%.4lf%c%.4lf=%.4lf", a, b, n, a + b);
//	else if (n == '-')
//		printf("%.4lf%c%.4lf=%.4lf", a, b, n, a - b);
//	else if (n == '*')
//		printf("%.4lf%c%.4lf=%.4lf", a, b, n, a*b);
//	else if (n == '/')
//	{
//		if (b == 0.0)
//			printf("Wrong!Division by zero!");
//		else
//			printf("%.4lf%c%.4lf=%.4lf", a, b, n, a / b);
//	}
//	else
//		printf("Invalid operation!");
//
//}
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。
//
//输入描述：
//多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
//输出描述：
////针对每行输入，输出占一行，用“*”组成的对应长度的线段。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d",&n)) != EOF)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。
//输入描述：
//多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数。
//输出描述：
//针对每行输入，输出用“*”组成的对应边长的正方形，每个“*”后面有一个空格。
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
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的直角三角形图案。
//输入描述：
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格。
//示例1
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
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转直角三角形图案。
//输入描述：
//多组输入，一个整数（2~20），表示翻转直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“*”组成的对应长度的翻转直角三角形，每个“*”后面有一个空格。
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
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
//
//输入描述：
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//
//输出描述：
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格。
//
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//
//		int i,j;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n  -1- i; j++)
//			{
//				printf("  ");
//
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的金字塔图案。
//输入描述：
//多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数。
//输出描述：
//针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。
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
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案。
//输入描述：
//多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。
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
//			for (j = 0; j <i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。
//输入描述：
//多组输入，一个整数（2~20）。
//输出描述：
//针对每行输入，输出用“*”组成的菱形，每个“*”后面有一个空格。
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 0; i < n+1; i++)
//		{
//			int j;
//			for (j = 0; j < n  - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j <i+1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n;
	while ((scanf("%d", &n)) != EOF)
	{
		int i;
		for (i = 0; i <= n; i++)
		{
			int j;
			for (j = 0; j < n + 1-i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j <= i +1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}


		
