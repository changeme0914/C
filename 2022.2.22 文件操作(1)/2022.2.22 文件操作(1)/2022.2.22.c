#define  _CRT_SECURE_NO_WARNINGS 1
//�ļ��Ĵ򿪺͹ر�
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//���ļ�
//	FILE *p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//���ļ��ɹ�
//		//���ļ�
//	}
//	//�ر��ļ�
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}

//�ļ���˳���д
//int main()
//{
//	FILE *p = fopen("text.txt", "w");
//	if (p != NULL)
//	{
//		д�ļ�
//		fputc('m', p);
//		fputc('e', p);
//		//�ر��ļ�
//	}
//	fclose(p);
//	p = NULL;
//}

int main()
{
	FILE *p = fopen("text.txt", "r");
	if (p != NULL)
	{
		//���ļ�
		printf("%c",fgetc(p));
		printf("%c", fgetc(p));
	}
	//�ر��ļ�
	fclose(p);
	p = NULL;
}