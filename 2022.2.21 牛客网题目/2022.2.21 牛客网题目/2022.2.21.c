#define  _CRT_SECURE_NO_WARNINGS 1
//ţţ�����ü��̶���һ���ַ���Ȼ������Ļ����ʾһ��������ַ����ĶԽ��߳�5���ַ�����б���õ����Ρ�
//����������
//����һ��char�����ַ�
//���������
//���һ��������ַ����ĶԽ��߳�5���ַ�����б���õ�����
//#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c", &n);
//	printf("  %c\n", n);
//	printf(" %c%c%c\n", n,n,n);
//	printf("%c%c%c%c%c\n", n, n, n,n,n);
//	printf(" %c%c%c\n", n, n, n);
//	printf("  %c\n", n);
//	return 0;
//}
//ţţ�Ŀո�ָ�
//#include<stdio.h>
//int main()
//{
//	char a;
//	int b;
//	float c;
//	scanf("%c", &a);
//	scanf("%d", &b);
//	scanf("%f", &c);
//	printf("%c %d %.6f", a, b, c);
//	return 0;
//}
//ţţ�Ķ���
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}
//ţţѧ�ӷ� ���� ȡ��
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a / b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a%b);
//	return 0;
//}
//ţţ���ӰƱ
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n * 100);
//	return 0;
//}
//�����ĸ�λ ʮλ
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n % 10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", (n/10) % 10);
//	return 0;
//}
//��ѧ��
//#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf("%d%d", &x, &n);
//	int sum = x + n;
//	while (sum>7)
//	{
//		sum -= 7;
//	}
//	printf("%d", sum);
//	return 0;
//}
//�¶�ת��
//#include<stdio.h>
//int main()
//{
//	double n;
//	scanf("%lf", &n);
//	double c = (5 * (n - 32)) / 9;
//	printf("%.3lf", c);
//	return 0;
//}
//ţţ��Բ
//#include<stdio.h>
//int main()
//{
//	int r;
//	scanf("%d", &r);
//	float sum = 3.14*r*r*1.0;
//	printf("%.2f", sum);
//}
//ţţ�Ĳ�����·
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	scanf("%f %f", &a, &b);
//	float a1 = 1 / a;
//	float b1 = 1 / b;
//	float sum = 1 / (a1 + b1);
//	printf("%.1f", sum);
//}
//ţţ���߶�
//#include<stdio.h>
//int main()
//{
//	int x1, y1;
//	int x2, y2;
//	scanf("%d %d", &x1, &y1);
//	scanf("%d %d", &x2, &y2);
//	int sum = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
//	printf("%d", sum);
//	return 0;
//}
//�˷���
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ţţ������1 2 3 4
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0; int x = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i*x;
//		x = x*(-1);
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%.6lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i; double x = 1.0; 
//	double sum = 0.0; 
//	for (i = 0; i <n; i++)
//	{
//		sum += x*(1.0 / (i + 1));
//		x = x*(-1.0);
//	}
//	printf("%.3f", sum);
//	return 0;
//}