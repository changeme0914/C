#define  _CRT_SECURE_NO_WARNINGS 1
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student
//#include<stdio.h>
//#include<string.h>
//先进行整体的交换  再逐个单词交换
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
//逐个交换
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
//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
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
//	printf("汽水个数：%d\n", qishui);
//	return 0;
//}
//题目名称
//计算求和
//求Sn=a+aa+aaa+aaaa+....
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
// 打印1-10000水仙花数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10000; i++)
//	{
//		int n = 1;
//		//判断几位数
//		int x = i;
//		while (x / 10)
//		{
//			n++;
//			x /= 10;
//		}
//		//求i各项的n次方和
//		int t = i;
//		int sum = 0;
//		while (t)
//		{
//			sum += pow(t % 10, n);
//			t /= 10;
//		}
//		//判断是不是
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//打印菱形
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
//	//先打印空格
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
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
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

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
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
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//输出描述：
//输出一个值，为求和结果。
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