#define  _CRT_SECURE_NO_WARNINGS 1
//牛牛很喜欢发短信，他所用的通讯公司的收费方法如下：
//1.每条短信收费0.1元
//2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费。
//牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
//输入描述：
//第一行输入一个正整数 n ，表示发送短信的条数，
//第二行输入 n 个正整数，表示牛牛发送的 n 条短信中每条短信的字数
//输出描述：
//输出牛牛这个月要缴的短信费
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int d; float sum = 0.0;
//	while (n)
//	{
//		scanf("%d", &d);
//		if (d <= 60)
//		{
//			sum =sum+ 0.1;
//		}
//		else
//		{
//			sum =sum+ 0.2;
//		}
//		n--;
//	}
//	printf("%.1f", sum);
//}
//牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
//牛牛想知道在[l, r] 范围内全部素数的和
//输入描述：
//输入两个正整数 l，r 表示闭区间范围
//输出描述：
//输出[l, r] 范围内的素数的和
//#include<stdio.h>
//int main()
//{
//	int l, r;
//	scanf("%d %d", &l, &r);
//	int i;
//	int sum = 0;
//	for (i = l; i <= r; i++)
//	{
//		int j;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述：
//一行，4个整数，用空格分开。
//输出描述：
//一行，一个整数，为输入的4个整数中最大的整数。1
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a,&b,&c,&d);
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	if (max < d)
//	{
//		max = d;
//	}
//	printf("%d", max);
//	return 0;
//}
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，
//就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//输出描述：
//输出一个整数，即小乐乐修改后得到的数字。
//#include<stdio.h>//错误代码  一直想不出怎么解决！
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		int x = n % 10;
//		if (x % 2 == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("1");
//		}
//		n = n / 10;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		int t = n % 10;
//		if (t % 2 == 0)
//		{
//			t = 0;
//		}
//		else
//		{
//			t = 1;
//		}
//		sum += t * pow(10, i);
//		i++;
//		n=n / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
//总成绩 = 实验成绩 * 20 % +课堂表现成绩 * 10 % +过程考核成绩 * 20 % +期末上机考试成绩 * 50 % ，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
//输入描述：
//一行，包括四个整数（百分制），用空格分隔，分别表示实验成绩，课堂表现成绩，过程考核成绩，期末上机考试成绩。
//输出描述：
//一行，总成绩，保留小数点一位。
//#include<stdio.h>
//int main()
//{
//	float s, c, g, q;
//	scanf("%f %f %f %f", &s, &c, &g, &q);
//	float sum = 0;
//	sum = s*0.2 + c*0.1 + g*0.2 + q*0.5;
//	printf("%.1f", sum);
//	return 0;
//}
//牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是(x, y) ，金币的坐标是(x1, y1) ，金币一定在牛牛在周围，即 | x_1 - x | +| y_1 - y | = 1 \∣x​
//−y∣ = 1  请你判断牛牛应该往哪个方向伸手。
//输入描述：
//第一行输入 x, y 表示牛牛的坐标。
//第二行输入 x1, y1 表示金币的坐标。保证 | x_1 - x | +| y_1 - y | = 1 \∣x
//坐标是整数。
//输出描述：
//输出牛牛应该往哪个方向伸手。
//例
//(x, y) = (0, 0) (x1, y1) = (0, 1) ，则牛牛向上伸手，输出 'u' 。
//(x, y) = (0, 0) (x1, y1) = (0, -1) ，则牛牛向下伸手，输出 'd'。
//(x, y) = (0, 0) (x1, y1) = (1, 0) ，则牛牛向右伸手，输出 'r'。
//(x, y) = (0, 0) (x1, y1) = (-1, 0) ，则牛牛向左伸手，输出 'l'。
//#include<stdio.h>
//int main()
//{
//	int x, x1, y, y1;
//	scanf("%d %d", &x, &y);
//	scanf("%d %d", &x1, &y1);
//	if (x1 - x == 0)
//	{
//		if (y-y1==-1)
//			printf("u");
//		if (y-y1==1)
//			printf("d");
//	}
//	if (y1 - y == 0)
//	{
//		if (x-x1==-1)
//			printf("r");
//		if (x-x1==1)
//			printf("l");
//	}
//	return 0;
//}
//牛牛的一周有七天，从周一到周日对应的英文是
//1、星期一：Monday
//2、星期二：Tuesday
//3、星期三：Wednesday
//4、星期四：Thursday
//5、星期五：Friday
//6、星期六：Saturday
//7、星期日：Sunday
//牛牛知道今天是星期几，请输出这天的英文
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	}
	return 0;
}