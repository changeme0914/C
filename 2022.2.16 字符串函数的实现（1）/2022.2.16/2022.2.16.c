#define  _CRT_SECURE_NO_WARNINGS 1
//自拟模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char * my_strcpy(char *arr1, const char *arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr2!='\0')
//	{
//
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[] =  "abcdefghi";
//	char arr2[] =  "change";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//自己模拟实现strcat
//#include<stdio.h>
//#include<assert.h>
//char * my_strcat(char * arr1, const char * arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2);
//	char *ret = arr1;
//	//找到'\0'
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	//将arr2放在arr1后面
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//
//
//}
//int main()
//{
//	char arr1[30] = "change";
//	char arr2[] = "me";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//模拟实现strcmp
//#include<stdio.h>
//int my_strcmp(const char *arr1, const char *arr2)
//{
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//		
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "afec";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}
//模拟实现strlen
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char *arr)
//{
//	assert(arr != NULL);
//	int sum = 0;
//	while (*arr != '\0')
//	{
//		sum += 1;
//		arr++;
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = "abcdefddd";
//	int ret = my_strlen(arr);
//	printf("%d ", ret);
//	return 0;
//}
//模拟实现strstr
//#include<stdio.h>
//#include<assert.h>
//char * my_strstr(const char * p1, const char * p2)
//{
//	assert(p1 != NULL);//abcdef\0  //abc\0
//	assert(p2 != NULL);
//	char *s1=NULL ;
//	char *s2=NULL ;
//	char *cul = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cul)
//	{
//		s1 = cul;
//		s2 = (char *)p2;
//		while ((*s1) && (*s2) && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cul;
//		}
//		cul++;
//	}
//	return NULL;
//
//}
//int main()
//{
//	char arr1[20] = "abbcde";
//	char arr2[] = "bc";
//	char *ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("未找到！\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//	char *str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}

//strtok
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "152.45.12.3";
//	char *p = ".";
//	char *ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}