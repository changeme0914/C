#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16 sizeof �����ֽڴ�С
	//printf("%d\n", sizeof(a + 0));//  4/8 a���������Ԫ�ص�ַ��ַ���ֽڴ�С��4����8
	//printf("%d\n", sizeof(*a));  // 4 a������Ԫ�صĵ�ַ*a���������Ԫ��  ��Ԫ�ش�Сint��  4
	//printf("%d\n", sizeof(a + 1));//  4/8
	//printf("%d\n", sizeof(a[1]));// 4  ��Ԫ�ش�С
	//printf("%d\n", sizeof(&a));// 4/8
	//printf("%d\n", sizeof(*&a));  // 16 *& �໥����
	//printf("%d\n", sizeof(&a + 1));// 4/8  ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0]));// 4/8
	//printf("%d\n", sizeof(&a[0] + 1));//4/8


	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", sizeof(arr));// 6 ���������ֽڴ�С
	//printf("%d\n", sizeof(arr + 0));// 4/8 ��Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(* arr));//1 arr����Ԫ�ص�ַ *arr=a
	//printf("%d\n", sizeof(arr[1]));//  1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8

	//printf("%d\n", strlen(arr)); // ���ֵ  strlen ����'\0'�Ż�ֹͣ  �����ַ�������
	//printf("%d\n", strlen(arr + 0));// ���ֵ
	////printf("%d\n", strlen(*arr));// error �Ƿ����� 'a'�����������ascall��ֵ
	////printf("%d\n", strlen(arr[1]));// error
	//printf("%d\n", strlen(&arr));// ���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ ���ֵ-����������ռ�ֽ�������������
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));// 7 abcdef\0
	//printf("%d\n", sizeof(arr + 0));// 4/8  ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));// 1 ��Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));//1  �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));// 4/8  ��������ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1)); // 4/8 �������������Ժ�ĵ�ַ Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8 ������ǵڶ���Ԫ�صĴ�С

	//printf("%d\n", strlen(arr));// 6 �����������ַ�����
	//printf("%d\n", strlen(arr + 0));// 6 
	////printf("%d\n", strlen(*arr));// error 'a'�Ƿ�����
	////printf("%d\n", strlen(arr[1]));// error 
	//printf("%d\n", strlen(&arr));//6  ��������ĵ�ַ
	//printf("%d\n", strlen(&arr + 1));// ���ֵ �������������ĵ�ַ
	//printf("%d\n", strlen(&arr[0] + 1));// 5 �ڶ���Ԫ�صĵ�ַ�ӵڶ���Ԫ�ؿ�ʼ������

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));// 4/8 ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));// 4/8 �ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*p));// 1 ��һ��Ԫ�ش�С
	//printf("%d\n", sizeof(p[0]));//1 p[0]==*p
	//printf("%d\n", sizeof(&p));// 4/8 ��ַ
	//printf("%d\n", sizeof(&p + 1));//4/8 ��ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ

	//printf("%d\n", strlen(p));// 6 
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));// error
	////printf("%d\n", strlen(p[0])); // err
	//printf("%d\n", strlen(&p));// ���ֵ
	//printf("%d\n", strlen(&p + 1)); //���ֵ
	//printf("%d\n", strlen(&p[0] + 1));// 5
	
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));// 48 3*4*4 ������ռ�ֽڴ�С
	//printf("%d\n", sizeof(a[0][0]));//4 ��һ����Ԫ�صĴ�С
	//printf("%d\n", sizeof(a[0]));//16 ��һ��Ԫ����ռ�ֽڵĴ�С 4*4
	//printf("%d\n", sizeof(a[0] + 1));// 4/8 ��һ�еڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ�صĴ�С a[0]�ǵ�һ�е�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a + 1));//4/8 a�Ƕ�ά������ a����Ԫ�صĵ�ַ a+1���ǵڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(a + 1)));// 16
	//printf("%d\n", sizeof(&a[0] + 1));// 4/8 �ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));// 16 ����ڶ��еĴ�С
	//printf("%d\n", sizeof(*a));// 16 a�ǵ�һ�еĵ�ַ *a���ǵ�һ��
	//printf("%d\n", sizeof(a[3]));//16
	//�ܽ᣺
	//	1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
	//	2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
	//	3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ
}
//D1.
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&aȡ��������������ĵ�ַ
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//����Ľ����ʲô 
//2   5

//D2.
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100000+20=0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//���� ���� 5+1=6 0x100000+1=0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//int *ָ������+1�����ĸ��ֽ�->0x100000+4=0x100010
//	return 0;
//}
//D3.
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
/*}*///02 00 00 00
// 4 200000

//D4.
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ
//	int *p;
//	p = a[0];
//	printf("%d", p[0]); 1
//	return 0;
//}

//D5.
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//1000 0000 0000 0000 0000 0000 0000 0100 ԭ��
//	                                                            //1111 1111 1111 1111 1111 1111 1111 1011 ����
//																//1111 1111 1111 1111 1111 1111 1111 1100 ����
																//%p �����ַ 
//	return 0;// ����� FFFFFFFC -4 
//}
//D6:
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//} �����10 5

//D7:
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0; �����at
//}

//D8:
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}����� POINT ER ST EW


