#define  _CRT_SECURE_NO_WARNINGS 1
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//	student a am i
//	i ma a tneduts
//	i am a student
//#include<stdio.h>
//#include<string.h>
//�Ƚ�������Ľ���  ��������ʽ���
//void change(char * left,char *right)
//{
//	while (left < right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//�������
//void w_change(char *arr)
//{
//	int sz = strlen(arr);
//	char *left = arr;
//	char *right = arr + sz - 1;
//	change(left,right);
//	printf("%s\n", arr);
//	while (*arr)
//	{
//		left = arr;
//		while ((*arr) != ' ' && (*arr) != '\0')
//		{
//			arr++;
//		}
//		right = arr - 1;
//		change(left, right);
//		if ((*arr) == ' ')
//		{
//			arr++;
//		}
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	w_change(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//#include<stdio.h>
//void change(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left != right)
//		{
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//#include<stdio.h>
//int main()
//{
//	int mon;
//	int qishui;
//	int kongping;
//	scanf("%d", &mon);
//	qishui = mon;
//	kongping = mon;
//	while (kongping>=2)
//	{
//		qishui = qishui + kongping / 2;
//		kongping = kongping / 2 + kongping % 2;
//	}
//	printf("��ˮ������%d\n", qishui);
//	return 0;
//}
//��Ŀ����
//�������
//��Sn=a+aa+aaa+aaaa+....
//#include<stdio.h>
//int main()
//{
//	int a;
//	int n;
//	int sum = 0;
//	scanf("%d %d", &a,&n);
//	int i;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret= ret* 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
// ��ӡ1-10000ˮ�ɻ���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10000; i++)
//	{
//		int n = 1;
//		//�жϼ�λ��
//		int x = i;
//		while (x / 10)
//		{
//			n++;
//			x /= 10;
//		}
//		//��i�����n�η���
//		int t = i;
//		int sum = 0;
//		while (t)
//		{
//			sum += pow(t % 10, n);
//			t /= 10;
//		}
//		//�ж��ǲ���
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//��ӡ����
  /* *
    ***
   *****
  *******
 *********
***********  */
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	//�ȴ�ӡ�ո�
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 2, 3, 3, 4, 5, 5, 6, 6 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int sum = 0;
//		int j;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				sum++;
//			}
//		}
//		if (sum == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = 0;
//	sum = a + b;
//	printf("%d\n", sum >> 1);
//	return 0;
//}
//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//����������
//����һ��������n(1 �� n �� 109)
//���������
//���һ��ֵ��Ϊ��ͽ����
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%ld\n", sum);
//	return 0;
//}