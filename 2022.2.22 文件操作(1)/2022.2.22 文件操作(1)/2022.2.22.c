#define  _CRT_SECURE_NO_WARNINGS 1
//文件的打开和关闭
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE *p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//打开文件成功
//		//读文件
//	}
//	//关闭文件
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}

//文件的顺序读写
//int main()
//{
//	FILE *p = fopen("text.txt", "w");
//	if (p != NULL)
//	{
//		写文件
//		fputc('m', p);
//		fputc('e', p);
//		//关闭文件
//	}
//	fclose(p);
//	p = NULL;
//}

int main()
{
	FILE *p = fopen("text.txt", "r");
	if (p != NULL)
	{
		//读文件
		printf("%c",fgetc(p));
		printf("%c", fgetc(p));
	}
	//关闭文件
	fclose(p);
	p = NULL;
}