#define  _CRT_SECURE_NO_WARNINGS 1
//qsort
#include<stdio.h>
//int paixu(const void *p1, const void *p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int i;
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),paixu);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//����������
//��һ������һ������(0��N��50)��
//�ڶ�������N���������е������������ÿո�ָ���N��������
//������������Ҫ���в����һ��������
//���������
//#include<stdio.h>
//int main()
//{
//	int n,x;
//	scanf("%d", &n);
//	char arr[10000] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>x)
//		{
//			break;
//		}
//		if (arr[i] < x)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("%d ", x);
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//ɸѡ����n���ڵ�������ɸѡ��������Ϊ����2~n֮������������������ڴ洢��
//��������2֮��������ܱ�2����������0���ٽ�3֮��������ܱ�3����������0 ��
//�Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ������
//����������
//�������룬ÿ������һ����������������100����
//���������
//���ÿ�����������n��������У���һ�У����n֮�ڣ�����n�����������ÿո�ָ���
//
//�ڶ��У����������2֮����0 �ĸ�����ÿ��������С�
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[101] = { 0 };
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//		int sum = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//			{
//				sum = sum + 1;
//			}
//		}
//		printf("\n");
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬�ж��Ƿ��¼�ɹ���
//����������
//����������ݣ�ÿ���������ÿո�ֿ����ַ�������һ��Ϊ�û������ڶ���λ���롣
//���������
//���ÿ������������ݣ����Ϊһ�У�һ���ַ�������Login Success!����Login Fail!����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10];
//	char brr[10];
//	char mima[10] = "admin";
//	while ((scanf("%s %s", &arr, &brr)) != EOF)
//	{
//		if (strcmp(arr, mima) == 0 && strcmp(brr, mima) == 0)
//		{
//			printf("Login Success!");
//		}
//		else
//		{
//			printf("Login Fail!");
//		}
//	}
//	
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	printf("I will learn C++ well!\n");
//	return 0;
//}
//����һ���ǳ��򵥵���Ŀ�����ڿ������̵Ļ���������ǧ���������Ŷ������Ϊһ�У�
//�������ÿո�ָ����ĸ�����a��b��c��d��0 < a, b, c, d < 100, 000�������Ϊһ�У�Ϊ��(a + b - c)*d���ļ�������
//
//	����������
//	����Ϊһ�У��ÿո�ָ����ĸ�����a��b��c��d��0 < a, b, c, d < 100, 000����
//	���������
//	���Ϊһ�У�Ϊ��(a + b - c)*d���ļ�������
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int sum = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	sum = (a + b - c)*d;
//	printf("%d\n", sum);
//	return 0;
//}
//�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д���룬��Ͱ�����ɡ�
//����������
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
////}
//��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//����������
//һ�У�����һ������x���� - 10000<x<10000��
//���������
//һ�У����y��ֵ��
//ʾ��1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0");
//	}
//	else if (n > 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("1");
//	}
//	return 0;
////}
//������2019�꣬KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
//����������
//��
//���������
//һ�У�һ����������ʾ1~2019�й��ж��ٸ�����������9��
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		if (i % 10 == 9 || i / 1000 == 9||(i/10)%10==9||(i/100)%10==9)
//		{
//			sum=sum+1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//
//����������
//һ�У�һ��������N����1��N��100, 000��
//���������
//һ�У�1~N֮�������ĸ�����ż���ĸ������ÿո�ֿ���
//ʾ��1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum1 = sum1 + 1;
//		}
//		else
//		{
//			sum2 = sum2 + 1;
//		}
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	float arr[1000] = { 0 };
//	int i;
//	float sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum = sum + arr[i];
//	}
//	float max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			float t = max;
//			max = arr[i];
//			arr[i] = t;		
//		}
//	}
//	float min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (min > arr[i])
//		{
//			float t = min;
//			min = arr[i];
//			arr[i] = t;
//		}
//	}
//	printf("%.2f %.2f %.2f", max, min, sum / n);
//	
//	return 0;
//}
//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//����������
//�����У�
//��һ������һ������(0��N��50)��
//�ڶ�������N���������е������������ÿո�ָ���N��������
//������������Ҫ���в����һ��������
//���������
//���Ϊһ�У�N + 1���������е�������
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x;
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (x < arr[i])
		{
			break;
		}
		else
		{
			printf("%d ", arr[i]);
		}
	}
	printf("%d ", x);
	for (i; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}