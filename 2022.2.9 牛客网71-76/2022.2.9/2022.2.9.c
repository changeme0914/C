#define  _CRT_SECURE_NO_WARNINGS 1
//���굽���������Ϣӭ�����ꡣ
//����������
//��
//���������
//Happy New Year * 2019 *
//#include<stdio.h>
//int main()
//{
//	printf("Happy New Year * 2019 *");
//	return 0;
//}
//����
//�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���
//
//����������
//һ�У���������5����ߣ���Χ0.00~2.00�����ÿո�ָ���
//���������
//һ�У����ƽ����ߣ�������λС����
//#include<stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//	float sum = (a + b + c + d + e) / 5;
//	printf("%.2f", sum);
//	return 0;
//}
//KiKi��֪����ѧ������ѧϰ�����BoBo��ʦ��������ѧ�ڹҵĿ�Ŀ�ۼƵ�ѧ�֣���������ѧ�֣�
//�ж�KiKiѧϰ�����10�����ϣ���Σ��(Danger++)��4~9�֣�Σ��(Danger)��0~3:Good��
//����������
//һ�У�һ��������0~30������ʾKiKi�ҵĿ�Ŀ�ۼƵ�ѧ�֡�
//���������
//һ�У���������Ĺҿ�ѧ�֣������Ӧѧϰ�����Danger++��Danger��Good����
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 3)
//	{
//		printf("Good\n");
//	}
//	else if (n >= 4 && n <= 9)
//	{
//		printf("Danger\n");
//	}
//	else
//	{
//		printf("Danger++\n");
//	}
//	return 0;
//}
//KiKi������վ���õ�HTTP״̬�룬������֪��ʲô���壬
//BoBo��ʦ����������HTTP״̬�룺200��OK�������ѳɹ�����202��Accepted��
//�������ѽ������󣬵���δ������400��Bad Request������������󣩣�403��Forbidden������ֹ����
//404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�502��Bad Gateway���������أ���
//����������
//�������룬һ�У�һ��������100~600������ʾHTTP״̬�롣
//���������
//���ÿ�������HTTP״̬�������״̬���Ӧ�ĺ��壬�����Ӧ���£�
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//#include<stdio.h>
//int main()
//{
//	int m;
//	while ((scanf("%d", &m)) != EOF)
//	{
//		switch (m)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ��������ɵ�����������ͼ����
//����������
//�������룬һ��������3~20������ʾ���������αߵĳ��ȣ������ֵ�������Ҳ��ʾ���������
//���������
//���ÿ�����룬�����������ɵĶ�Ӧ���ȵ����������Σ�ÿ�����ֺ�����һ���ո�
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//��ע�������ж������룩
//����������
//ÿһ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
//���������
//ÿһ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
//ʾ��1
#include<stdio.h>
int main(){
	int arr[7];
	float sum=0.0;
	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF) 
	{
		int i;
		for (i = 0; i<7; i++)
		{
			int j;
			for (j = 0; j<7 - i - 1; j++)
			{
				if (arr[j]>arr[j + 1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
		sum = (arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 5.0;
		printf("%.2f\n", sum);
	}
}