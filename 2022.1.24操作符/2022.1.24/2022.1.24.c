#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////4.
////����һ�����飬
////ʵ�ֺ���init������ʼ�����顢
////ʵ��empty����������顢
////ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//
////��ʼ��
//void init(int arr[],int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
////��ӡ
//void dy(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////����
//void reverse(int arr[], int n)
//{
//	int x = 0;
//	int y = n - 1;
//	int i;
//	for (i = 0; i < n / 2;i++)
//	{
//		if (x < y)
//		{
//			int t = 0;
//			t = arr[x];
//			arr[x] = arr[y];
//			arr[y] = t;
//			x++;
//			y--;
//		}
//		if (x >= y)
//		{
//			break;
//		}
//	}
//}
////�������
//void empty(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[9] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ʼ��
//	init(arr,sz);
//	//��ӡ
//	dy(arr, sz);
//	/*printf("%d\n", sz);*/
//	//��������;
//	reverse(arr, sz);
//	dy(arr, sz);
//	//�������
//	empty(arr, sz);
//	dy(arr, sz);
//
//	return 0;
//
//}
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ��������������
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	printf("�����룺>\n");
//	scanf("%d",&n);
//	printf("����λ��");
//	for (i = 31; i >= 0; i=i - 2)
//	{
//		int t = (n >> i) & 1;
//		printf("%d", t);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		int t = (n >> i) & 1;
//		printf("%d", t);
//	}
//	printf("\n");
//	return 0;
//}



//1. ��ӡ100~200֮�������
//2. ����˷��ھ���
//3. �ж�1000��-- - 2000��֮�������
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>=sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	printf("\n");
//	return 0;
//
//}
//�����������α�����ֵ��������ֵ�����ݽ��н�����
#include<stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	printf("����ǰ��%d %d\n", i, j);
	int t = 0;
	t = i;
	i = j;
	j = t;
	printf("������%d %d \n", i, j);
	return 0;
}