#define  _CRT_SECURE_NO_WARNINGS 1

//calloc
//void* calloc(size_t num, size_t size);//calloc ����Ҫ��ʼ�����Լ���ʼ��Ϊ'0'

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
//	//�ͷ��ڴ�ռ�
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
//	//��������ڴ治��ʱ  ���ǿ���ԭ���ڴ�ռ�Ļ�����������
//	int *ptr = (int *)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		//ʹ�ÿռ�
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//������ʹ��realloc��̬�����ڴ�ʱ
//��������������
//���1��ԭ�пռ�����㹻�Ŀռ�ʱ����չ�ռ�ʱֱ����ԭ�пռ������ռ䣬ԭ���Ŀռ����ݲ������κθı䡣
//���2��ԭ�пռ��û���㹻�Ŀռ�ʱ���ڶѿռ�����һ�����ʴ�С�Ŀռ䷵��һ���µ��ڴ��ַ��

//���������Ķ�̬�ڴ����
//int main()
//{
	//1.  ��NULLָ��Ľ����ò���
	//int *p = (int *)malloc(INT_MAX);
	//*p = 10;//���p��ֵΪNULL �Ϳ��ܳ�����

	//2.  �Զ�̬���ٿռ��Խ�����
	//int i;
	//int *p = (int *)malloc(5 * sizeof(int));
	//if (p != NULL)
	//{
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;//���ڴ�������5���ֽ� ������5ʱԽ�����
	//	}
	//}
	//return 0;

	//3.  �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int *p = &a;
	////....
	//free(p);

	//4.  ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
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
	//free(p);//p����ָ��̬�ڴ����ʼλ�ã�

	//5.   ��ͬһ�鶯̬�ڴ����ͷ�
	//int *p = (int *)malloc(40);
	//free(p);
	//free(p);

	//6.  ��̬�����ڴ������ͷţ��ڴ�й©��
//	while (1)
//	{
//		malloc(1);//�����������ͷ�ʱ ��һֱ���ڴ�����ռ�ռ���ڴ棡
//	}
//}
