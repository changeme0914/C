#define  _CRT_SECURE_NO_WARNINGS 1


//3. ���һ��������ÿһλ��
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		int x = n % 10;
//		n=n / 10;
//		printf("%d ", x);
//	}
//	return 0;
//}
//�ݹ����x����ĺ�
//#include<stdio.h>
//int num(int n)
//{
//	if (n > 9)
//	{
//		return num(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = num(n);
//	printf("%d\n", sum);
//	return 0;
//}
//�ݹ����n��k�η�
//#include<stdio.h>
//
//double ff(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / ff(n, -k));
//	else if(k == 0)
//		return 1;
//	else
//		return n*ff(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double i = ff(n, k);
//	printf("%lf\n", i);
//	return 0;
//}
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
#include<stdio.h>

//void fan(int n)
//{
//	int sum = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fan(n);
//	return 0;
//}


//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//void fan(int x)
//{
//	int sum = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}
//void xtbit(int n,int m)
//{
//	int x = n^m;
//	fan(x);
//}
//int main()
//{
//	int n,m;
//	scanf("%d %d", &n,&m);
//	xtbit(n, m);
//	return 0;
//}


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//���������ͬΪ�ٲ�ͬΪ��
//#include<stdio.h>
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (A = 1; A <= 5;A++)
//	for (B = 1; B <= 5;B++)
//	for (C = 1; C <= 5;C++)
//	for (D = 1; D <= 5;D++)
//	for (E = 1; E <= 5; E++)
//	if (((A == 3) ^ (B == 2)) && ((B == 2) ^ (E == 4)) && ((C == 1) ^ (D == 2)) && ((C == 5) ^ (D == 3)) && ((E == 4) ^ (A == 1)))
//	if (A*B*C*D*E == 120)
//		printf("A=%d B=%d C=%d D=%d E=%d\n",A,B,C,D,E);
//
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include<stdio.h>
//int main()
//{
//	char k;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if (((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D'))== 3)
//		{
//			printf("������%c\n", k);
//		}
//	}
//	return 0;
//}
//�������
//#include<stdio.h>
//void yanghui(int arr[100][100],int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	int i,j;
//	int arr[100][100] = {0};
//	printf("�����룺>\n");
//	scanf("%d", &n);
//	yanghui(arr,n);
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
#include<stdio.h>
int main()
{
	int arr[11] = { 1, 2, 1, 2, 3, 3, 4, 5, 6, 4, 6 };
	int i;
	int x = 0;
	for (i = 0; i < 11; i++)
	{
		x = x^arr[i];
	}
	printf("%d", x);

	return 0;
}
