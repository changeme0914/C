#define  _CRT_SECURE_NO_WARNINGS 1
//�������飡
#include<stdio.h>
#include<stdlib.h>
//struct S_type
//{
//	int n;
//	int arr[0];// ��������
//};
//int main()
//{
//	struct S_type *p = (struct S_type *)malloc(sizeof(struct S_type) + 5 * sizeof(int)�������ڴ�ռ䣩);
//	p->n = 100;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//	}
//	�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//�����õڶ��ַ�ʽ�����棺
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
	//������С
	int * ptr = (int *)realloc(ps->p, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->p = ptr;
	}
	//for (��ֵ����)

	//�ͷ�  �������鶯̬�ڴ�ռ䶼Ҫ�ͷţ�
	free(ps);
	ps = NULL;

	free(ps->p);
	ps->p = NULL;
	return 0;
}
//��������ĺô�
//1.�����ڴ��ͷ�
//2.��������߷����ٶ�