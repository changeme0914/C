#define  _CRT_SECURE_NO_WARNINGS 1
//tolower 实现大写转小写
//toupper 实现小写转大写
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i=0;
//	while (arr[i])
//	{
//		if (toupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
// 模拟实现memcpy  适用于两个数组之间的转换
//#include<stdio.h>
//#include<assert.h>
//void *my_memcpy(void * arr2,const void *arr1, size_t num)
//{
//	void *ret = arr2;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (num--)
//	{
//		*(char *)arr2 = *(char *)arr1;
//		++(char *)arr1;
//		++(char *)arr2;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[6] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//memmove 处理重叠
//#include<stdio.h>
//#include<assert.h>
//void * my_memove(void * p1, const void *p2, size_t num)
//{
//	void * ret = p1;
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	if (p1 < p2)
//	{
//		while (num--)
//		{
//			*(char *)p1 = *(char *)p2;
//			++(char *)p1;
//			++(char *)p2;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char *)p1 + num) = *((char *)p2 + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
//	my_memove(arr, arr+2, 20);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//memcmp  字节进行比较
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 1, 2, 5, 6, 7 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}
