#define  _CRT_SECURE_NO_WARNINGS 1
// malloc �� free
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sum;
	scanf("%d", &sum);
	//���ڴ�����ռ�
	int *p = (int *)malloc(sum * sizeof(int));//malloc���ܶԺ������г�ʼ��
	int i;
	if (p == NULL)
	{
		printf("����ʧ�ܣ�");
	}
	else
	{
		for (i = 0; i < sum; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < sum; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	return 0;
	//����̬�ڴ�ʹ�����
	//����Ӧ������ϵͳ
	free(p);
	p = NULL;
}
