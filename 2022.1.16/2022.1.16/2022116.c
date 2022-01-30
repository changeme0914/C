#define 	 _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	printf("%d", j);
//	return 0;
//}
//int main()
//{
//	int i;
//	int j;
//	int jc= 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		int jc= 1;
//		for (j = 1; j <= i; j++)
//		{
//			jc = jc*j;
//		}
//		sum = sum + jc;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n;
//	int i;
//	scanf("%d", &n);
//	for (i = 0; i <=strlen(arr)-1; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了在第%d个位置\n", i);
//			break;
//		}
//	}
//	if (i == strlen(arr))
//	{
//		printf("找不到该数字\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome come to shandong";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{	
//		arr2[left] = arr1[left];
////	    arr2[right] = arr1[right];
////	    printf("%s\n", arr2);
////	    left++;
////	    right--;
////	}
////	return 0;
////
////
////}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	char mima[20] = {0};
//	for (i = 1; i <= 3; i++)
//	{
//
//		printf("请输入密码");
//		scanf("%s", &mima);
//		if (strcmp(mima,"123456")==0)
//		{
//			printf("输入正确\n");
//			break;
//		}
//		else
//			printf("输入错误请重新输入\n");
//	}
//	if (i == 4)
//	{
//		printf("三次输入均为错误退出\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d是三的倍数\n", i);
//		}
//	}
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i <= 9; i++)//行
//	{
//		for (j = 1; j <= i; j++)//列
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum=0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0)||(i%400==0))
//		{
//			printf("%d\n", i);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int t;
//	scanf("%d %d", &i, &j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//
//	printf("%d %d\n", i, j);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 0,1,2,3,20,5,6,7,8,9 };
//	int i;
//	int max=arr[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int t;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if(b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//
//}
//#include<stdio.h>
////int main()
//{
//	int m, n ;
//	int t ;
//	scanf("%d %d", &m, &n);
//	while (m%n)
//	{
//		t = m%n;
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = { "changeme" };
//	char b[] = { "########" };
//	int z = 0;
//	int y = strlen(a) - 1;
//	char t;
//	char tt;
//	while (z <= y)
//	{
//		t = a[z];
//		tt = a[y];
//		a[z] = b[z];
//		a[y] = b[y];
//		b[z]=t;
//		b[y] = tt;
//		z++; y--;
//	}
//	if (z > y)
//	{
//		printf("%s\n", a);
//		printf("%s\n", b);
//	}
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sum=0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//		{
//			sum++;
//		}
//		if (i / 10 == 9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//#include<stdio.h>
//int main()
//{
//	float i;
//	float j=0.0;
//	int x=1;
//	float sum=0.0;
//	for (i = 1; i <= 2; i++)
//	{
//		j = (1 / i)*x;
//		x = x*(-1);
//		sum += j;
//	
//	}
//	printf("%f", sum);
//}
//#include<stdio.h>
//int main()
//{
//	int i;
////	int ge;
//	int shi;
//	int bai;
//	int x = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		ge = i % 10;
//		bai = i / 100;
//		shi = (i % 100) / 10;
//		x = ge*ge*ge+shi*shi*shi+bai*bai*bai;
//		if ( x== i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//#include<stdio.h>
//int main()
//
//{
//	int i;
//	int n;
//	scanf("%d", &n); 
//	int j = n; 
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		sum = sum + j;
//		j =  j* 10 + n;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int erfenchazhao(int arr[], int k)
//{
//	int z = 0;
//	int y = strlen(arr) - 1;
//	int mid;
//	while (z <= y)
//	{
//		mid = (z + y)/2;
//		if (arr[mid]< k)
//		{
//			z = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			y = mid - 1;
//		}
//		else
//			return mid;
//	}
//	if (z > y)
//	{
//		return -1;
//	}
//}
//#include<stdio.h>
//int len(char*arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + len(arr + 1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "changeme";
//	int n=len(arr);
//	printf("len=%d\n", n);
//	return 0;
//}
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
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
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 5 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <=i; j++)
			printf(" ");
		for (k = 0; k <=10-2*i ;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
