#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//题目一：
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//该程序存在的问题：
//1.程序代码会出现崩溃
//2.程序存在内存泄漏的问题
//（str以值的形式传给p，p是GetMemory的形参，只在函数内部有效，当GetMemory函数结束以后动态开辟内存尚未释放且无法找到）

//改正1：
//void GetMemory(char* *p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//  传址
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改正2：
//char * GetMemory(char*p)
//{
//	p = (char *)malloc(100);
//	return p;// 返回 
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);// 接收
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//题目二：
//char *GetMemory(void)
//{
//	char p[] = "hello world";//栈空间内存的问题 向内存申请一块空间 
//	return p;//返回p的地址 但是当GetMemory函数结束时，p所指向的内存空间被释放
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//str 指向的空间就不存在  非法访问内存！
//	printf(str);// 该程序输出随机值
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
////题目三：
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//程序会输出hello//	//程序存在的问题：没有释放申请的内存空间！//	//改//	free(str);//	str = NULL;//	//}//int main()//{//	Test();//	return 0;//}//题目四：//void Test(void)
//{
//	char *str = (char *)malloc(100);//申请动态内存空间
//	strcpy(str, "hello");
//	free(str); 释放str的空间后 str不会成为NULL（空指针）
//	//改
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//非法访问内存
//		printf(str);// 该程序输出world
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}