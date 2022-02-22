#define  _CRT_SECURE_NO_WARNINGS 1

//calloc
//void* calloc(size_t num, size_t size);//calloc 不需要初始化！自己初始化为'0'

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int * p = (int *)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放内存空间
//	free(p);
//	p = NULL;
//	return 0;
//}

// realloc
// void* realloc(void*ptr, size_t size);

//int main()
//{
//	int *p = (int *)malloc(5 * sizeof(int));
//	if (p != NULL)
//	{
//		return 0;
//		int i;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//当申请的内存不够时  我们可以原来内存空间的基础上再申请
//	int *ptr = (int *)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		//使用空间
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//当我们使用realloc动态分配内存时
//会出现如下情况：
//情况1：原有空间后有足够的空间时，拓展空间时直接在原有空间后申请空间，原来的空间数据不发生任何改变。
//情况2：原有空间后没有足够的空间时，在堆空间另找一个合适大小的空间返回一个新的内存地址。

//三、常见的动态内存错误
//int main()
//{
	//1.  对NULL指针的解引用操作
	//int *p = (int *)malloc(INT_MAX);
	//*p = 10;//如果p的值为NULL 就可能出问题

	//2.  对动态开辟空间的越界访问
	//int i;
	//int *p = (int *)malloc(5 * sizeof(int));
	//if (p != NULL)
	//{
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;//向内存申请了5个字节 当大于5时越界访问
	//	}
	//}
	//return 0;

	//3.  对非动态开辟内存使用free释放
	//int a = 10;
	//int *p = &a;
	////....
	//free(p);

	//4.  使用free释放一块动态开辟内存的一部分
	//int i;
	//int *p = (int *)malloc(5 * sizeof(int));
	//if (p!=NULL)
	//{
	//	for (i = 0; i < 5; i++)
	//	{
	//		*p++;
	//	}
	//}
	////....
	//free(p);//p不再指向动态内存的起始位置！

	//5.   对同一块动态内存多次释放
	//int *p = (int *)malloc(40);
	//free(p);
	//free(p);

	//6.  动态开辟内存忘记释放（内存泄漏）
//	while (1)
//	{
//		malloc(1);//当我们忘记释放时 会一直向内存申请空间占用内存！
//	}
//}
