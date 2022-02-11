#define  _CRT_SECURE_NO_WARNINGS 1
//新年到来，输出信息迎接新年。
//输入描述：
//无
//输出描述：
//Happy New Year * 2019 *
//#include<stdio.h>
//int main()
//{
//	printf("Happy New Year * 2019 *");
//	return 0;
//}
//描述
//从键盘输入5个人的身高（米），求他们的平均身高（米）。
//
//输入描述：
//一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
//输出描述：
//一行，输出平均身高，保留两位小数。
//#include<stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//	float sum = (a + b + c + d + e) / 5;
//	printf("%.2f", sum);
//	return 0;
//}
//KiKi想知道这学期他的学习情况，BoBo老师告诉他这学期挂的科目累计的学分，根据所挂学分，
//判断KiKi学习情况，10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good。
//输入描述：
//一行，一个整数（0~30），表示KiKi挂的科目累计的学分。
//输出描述：
//一行，根据输入的挂科学分，输出相应学习情况（Danger++，Danger，Good）。
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 3)
//	{
//		printf("Good\n");
//	}
//	else if (n >= 4 && n <= 9)
//	{
//		printf("Danger\n");
//	}
//	else
//	{
//		printf("Danger++\n");
//	}
//	return 0;
//}
//KiKi访问网站，得到HTTP状态码，但他不知道什么含义，
//BoBo老师告诉他常见HTTP状态码：200（OK，请求已成功），202（Accepted，
//服务器已接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁止），
//404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）。
//输入描述：
//多组输入，一行，一个整数（100~600），表示HTTP状态码。
//输出描述：
//针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//#include<stdio.h>
//int main()
//{
//	int m;
//	while ((scanf("%d", &m)) != EOF)
//	{
//		switch (m)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案。
//输入描述：
//多组输入，一个整数（3~20），表示数字三角形边的长度，即数字的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用数字组成的对应长度的数字三角形，每个数字后面有一个空格。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//输入描述：
//每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述：
//每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
//示例1
#include<stdio.h>
int main(){
	int arr[7];
	float sum=0.0;
	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF) 
	{
		int i;
		for (i = 0; i<7; i++)
		{
			int j;
			for (j = 0; j<7 - i - 1; j++)
			{
				if (arr[j]>arr[j + 1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
		sum = (arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 5.0;
		printf("%.2f\n", sum);
	}
}