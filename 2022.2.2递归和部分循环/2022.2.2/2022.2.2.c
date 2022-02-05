#define  _CRT_SECURE_NO_WARNINGS 1


//3. 输出一个整数的每一位。
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		int x = n % 10;
//		n=n / 10;
//		printf("%d ", x);
//	}
//	return 0;
//}
//递归求解x各项的和
//#include<stdio.h>
//int num(int n)
//{
//	if (n > 9)
//	{
//		return num(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = num(n);
//	printf("%d\n", sum);
//	return 0;
//}
//递归求解n的k次方
//#include<stdio.h>
//
//double ff(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / ff(n, -k));
//	else if(k == 0)
//		return 1;
//	else
//		return n*ff(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double i = ff(n, k);
//	printf("%lf\n", i);
//	return 0;
//}
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
#include<stdio.h>

//void fan(int n)
//{
//	int sum = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fan(n);
//	return 0;
//}


//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//void fan(int x)
//{
//	int sum = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}
//void xtbit(int n,int m)
//{
//	int x = n^m;
//	fan(x);
//}
//int main()
//{
//	int n,m;
//	scanf("%d %d", &n,&m);
//	xtbit(n, m);
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//利用亦或相同为假不同为真
//#include<stdio.h>
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (A = 1; A <= 5;A++)
//	for (B = 1; B <= 5;B++)
//	for (C = 1; C <= 5;C++)
//	for (D = 1; D <= 5;D++)
//	for (E = 1; E <= 5; E++)
//	if (((A == 3) ^ (B == 2)) && ((B == 2) ^ (E == 4)) && ((C == 1) ^ (D == 2)) && ((C == 5) ^ (D == 3)) && ((E == 4) ^ (A == 1)))
//	if (A*B*C*D*E == 120)
//		printf("A=%d B=%d C=%d D=%d E=%d\n",A,B,C,D,E);
//
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include<stdio.h>
//int main()
//{
//	char k;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if (((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D'))== 3)
//		{
//			printf("凶手是%c\n", k);
//		}
//	}
//	return 0;
//}
//杨辉三角
//#include<stdio.h>
//void yanghui(int arr[100][100],int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	int i,j;
//	int arr[100][100] = {0};
//	printf("请输入：>\n");
//	scanf("%d", &n);
//	yanghui(arr,n);
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include<stdio.h>
int main()
{
	int arr[11] = { 1, 2, 1, 2, 3, 3, 4, 5, 6, 4, 6 };
	int i;
	int x = 0;
	for (i = 0; i < 11; i++)
	{
		x = x^arr[i];
	}
	printf("%d", x);

	return 0;
}
