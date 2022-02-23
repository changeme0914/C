#define  _CRT_SECURE_NO_WARNINGS 1
//牛牛尝试用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
//输入描述：
//输入一个char类型字符
//输出描述：
//输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形
//#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c", &n);
//	printf("  %c\n", n);
//	printf(" %c%c%c\n", n,n,n);
//	printf("%c%c%c%c%c\n", n, n, n,n,n);
//	printf(" %c%c%c\n", n, n, n);
//	printf("  %c\n", n);
//	return 0;
//}
//牛牛的空格分隔
//#include<stdio.h>
//int main()
//{
//	char a;
//	int b;
//	float c;
//	scanf("%c", &a);
//	scanf("%d", &b);
//	scanf("%f", &c);
//	printf("%c %d %.6f", a, b, c);
//	return 0;
//}
//牛牛的对齐
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}
//牛牛学加法 除法 取余
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a / b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a%b);
//	return 0;
//}
//牛牛买电影票
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n * 100);
//	return 0;
//}
//整数的个位 十位
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n % 10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", (n/10) % 10);
//	return 0;
//}
//开学？
//#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf("%d%d", &x, &n);
//	int sum = x + n;
//	while (sum>7)
//	{
//		sum -= 7;
//	}
//	printf("%d", sum);
//	return 0;
//}
//温度转换
//#include<stdio.h>
//int main()
//{
//	double n;
//	scanf("%lf", &n);
//	double c = (5 * (n - 32)) / 9;
//	printf("%.3lf", c);
//	return 0;
//}
//牛牛的圆
//#include<stdio.h>
//int main()
//{
//	int r;
//	scanf("%d", &r);
//	float sum = 3.14*r*r*1.0;
//	printf("%.2f", sum);
//}
//牛牛的并联电路
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	scanf("%f %f", &a, &b);
//	float a1 = 1 / a;
//	float b1 = 1 / b;
//	float sum = 1 / (a1 + b1);
//	printf("%.1f", sum);
//}
//牛牛的线段
//#include<stdio.h>
//int main()
//{
//	int x1, y1;
//	int x2, y2;
//	scanf("%d %d", &x1, &y1);
//	scanf("%d %d", &x2, &y2);
//	int sum = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
//	printf("%d", sum);
//	return 0;
//}
//乘法表
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//牛牛的数列1 2 3 4
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0; int x = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i*x;
//		x = x*(-1);
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%.6lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i; double x = 1.0; 
//	double sum = 0.0; 
//	for (i = 0; i <n; i++)
//	{
//		sum += x*(1.0 / (i + 1));
//		x = x*(-1.0);
//	}
//	printf("%.3f", sum);
//	return 0;
//}