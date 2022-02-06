#define  _CRT_SECURE_NO_WARNINGS 1
//描述
//于老师经常告诉我们“学习编程最好的办法就是上机实践，因为你要对计算机下指令，想让计算机帮你干活，就得多和计算机‘交流’，实践才能出真知。”
//输入描述：
//本题没有输入
//输出描述：
//Practice makes perfect!
//#include<stdio.h>
//int main()
//{
//	printf("Practice makes perfect!");
//	return 0;
//
//}
//描述
//每个人都想成为大V(VIP：Very Important Person)，但要一点一点积累才行，先从小v做起。要求输出由小写字母v组成的大V。
//输入描述：
//无
//输出描述：
//v   v
// v v
//  v
//
//备注：
//#include<stdio.h>
//int main()
//{
//	printf("v   v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}

//描述
//确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）。
//输入描述：
//无
//输出描述：
//不同整型数据类型在内存中占多大（字节），具体格式详见输出样例，输出样例中的 ? 为不同整型数据类型在内存中占的字节数。输出样例如下：
//The size of short is ? bytes.
//The size of int is ? bytes.
//The size of long is ? bytes.
//The size of long long is ? bytes.
//#include<stdio.h>
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
//输入描述：
//无
//输出描述：
//#include<stdio.h>
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}
//描述
//我们处理的整数通常用十进制表示，在计算机内存中是以二进制补码形式存储，但通常二进制表示的整数比较长，
//为了便于在程序设计过程中理解和处理数据，通常采用八进制和十六进制，缩短了二进制补码表示的整数，
//但保持了二进制数的表达特点。请输出十进制整数1234对应的八进制和十六进制。
//
//输入描述：
//无
//输出描述：
//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。
//备注：
//printf可以使用使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
//#include<stdio.h>
//int main()
//{
//	printf("0%o 0X%X", 1234, 1234);
//	return 0;
//}
//描述
//BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。
//
//输入描述：
//无
//输出描述：
//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
//备注：printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
//#include<stdio.h>
//int main()
//{
//	printf("%15d", 0XABCDEF);
//	return 0;
//}
//warning 校招时部分企业笔试将禁止编程题跳出页面，为提前适应，练习时请使用在线自测，而非本地IDE。
//描述
//将一个四位数，反向输出。
//
//
//输入描述：
//一行，输入一个整数n（1000 <= n <= 9999）。
//输出描述：
//针对每组输入，反向输出对应四位数。
//示例1
//输入：
//1234
//复制
//输出：
//4321
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//输入
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}
//实现字母的大小写转换。多组输入输出。
//输入描述：
//多组输入，每一行输入大写字母。
//输出描述：
//针对每组输入输出对应的小写字母。
//示例1
//输入：
//A
//B
//复制
//输出：
//a
//b
//复制
//备注：
//多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((n = getchar()) != EOF)
//	{
//		putchar(n + 32);
//		getchar();
//		printf("\n");
//	}
//	return 0;
//}
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述：
//无
//输出描述：
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值
//#include<stdio.h>
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}
//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//
//数据范围：0≤n≤100
//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来，输出格式详见输出样例。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d",a,b,c);
//	return 0;
//}
//描述
//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//
//数据范围：学号满足 1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
//输入描述：
//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
//输出描述：
//学号，3科成绩，输出格式详见输出样例。
//示例1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	float x=0.0, y=0.0, z=0.0;
//	scanf("%d;%f,%f,%f", &a, &x, &y, &z);
//	printf("The each subject score of %d is %.2f, %.2f, %.2f.", a, x, y, z);
//	return 0;
//}
//描述
//输入一个字符，用它构造一个边长为5的三角形圣诞树。
//
//数据范围：保证输入的字符是一个 char 类型的值
//输入描述：
//输入只有一行，一个字符。
//输出描述：
//该字符构成的三角形圣诞树。
//#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c", &n);//输入字符
//	int i;
//	int j;
//	int x;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 5-i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (x = 1; x <= i; x++)
//		{
//			printf("%c", n);
//			printf(" ");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
//
//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//
//输入描述：
//无
//输出描述：
//一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。
//#include<stdio.h> 
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%c ",arr[i]);
//	}
//	return 0;
//}