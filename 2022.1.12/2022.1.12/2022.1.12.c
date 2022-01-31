#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int j = 1;
//	scanf("%d", n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	printf("%d", j);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	i = a++;
//	printf("%d", a);
//	return 0;
//}
//不允许创建临时变量，交换两个数的内容（附加题）
//#include<stdio.h>
//int main()
//{
//	//int n = 20;
//	//int m = 30;
//	//printf("交换前：%d %d\n", n, m);
//	//n = n + m;
//	//m = n - m;
//	//n = n - m;
//	//printf("交换后：%d %d\n", n, m);
//	//return 0;
//	int n = 20;
//	int m = 30;
//	n = n^m;
//	m = n^m;
//	n = n^m;
//	printf("%d %d", n, m);
//
//}

//3.求10 个整数中最大值。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 14, 12, 2, 3, 4, 5, 6, 7, 8 };
//	int i;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			int t = max;
//			max = arr[i];
//			arr[i] = t;
//		
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int t = 0;
//	scanf("%d %d", &m, &n);
//	while (1)
//	{
//
//		if (m%n != 0)
//		{
//			t = m%n;
//			m = n;
//			n = t;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}./* 将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/
//#include<stdio.h>
//int main()
//{
//	int i;
//	char t = 0;
//	char arr1[] = { "changeme" };
//	char arr2[] = { "########" };
//	int sz = strlen(arr1);
//	for (i = 0; i < sz; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//
//	}
//	printf("交换后：>\n%s %s\n", arr1, arr2);
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//#include<stdio.h>
//int main()
//{
//	float i=1.0;
//	float j;
//	float sum = 0;
//	int k = 1;
//	for (j = 1; j <= 100; j++)
//	{
//		sum = sum + (i / j)*k;
//		k = k*(-1);
//	}
//	printf("%f", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float i;
//	float j = 0.0;
//	int x = 1;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		j = (1 / i)*x;
//		x = x*(-1);
//		sum += j;
//
//	}
//	printf("%f", sum);
////}
//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//		if (i / 10==9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int x;
//	for (i = 0; i <= 6; i++)
//	{
//		//控制打印空格的数量
//		for (j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印星号数目
//		for (x = 0; x <=2*i; x ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (x = 0; x < 11 - 2 * i; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int g;
//	int s;
//	int b;
//	for (i = 100; i <= 999; i++)
//	{
//		g = i % 10;
//		s = (i / 10) % 10;
//		b = i / 100;
//		if (((g*g*g)+(s*s*s)+(b*b*b))==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	scanf("%d",&n);
//	int j=n;
//	int sum =n;
//	for (i = 1; i <= 4;i++)
//	{
//		j = (j * 10)+2;
//		sum = sum + j;
//	}
//	printf("%d", sum);
//	return 0;
//}

//
//.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）

//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int z=0;
//	int y = sz - 1;
//	while (z <= y)
//	{
//		int mid = (z + y) / 2;
//		if (arr[mid]>n)
//		{
//			y = mid - 1;
//		}
//		if (arr[mid] < n)
//		{
//			z = mid + 1;
//		}
//		if (arr[mid] == n)
//		{
//			printf("找到了下标是%d\n",mid);
//			break;
//		}
//	}
//	if (z > y)
//	{
//		printf("没找到！");
//	}
//	return 0;
//}


//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。