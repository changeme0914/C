#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体的声明
//struct stu
//{
//	char name[10];//成员变量
//	char sex[5];
//	int age;
//};
//int main()
//{
//	return 0;
//}
////匿名结构体类型:在声明结构体的时候可以不完全声明
//struct 
//{
//	int age;
//}u;
////结构的自引用
//struct stu
//{
//	int age;
//	/*struct stu s;错误的自引用*/
//	struct stu * next;
//};
////结构体变量的定义和初始化
//#include<stdio.h>
//struct Node
//{
//	char sex[5];
//};
//struct stu
//{
//	char name[20];
//	struct Node s;
//	int age;
//}s;//全局变量
//struct stu sp;//全局变量
//int main()
//{
//	struct stu spp;//局部变量
//	/*struct stu sppp = { "张三", 20 };*/// 结构体的初始化
//	struct stu p = { "张三", { "男" }, 20 };//嵌套定义的舒适化
//	return 0;
//}

//结构体内存对齐
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是最大对齐数的整数倍
//1.
//struct S1
//{
//	char c1;//1 
//	int i;// 4
//	char c2;// 1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); 1+3+4+1+3=12
//}
//2.
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));1+1+4+2=8
//3.
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));8+1+3+4=16
//4.结构体的嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//printf("%d\n", sizeof(struct S4));1+7+16+8=32
 
//内存对齐的优点：总的来说拿空间换时间 
//我们可以用pragma 来修改对齐数
//#include<stdio.h>
//#pragma pack (8) 修改默认对齐数为8
//int main()
//{
//	return 0;
//}

//结构体传参 1.传参 2.传址
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////传参
//void print1(struct stu p)
//{
//	printf("%d\n", p.age);
//}
////传址
//void print2(struct stu *p)
//{
//	printf("%d\n", p->age);
//}
//int main()
//{
//	struct stu s = { "张三", 30 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//print2 函数要比 print1 要好当我们传参时会压栈 有时间和空间的开销当我们传的结构体过大的时候
//导致压栈 会使得性能下降

//二、位段
//struct A
//{
//	int _a : 20;//20 30 5大小为bit
//	int _b : 30;
//	int _c : 5;
//};
//位段跨平台存在的问题：
///*1.int 位段被当成有符号还是无符号是不确定打的
//2.最大位的数目是不确定的
//3.位段中打的成员在内存中是从左向右分配的还是从右向左分配的不确定 C语言也没有明确的规*/定

//三、枚举
//enum Day
//{
//	Mon,
//	Sta,
//	sun
//};
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//3. 防止了命名污染
//4. 便于调试
//5. 使用方便，一次可以定义多个常量

//四、共用体
//union un
//{
//	char c;
//	int age;
//};
///联合体的大小的计算
//1.首先大小最小是最大成员的大小
//2.当不是最大对齐数的整数倍时，要对齐最大对齐数的最大整数倍；

//面试题：判断当前计算机的大小端存储
#include<stdio.h>
int panduan()
{
	//int a = 1;
	//return *(char *)&a;
	union un
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = panduan();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
