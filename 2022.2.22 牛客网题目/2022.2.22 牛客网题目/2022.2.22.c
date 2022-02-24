#define  _CRT_SECURE_NO_WARNINGS 1
//¾ØÕó×ªÖÃ
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10];
//	int arr2[10][10];
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			arr2[j][i] = arr[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//¾ØÕó½»»»
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int arr[10][10];
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		getchar();
//		char x;
//		int a, b;
//		scanf("%c %d %d", &x, &a, &b);
//		//½»»»ÐÐ
//		if (x == 'r')
//		{
//			for (j = 0; j < n; j++)
//			{
//				int t = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = t;
//			}
//		}
//		else if (x == 'c')
//		{
//			for (j = 0; j < m; j++)
//			{
//				int t = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//Ñî»ÔÈý½Ç
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	int i; int j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i>1&&j>0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//¾®×ÖÆå
//#include<stdio.h>
//int main()
//{
//	char arr[3][3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//		{
//			if (arr[i][0] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//			else if (arr[i][0] == 'B')
//			{
//				printf("BoBo wins!");
//				return 0;
//			}
//		}
//	}
//	for (j = 0; j < 3; j++)
//	{
//		if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//		{
//			if (arr[0][j] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//			else if (arr[0][j] == 'B')
//			{
//				printf("BoBo wins!");
//				return 0;
//			}
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
//	{
//		if (arr[0][0] == 'K')
//		{
//			printf("KiKi wins!");
//			return 0;
//		}
//		else if (arr[0][0] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//	}
//	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
//	{
//		if (arr[0][2] == 'K')
//		{
//			printf("KiKi wins!");
//			return 0;
//		}
//		else if (arr[0][2] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//	}
//	printf("No winner!");
//	return 0;
//}
//Å£Å£µÄËØÊýÅÐ¶Ï

//#include<stdio.h>
//int main()
//{
//	int n; int m;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%d", &m);
//		if (m == 2)
//		{
//			printf("true\n");
//		}
//		else
//		{
//			int i;
//			for (i = 2; i < m; i++)
//			{
//				if (m%i == 0)
//				{
//					
//					printf("false\n");
//					break;
//				}
//			}
//			if (m == i)
//			{
//				printf("true\n");
//			}
//		}
//		n--;
//	}
//	return 0;
//}
//Å£Å£µÄÌæ»»
//#include<stdio.h>
//int main()
//{
//	int n;
//	char a1, a2, a3, a4;
//	scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//	getchar();
//	char arr[1000] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == a1)
//		{
//			arr[i] = a2;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == a3)
//		{
//			arr[i] = a4;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//Å£Å£µÄËÄÒ¶Ãµ¹åÊý
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i; int g, s, b, q;
	for (i = m; i <= n; i++)
	{
		if (i < 10000)
		{
			g = i % 10;
			s = (i / 10) % 10;
			b = (i / 100) % 10;
			q = i / 1000;
			if (((g*g*g*g) + (s*s*s*s) + (b*b*b*b) + (q*q*q*q)) == i)
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}