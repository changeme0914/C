#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int j = 1;
//	scanf("%d", n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	printf("%d", j);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	i = a++;
//	printf("%d", a);
//	return 0;
//}
//����������ʱ���������������������ݣ������⣩
//#include<stdio.h>
//int main()
//{
//	//int n = 20;
//	//int m = 30;
//	//printf("����ǰ��%d %d\n", n, m);
//	//n = n + m;
//	//m = n - m;
//	//n = n - m;
//	//printf("������%d %d\n", n, m);
//	//return 0;
//	int n = 20;
//	int m = 30;
//	n = n^m;
//	m = n^m;
//	n = n^m;
//	printf("%d %d", n, m);
//
//}

//3.��10 �����������ֵ��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 14, 12, 2, 3, 4, 5, 6, 7, 8 };
//	int i;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			int t = max;
//			max = arr[i];
//			arr[i] = t;
//		
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//4.�����������Ӵ�С�����
//5.�������������Լ����
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int t = 0;
//	scanf("%d %d", &m, &n);
//	while (1)
//	{
//
//		if (m%n != 0)
//		{
//			t = m%n;
//			m = n;
//			n = t;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}./* ������A�е����ݺ�����B�е����ݽ��н�����������һ����*/
//#include<stdio.h>
//int main()
//{
//	int i;
//	char t = 0;
//	char arr1[] = { "changeme" };
//	char arr2[] = { "########" };
//	int sz = strlen(arr1);
//	for (i = 0; i < sz; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//
//	}
//	printf("������>\n%s %s\n", arr1, arr2);
//	return 0;
//}
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//#include<stdio.h>
//int main()
//{
//	float i=1.0;
//	float j;
//	float sum = 0;
//	int k = 1;
//	for (j = 1; j <= 100; j++)
//	{
//		sum = sum + (i / j)*k;
//		k = k*(-1);
//	}
//	printf("%f", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float i;
//	float j = 0.0;
//	int x = 1;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		j = (1 / i)*x;
//		x = x*(-1);
//		sum += j;
//
//	}
//	printf("%f", sum);
////}
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//		if (i / 10==9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//1.����Ļ���������ͼ����
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
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int x;
//	for (i = 0; i <= 6; i++)
//	{
//		//���ƴ�ӡ�ո������
//		for (j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ���Ŀ
//		for (x = 0; x <=2*i; x ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (x = 0; x < 11 - 2 * i; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//int main()
//{
//	int i;
//	int g;
//	int s;
//	int b;
//	for (i = 100; i <= 999; i++)
//	{
//		g = i % 10;
//		s = (i / 10) % 10;
//		b = i / 100;
//		if (((g*g*g)+(s*s*s)+(b*b*b))==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	scanf("%d",&n);
//	int j=n;
//	int sum =n;
//	for (i = 1; i <= 4;i++)
//	{
//		j = (j * 10)+2;
//		sum = sum + j;
//	}
//	printf("%d", sum);
//	return 0;
//}

//
//.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int z=0;
//	int y = sz - 1;
//	while (z <= y)
//	{
//		int mid = (z + y) / 2;
//		if (arr[mid]>n)
//		{
//			y = mid - 1;
//		}
//		if (arr[mid] < n)
//		{
//			z = mid + 1;
//		}
//		if (arr[mid] == n)
//		{
//			printf("�ҵ����±���%d\n",mid);
//			break;
//		}
//	}
//	if (z > y)
//	{
//		printf("û�ҵ���");
//	}
//	return 0;
//}


//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����