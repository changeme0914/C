#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ�������
//struct stu
//{
//	char name[10];//��Ա����
//	char sex[5];
//	int age;
//};
//int main()
//{
//	return 0;
//}
////�����ṹ������:�������ṹ���ʱ����Բ���ȫ����
//struct 
//{
//	int age;
//}u;
////�ṹ��������
//struct stu
//{
//	int age;
//	/*struct stu s;�����������*/
//	struct stu * next;
//};
////�ṹ������Ķ���ͳ�ʼ��
//#include<stdio.h>
//struct Node
//{
//	char sex[5];
//};
//struct stu
//{
//	char name[20];
//	struct Node s;
//	int age;
//}s;//ȫ�ֱ���
//struct stu sp;//ȫ�ֱ���
//int main()
//{
//	struct stu spp;//�ֲ�����
//	/*struct stu sppp = { "����", 20 };*/// �ṹ��ĳ�ʼ��
//	struct stu p = { "����", { "��" }, 20 };//Ƕ�׶�������ʻ�
//	return 0;
//}

//�ṹ���ڴ����
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С��������������������
//1.
//struct S1
//{
//	char c1;//1 
//	int i;// 4
//	char c2;// 1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); 1+3+4+1+3=12
//}
//2.
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));1+1+4+2=8
//3.
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));8+1+3+4=16
//4.�ṹ���Ƕ������
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//printf("%d\n", sizeof(struct S4));1+7+16+8=32
 
//�ڴ������ŵ㣺�ܵ���˵�ÿռ任ʱ�� 
//���ǿ�����pragma ���޸Ķ�����
//#include<stdio.h>
//#pragma pack (8) �޸�Ĭ�϶�����Ϊ8
//int main()
//{
//	return 0;
//}

//�ṹ�崫�� 1.���� 2.��ַ
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////����
//void print1(struct stu p)
//{
//	printf("%d\n", p.age);
//}
////��ַ
//void print2(struct stu *p)
//{
//	printf("%d\n", p->age);
//}
//int main()
//{
//	struct stu s = { "����", 30 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//print2 ����Ҫ�� print1 Ҫ�õ����Ǵ���ʱ��ѹջ ��ʱ��Ϳռ�Ŀ��������Ǵ��Ľṹ������ʱ��
//����ѹջ ��ʹ�������½�

//����λ��
//struct A
//{
//	int _a : 20;//20 30 5��СΪbit
//	int _b : 30;
//	int _c : 5;
//};
//λ�ο�ƽ̨���ڵ����⣺
///*1.int λ�α������з��Ż����޷����ǲ�ȷ�����
//2.���λ����Ŀ�ǲ�ȷ����
//3.λ���д�ĳ�Ա���ڴ����Ǵ������ҷ���Ļ��Ǵ����������Ĳ�ȷ�� C����Ҳû����ȷ�Ĺ�*/��

//����ö��
//enum Day
//{
//	Mon,
//	Sta,
//	sun
//};
//1. ���Ӵ���Ŀɶ��ԺͿ�ά����
//2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3. ��ֹ��������Ⱦ
//4. ���ڵ���
//5. ʹ�÷��㣬һ�ο��Զ���������

//�ġ�������
//union un
//{
//	char c;
//	int age;
//};
///������Ĵ�С�ļ���
//1.���ȴ�С��С������Ա�Ĵ�С
//2.����������������������ʱ��Ҫ�������������������������

//�����⣺�жϵ�ǰ������Ĵ�С�˴洢
#include<stdio.h>
int panduan()
{
	//int a = 1;
	//return *(char *)&a;
	union un
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = panduan();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
