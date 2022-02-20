#define  _CRT_SECURE_NO_WARNINGS 1
//牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。请你判断 x 是否在 l 和 r 之间 （即是否存在 l \le x \le r \l≤x≤r ）
//输入描述：
//依次输入 x ，l ，r 三个整数。用空格隔开。
//输出描述：
//如果存在 l \le x \le r \l≤x≤r  则输出 true ，否则输出 false
//示例1
//#include<stdio.h>
//int main()
//{
//	int x, l, r;
//	scanf("%d %d %d", &x, &l, &r);
//	if (x >= l&&x <= r)
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}
//判断一个整数n是否是闰年
//输入描述：
//输入一个整数n （1 \le n \le 20181≤n≤2018）
//输出描述：
//是闰年输出"yes" 否则输出"no"
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
//气象意义上，通常以3～5月为春季(spring)，6～8月为夏季(summer)，
//9～11月为秋季(autumn)，12月～来年2月为冬季(winter)。
//请根据输入的年份以及月份，输出对应的季节。
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	n = n % 100;
//	if (n >= 3 && n <= 5)
//	{
//		printf("spring");
//	}
//	else if (n >= 6 && n <= 8)
//	{
//		printf("summer");
//	}
//	else if (n >= 9 && n <= 11)
//	{
//		printf("autumn");
//	}
//	else
//	{
//		printf("winter");
//	}
//	return 0;
//}
/*牛牛从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。如果不能被 2 3 7 任意一个数整除则输出 n。
输入描述：
输出一个整数
输出描述：
//输出能被 2 3 7 哪几个数整除，并按升序输出*/
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("2 ");
//	}
//	if (n % 3 == 0)
//	{
//		printf("3 ");
//	}
//	if (n % 7 == 0)
//	{
//		printf("7 ");
//	}
//	if (n % 2 != 0 && n % 3 != 0 && n % 7 != 0)
//	{
//		printf("n\n");
//	}
//	return 0;
//}
//牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，
//不足 1kg 部分按 1kg计算。如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
//输入描述：
//第一行输入一个单精度浮点数 a 和一个字符 b ，a 表示牛牛要寄的快递的重量，b表示牛牛是否选择加急，'y' 表示加急 ，'n' 表示不加急。
//输出描述：
//输出牛牛总共要支付的快递费用
//#include<stdio.h>
//int main()
//{
//	float a;
//	char b; int n;
//	int sum = 20;
//	scanf("%f %c", &a, &b);
//	if (a > 1.0)
//	{
//		n = a-1;
//		if (a - 1 - n > 0)
//		{
//			n = n + 1;
//		}
//	}
//	sum += n;
//	if (b == 'y')
//	{
//		sum += 5;
//	}
//	else
//	{
//		sum += 0;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//牛牛商场促销活动：
//满100打9折；
//满500打8折；
//满2000打7折；
//满5000打6折
//牛阿姨算不清楚自己应该付多少钱，请你帮忙算一下
//输入描述：
//牛阿姨购买商品打折前的总金额
//输出描述：
//参加活动后，牛阿姨购买商品应付金额。（保留小数点后1位）
//#include<stdio.h>
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	if (n >= 100 && n < 500)
//	{
//		printf("%.1f", n*0.9);
//	}
//	else if (n >= 500 && n < 2000)
//	{
//		printf("%.1f", n*0.8);
//	}
//	else if (n >= 2000 && n < 5000)
//	{
//		printf("%.1f", n*0.7);
//	}
//	else if (n >= 5000)
//	{
//		printf("%.1f", n*0.6);
//	}
//	else
//	{
//		printf("%.1f", n);
//	}
//	return 0;
//}
//牛牛的通勤路上有两种选择，要么走路，要么打车，牛牛走路的速度是 1m / s 。打车的速度的 10m / s ，
//但是打车需要等出租车 10 s，请你计算牛牛想尽快到公司应该选择打车还是走路。
//输入描述：
//输入一个正整数，表示牛牛到公司的距离。
//输出描述：
//输出牛牛想尽可能快到公司应该选择打车还是走路，走路的话输出 w ， 打车的输出 v。保证答案一定不会出现两个方案时间一样的情况。
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int foot;
//	int car;
//	foot = x / 1;
//	car = 10 + x / 10;
//	if (foot < car)
//	{
//		printf("w");
//	}
//	else
//	{
//		printf("v");
//	}
//	return 0;
//}
//牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是(x, y) ，金币的坐标是(x1, y1) ，金币一定在牛牛在周围，
//即 | x1 - x | +| y1 - y | = 1 
//请你判断牛牛应该往哪个方向伸手。
//输入描述：
//第一行输入 x, y 表示牛牛的坐标。
//第二行输入 x1, y1 表示金币的坐标。保证 
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
//	int x, y, z;
//	int x1, y1, z1;
//	scanf("%d %d %d", &x, &y, &z);
//	scanf("%d %d %d", &x1, &y1, &z1);
//	if (x1 > x)
//	{
//		printf("yes");
//	}
//	else if (x1 < x)
//	{
//		printf("no");
//	}
//	else
//	{
//		if (y1>y)
//		{
//			printf("yes");
//		}
//		else if (y1 < y)
//		{
//			printf("no");
//		}
//		else if (y1 == y&&z1>=z)
//		{
//			printf("yes");
//		}
//		else if (y1 == y&&z1 < z)
//		{
//			printf("no");
//		}
//	}
//	return 0;
//}
//2020年来到了，KiKi要对他的n位好朋友说n遍”Happy new year!Good luck!”的祝福语。
//输入描述：
//输入只有一行，其中含有一个正整数 n(1≤n≤20)，代表KiKi说祝福话的遍数。
//输出描述：
//输出 n行"Happy new year!Good luck!"
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
////}
//KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
//输入描述：
//无
//输出描述：
//一行，一个整数，表示所有三位整数中，有多少个质数。
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	for(i = 100; i < 1000; i++)
	{
		int j;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			sum++;
		}
	}
	printf("%d", sum);
}