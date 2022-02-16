#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16 sizeof 计算字节大小
	//printf("%d\n", sizeof(a + 0));//  4/8 a是数组的首元素地址地址的字节大小是4或者8
	//printf("%d\n", sizeof(*a));  // 4 a是数组元素的地址*a代表的是首元素  首元素大小int型  4
	//printf("%d\n", sizeof(a + 1));//  4/8
	//printf("%d\n", sizeof(a[1]));// 4  首元素大小
	//printf("%d\n", sizeof(&a));// 4/8
	//printf("%d\n", sizeof(*&a));  // 16 *& 相互抵消
	//printf("%d\n", sizeof(&a + 1));// 4/8  求元素的地址
	//printf("%d\n", sizeof(&a[0]));// 4/8
	//printf("%d\n", sizeof(&a[0] + 1));//4/8


	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", sizeof(arr));// 6 计算数组字节大小
	//printf("%d\n", sizeof(arr + 0));// 4/8 首元素地址大小
	//printf("%d\n", sizeof(* arr));//1 arr是首元素地址 *arr=a
	//printf("%d\n", sizeof(arr[1]));//  1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8

	//printf("%d\n", strlen(arr)); // 随机值  strlen 遇到'\0'才会停止  计算字符串长度
	//printf("%d\n", strlen(arr + 0));// 随机值
	////printf("%d\n", strlen(*arr));// error 非法访问 'a'输入的是它的ascall码值
	////printf("%d\n", strlen(arr[1]));// error
	//printf("%d\n", strlen(&arr));// 随机值
	//printf("%d\n", strlen(&arr + 1));//随机值 随机值-整个数组所占字节跳过整个数组
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));// 7 abcdef\0
	//printf("%d\n", sizeof(arr + 0));// 4/8  首元素地址
	//printf("%d\n", sizeof(*arr));// 1 首元素大小
	//printf("%d\n", sizeof(arr[1]));//1  第二个元素的大小
	//printf("%d\n", sizeof(&arr));// 4/8  整个数组的地址
	//printf("%d\n", sizeof(&arr + 1)); // 4/8 跳过整个数组以后的地址 也是地址
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8 计算的是第二个元素的大小

	//printf("%d\n", strlen(arr));// 6 计算数组中字符长度
	//printf("%d\n", strlen(arr + 0));// 6 
	////printf("%d\n", strlen(*arr));// error 'a'非法访问
	////printf("%d\n", strlen(arr[1]));// error 
	//printf("%d\n", strlen(&arr));//6  整个数组的地址
	//printf("%d\n", strlen(&arr + 1));// 随机值 跳过整个数组后的地址
	//printf("%d\n", strlen(&arr[0] + 1));// 5 第二个元素的地址从第二个元素开始向后计算

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));// 4/8 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));// 4/8 第二个元素的地址
	//printf("%d\n", sizeof(*p));// 1 第一个元素大小
	//printf("%d\n", sizeof(p[0]));//1 p[0]==*p
	//printf("%d\n", sizeof(&p));// 4/8 地址
	//printf("%d\n", sizeof(&p + 1));//4/8 地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 第二个元素的地址

	//printf("%d\n", strlen(p));// 6 
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));// error
	////printf("%d\n", strlen(p[0])); // err
	//printf("%d\n", strlen(&p));// 随机值
	//printf("%d\n", strlen(&p + 1)); //随机值
	//printf("%d\n", strlen(&p[0] + 1));// 5
	
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));// 48 3*4*4 数组所占字节大小
	//printf("%d\n", sizeof(a[0][0]));//4 第一行首元素的大小
	//printf("%d\n", sizeof(a[0]));//16 第一行元素所占字节的大小 4*4
	//printf("%d\n", sizeof(a[0] + 1));// 4/8 第一行第二个元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素的大小 a[0]是第一行第一个元素的地址
	//printf("%d\n", sizeof(a + 1));//4/8 a是二维数组名 a是首元素的地址 a+1就是第二行的地址
	//printf("%d\n", sizeof(*(a + 1)));// 16
	//printf("%d\n", sizeof(&a[0] + 1));// 4/8 第二行的地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));// 16 计算第二行的大小
	//printf("%d\n", sizeof(*a));// 16 a是第一行的地址 *a就是第一行
	//printf("%d\n", sizeof(a[3]));//16
	//总结：
	//	1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
	//	2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
	//	3. 除此之外所有的数组名都表示首元素的地址
}
//D1.
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a取出的是整个数组的地址
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//程序的结果是什么 
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100000+20=0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//整形 例如 5+1=6 0x100000+1=0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//int *指针类型+1跳过四个字节->0x100000+4=0x100010
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
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
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//1000 0000 0000 0000 0000 0000 0000 0100 原码
//	                                                            //1111 1111 1111 1111 1111 1111 1111 1011 反码
//																//1111 1111 1111 1111 1111 1111 1111 1100 补码
																//%p 输出地址 
//	return 0;// 输出： FFFFFFFC -4 
//}
//D6:
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//} 输出：10 5

//D7:
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0; 输出：at
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
//}输出： POINT ER ST EW


