#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr1[100][100];
//	char arr2[100];
//	int i; int j;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", arr1[i]);
//	}
//	//ð������
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if ((strcmp(arr1[j], arr1[j + 1]))>0)
//			{
//				strcpy(arr2, arr1[j + 1]);
//				strcpy(arr1[j + 1], arr1[j]);
//				strcpy(arr1[j], arr2);
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", arr1[i]);
//	}
//}
//��Ǯ��ټ�����
//#include<stdio.h>
//int main()
//{
//	int n; int i;//����1-5
//	int j; //��ĸ1-3
//	int k;//����3-1
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i <= 20; i++)
//		{
//			for (j = 0; j <= (100 - 5 * i) / 3; j++)
//			{
//				k = 3*(100 - 5 * i - 3 * j);
//				if (i + k + j == 100)
//				{
//					printf("%d %d %d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}
//ͳ�ƴ�д��ĸ����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[250]; int i;
//	while (gets(arr) != NULL)
//	{
//		int len = strlen(arr);
//		int sum = 0;
//		for (i = 0; i < len; i++)
//		{
//			if (arr[i] >= 'A'&&arr[i] <= 'Z')
//			{
//				sum++;
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//���ξ���
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int arr[100][100];
		int i; int j; int num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j >= 0; j--)
			{
				num++;
				arr[j][i - j] = num;
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
}