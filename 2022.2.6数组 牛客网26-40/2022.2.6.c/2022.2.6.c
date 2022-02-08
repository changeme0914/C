#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char * my_strcpy(char *dest, const char *src)
//{
//
//}
////写一个函数指针
//int mian()
//{
//	char *(*pf)(char *, const char*) = my_strcpy;
//	//写一个函数指针数组
//	char *(*pfArr[4])(char *, const char *) = my_strcpy;
//	return 0;
//}
//计算器
//void menu()
//{
//	printf("******************\n");
//	printf("**1.加法  2.减法**\n");
//	printf("**3.乘法  4.除法**\n");
//	printf("**    0.退出    **\n");
//	printf("******************\n");
//
//}
//int  jiafa(int x,int y)
//{
//	return x + y;
//}
//
//int  jianfa(int x, int y)
//{
//	return x - y;
//}
//
//int  chengfa(int x, int y)
//{
//	return x * y;
//}
//
//int  chufa(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int n;
//	int x;
//	int y;
//	do
//	{
//		menu();
//		printf("请选择>\n");
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else if (n >= 1 && n <= 4)
//		{
//			printf("请输入要结算的两个数字！例如：1 1\n");
//			scanf("%d %d", &x, &y);
//			int (*prr[])(int, int) = { 0, jiafa, jianfa, chengfa, chufa };
//			printf("%d\n", (prr[n])(x, y));
//		}
//		else
//		{
//			printf("输入错误!请重新输入>\n");
//		}
//		
//	} while (n);
//
//	return 0;
//}

//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4 / 3 * πr3，其中 π = 3.1415926。
//
//数据范围：输入一个浮点值 0≤n≤15
//输入描述：
//一行，用浮点数表示的球体的半径。
//输出描述：
//一行，球体的体积，小数点后保留3位。
//#include<stdio.h>
//int main()
//{
//	float r;
//	double π = 3.1415926;
//	scanf("%f", &r);
//	printf("%.3lf", ((4* π*r*r*r/3)));
//	return 0;
//}
//描述
//实现字母的大小写转换。多组输入输出。
//输入描述：
//多组输入，每一行输入大写字母。
//输出描述：
//针对每组输入输出对应的小写字母。
//示例1
//输入：
//A
//B
//复制
//输出：
//a
//b
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((n = getchar())!=EOF)
//	{
//		getchar();
//		printf("%c", n + 32);
//		printf("\n");
//	}
//	return 0;
//}

//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//数据范围：0≤n≤31
//输入描述：
//一行输入整数n（0 <= n < 31）。
//输出描述：
//输出对应的2的n次方的结果。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n))!=EOF)
//	{
//		printf("%d", 1 << n);
//	}
//	return 0;
//}

//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，
//第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，
//并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
//输入描述：
//多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
//输出描述：
//针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
//示例1
//输入：
//8 5 16
//
//输出：
//4
//#include<stdio.h>
//int main()
//{
//	int n; //未打开的酸奶
//	int h; //几分钟能喝光一盒酸奶
//	int m; //经过m分钟后有多少盒未打开的酸奶
//	int num = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	if (m%h > 0)
//	{
//		num = num + 1;
//	}
//	num = num + m / h;
//	printf("%d\n", n-num);
//	return 0;
//}
//你的手机丢了，在屏幕上输出信息告诉大家
//#include<stdio.h>
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//学生信息管理系统是学校教学管理的重要工具，现有一名学生基本信息如下：姓名 - Jack，年龄 - 18，性别 - Man，
//请按照输出样例的格式输出该学生的信息。
//输入描述：
//无
//输出描述：
//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
//Name Age Gender
//-------------------- -
//Jack 18 man
//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18	Man");
//}

//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	double num = ((a + b + c + d + e) / 5.0);
//	printf("%.1f", num);
//	return 0;
//}
//输入一个十六进制数a，和一个八进制数b，输出a + b的十进制结果
//输入描述：
//一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
//输出描述：
//一行，a + b的十进制结果。
//示例1
//输入：
//0x12 05
//复制
//输出：
//23
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述：
//输入包括一个字符。
//输出描述：
//输出该字符是字母（YES）或不是（NO）。
//#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c", &n);
//	if (n >= 'a'&&n <= 'z' || n >= 'A'&&n <= 'Z')
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，
//是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如：一个人的身高为1.75米，体重为68千克，他的BMI = 68 / (1.75 ^ 2) = 22.2（千克 / 米 ^ 2）。
//当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
//输入描述：
//一行，输入一个人的体重（千克）和身高（米），中间用一个空格分隔。
//输出描述：
//一行，输出身体Normal(正常)或Abnormal(不正常)。
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	scanf("%f %f", &a, &b);
//	float x = a / (b*b);
//	if (x >= 18.5&&x <= 23.9)
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//	return 0;
//}
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，
//他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，
//“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），
//求KiKi最终所花的钱数。
//数据范围：衣服价格满足 1≤val≤100000
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，
//第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。
//注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。
//#include<stdio.h>
//int main()
//{
//	float a;
//	int b, c, d;
//	scanf("%f %d %d %d", &a, &b, &c, &d);
//	if ((b == 11) && (c == 11))
//	{
//		a = a*(0.7);
//		if (d == 1)
//		{
//			a = a - 50;
//			if (a < 0)
//			{
//				a = 0;
//			}
//		}
//	}
//	if ((b == 12) && (c == 12))
//	{
//		a = a*(0.8);
//		if (d == 1)
//		{
//			a = a - 50;
//			if (a < 0)
//			{
//				a = 0;
//			}
//		}
//	}
//	printf("%.2f", a);
//
//	return 0;
//}
//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。
//数据范围： 0<a, b, c≤100000
//输入描述：
//一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//输出描述：
//一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
//示例1
//输入：
//3 3 3
//复制
//输出：
//circumference = 9.00 area = 3.90
//= 1 / 4sqrt[(a + b + c)(a + b - c)(a + c - b)(b + c - a)]
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float sum= a + b + c;
//	float d = sum / 2.0;
//	float S = sqrt(d*(d - a)*(d - b)*(d - c));
//	printf("circumference=%.2f area=%.2f", sum, S);
//	return 0;
//
//}
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）, （14和61）, （146和1),
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
//输入描述：
//无
//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
//#include<stdio.h>
//int main()
//{
//	int i;//99999 9*9999+99*999+999*99+9999*9
//	for (i = 10000; i < 100000; i++)
//	{
//		if (i == ((i / 10000)*(i % 10000) + (i / 1000)*(i % 1000) + (i / 100)*(i % 100) + (i / 10)*(i % 10)))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//数据范围： 5≤n≤50  ，成绩采取百分制并不会出现负数
//输入描述：
//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int arr[40] = { 0 };
//	printf("请输入x个学生: ");
//	scanf("%d", &n);
//	printf("请输入学生成绩：");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//排序
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j=i+1; j<n; j++)
//		{
//			if (arr[j]>arr[i])
//			{
//				int t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述：
//一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
//示例1
#include<stdio.h>
int main()
{
	char ch;
	int a=0, b=0;
	while ((scanf("%c", &ch))!=EOF)
	{
		if (ch == '0')
		{
			break;
		}
		if (ch == 'A')
		{
			a++;
		}
		if (ch == 'B')
		{
			b++;
		}
	}
	if (a < b)
	{
		printf("B");
	}
	if (a > b)
	{
		printf("A");
	}
	if (a == b)
	{
		printf("E");
	}
	return 0;
}