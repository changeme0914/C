#define  _CRT_SECURE_NO_WARNINGS 1
//ţţѧ����4����ţţ���� 1+��1+2��+��1+2+3��+...+(1+2+3+...+n)
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0; int num = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		num += i;
//		sum = sum + num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��λ֮��
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n = n / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//ħ�����ֱ任
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		else
//		{
//			n = n * 3 + 1;
//		}
//		sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//[NOIP2015]���
//�Լ���������1 ��n �����������У�����x��0 �� x �� 9���������˶��ٴΣ�//��������

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d %d", &n,&x);
	int i; int sum = 0;
	for (i = 1; i <= n; i++)
	{
		int t = i;
		while (t!=0)
		{
			if (t % 10 == x)
			{
				sum++;
				t = t/10;
			}
			else
			{
				t = t / 10;
			}
			
		}
	}
	printf("%d", sum);
	return 0;
}