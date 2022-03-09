#define _CRT_SECURE_NO_WARNINGS 1
//单词倒排
//#include<stdio.h>
//#include<string.h>
//void change(char *left,char *right)
//{
//	while (left < right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//void m_change(char *arr)
//{
//	int len = strlen(arr);
//	char *left = arr;
//	char *right = arr + len - 1;
//	change(left, right);
//	while (*arr)
//	{
//		left = arr;
//		while ((*arr) != '\0'&&(*arr)>='a'&&(*arr)<='z'||(*arr)>='A'&&(*arr)<='Z')
//		{
//			arr++;
//		}
//		right = arr - 1;
//		change(left, right);
//		(*arr) = ' ';
//		if (*arr == ' ')
//		{
//			arr++;
//		}
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	m_change(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//真因子数
//#include<stdio.h>
//int main()
//{
//	int i, j, s, n;
//	scanf("%d", &n);
//	int count = 0;
//	for( i=2; i<=n; i++ )
//	{	
//		s=0;
//		for( j=1; j<=i/2; j++ )//偶数最大因子为n/2，奇数最大因子小于n/2
//		{
//			if(i%j == 0)
//			s += j;
//		}
//		if(s == i) 
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//查找组成一个偶数最接近的两个素数
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i; int j;
//	for (i = n / 2; i >= 2; i--)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			for (j = 2; j < n - i; j++)
//			{
//				if ((n - i) % j == 0)
//				{
//					break;
//				}
//			}
//			if (j == n - i)
//			{
//				printf("%d\n", i);
//				printf("%d\n", n - i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//HJ61 放苹果
#include <stdio.h>

int fun(int m, int n){
	if (m == 0 || n == 1){
		return 1;
	}
	else if (m<n){
		return fun(m, m);
	}
	else{
		return fun(m - n, n) + fun(m, n - 1);
	}
}
int main()
{
	int a, b, num;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		num = fun(a, b);
		printf("%d\n", num);
	}
}