#define  _CRT_SECURE_NO_WARNINGS 1
// malloc 和 free
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sum;
	scanf("%d", &sum);
	//向内存申请空间
	int *p = (int *)malloc(sum * sizeof(int));//malloc不能对函数进行初始化
	int i;
	if (p == NULL)
	{
		printf("申请失败！");
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
	//当动态内存使用完后
	//我们应当还给系统
	free(p);
	p = NULL;
}
