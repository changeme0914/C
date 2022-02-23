#define  _CRT_SECURE_NO_WARNINGS 1
//柔性数组！
#include<stdio.h>
#include<stdlib.h>
//struct S_type
//{
//	int n;
//	int arr[0];// 柔性数组
//};
//int main()
//{
//	struct S_type *p = (struct S_type *)malloc(sizeof(struct S_type) + 5 * sizeof(int)（申请内存空间）);
//	p->n = 100;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//	}
//	释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//可以用第二种方式来代替：
struct S_type
{
	int n;
	int *p;
};
int main()
{
	struct S_type * ps = (struct S_type *)malloc(5 * sizeof(struct S_type));
	ps->p = malloc(5 * sizeof(int));
	int i;
	for (i = 0; i < 5; i++)
	{
		ps->p[i] = i;
	}
	//调整大小
	int * ptr = (int *)realloc(ps->p, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->p = ptr;
	}
	//for (赋值操作)

	//释放  申请两块动态内存空间都要释放！
	free(ps);
	ps = NULL;

	free(ps->p);
	ps->p = NULL;
	return 0;
}
//柔性数组的好处
//1.方便内存释放
//2.有利于提高访问速度