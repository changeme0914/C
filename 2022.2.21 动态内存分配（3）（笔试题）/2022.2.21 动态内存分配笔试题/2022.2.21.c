#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��Ŀһ��
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//�ó�����ڵ����⣺
//1.����������ֱ���
//2.��������ڴ�й©������
//��str��ֵ����ʽ����p��p��GetMemory���βΣ�ֻ�ں����ڲ���Ч����GetMemory���������Ժ�̬�����ڴ���δ�ͷ����޷��ҵ���

//����1��
//void GetMemory(char* *p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//  ��ַ
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//����2��
//char * GetMemory(char*p)
//{
//	p = (char *)malloc(100);
//	return p;// ���� 
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);// ����
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ����
//char *GetMemory(void)
//{
//	char p[] = "hello world";//ջ�ռ��ڴ������ ���ڴ�����һ��ռ� 
//	return p;//����p�ĵ�ַ ���ǵ�GetMemory��������ʱ��p��ָ����ڴ�ռ䱻�ͷ�
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//str ָ��Ŀռ�Ͳ�����  �Ƿ������ڴ棡
//	printf(str);// �ó���������ֵ
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
////��Ŀ����
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//��������hello//	//������ڵ����⣺û���ͷ�������ڴ�ռ䣡//	//��//	free(str);//	str = NULL;//	//}//int main()//{//	Test();//	return 0;//}//��Ŀ�ģ�//void Test(void)
//{
//	char *str = (char *)malloc(100);//���붯̬�ڴ�ռ�
//	strcpy(str, "hello");
//	free(str); �ͷ�str�Ŀռ�� str�����ΪNULL����ָ�룩
//	//��
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ������ڴ�
//		printf(str);// �ó������world
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}