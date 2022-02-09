#define  _CRT_SECURE_NO_WARNINGS 1

//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//输入描述：
//多组输入，每行输入包括一个整数表示的智商。
//输出描述：
//针对每行输入，输出“Genius”。
//示例1
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//
//		if (n >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}
//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
//输入描述：
//多组输入，每行输入包括一个整数表示的成绩（90~100）。
//输出描述：
//针对每行输入，输出“Perfect”。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		if (n >= 90 && n <= 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//	return 0;
//}
//KiKi想知道他的考试分数是否通过，请帮他判断。
//从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
//输入描述：
//多组输入，每行输入包括一个整数表示的分数（0~100）。
//输出描述：
//针对每行输入，输出“Pass”或“Fail”。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		if (n >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}	
//	return 0;
//}
//KiKi想知道一个整数的奇偶性，请帮他判断。
//从键盘任意输入一个整数（范围 - 231~231 - 1），编程判断它的奇偶性。
//输入描述：
//多组输入，每行输入包括一个整数。
//输出描述：
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		if (n % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//	return 0;
//}
//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//数据范围： 0≤n≤100
//输入描述：
//输入一行包括三个整数表示的分数（0~100），用空格分隔。
//输出描述：
//输出为一行，即三个分数中的最高分。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("%d", max);
//	return 0;
//}
//描述
//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o), U(u)称为元音，
//其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述：
//多组输入，每行输入一个字母。
//输出描述：
//针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。
//#include<stdio.h>
//int main()
//{
//	char n;
//	while ((scanf("%c", &n)) != EOF)
//	{
//		getchar();
//		if (n == 'A'||n == 'a'||n == 'E'||n == 'e'||n == 'I'||n == 'i'||n == 'O'||n == 'o'||n == 'U'||n == 'u')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}
//KiKi想判断输入的字符是不是字母，请帮他编程实现。
//输入描述：
//多组输入，每一行输入一个字符。
//输出描述：
//针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
//#include<stdio.h>
//int main()
//{
//	char n;
//	while ((scanf("%c", &n)) != EOF)
//	{
//		getchar();
//		if (n >= 'A'&&n <= 'Z' || n >= 'a'&&n <= 'z')
//		{
//			printf("%c is an alphabet.\n", n);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", n);
//		}
//	}
//	return 0;
//}
//KiKi想完成字母大小写转换，有一个字符，
//判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述：
//多组输入，每一行输入一个字母。
//输出描述：
//针对每组输入，输出单独占一行，输出字母的对应形式。
//示例1
//#include<stdio.h>
//int main()
//{
//	char n;
//	while ((n=getchar()) != EOF)
//	{
//		getchar();
//		if (n >= 'a'&&n <= 'z')
//		{
//			printf("%c\n", n - 32);
//		}
//		else
//		{
//			printf("%c\n", n + 32);
//		}
//	}
//	return 0;
//}
//KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
//输入描述：
//题目有多组输入数据，每一行输入两个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述：
//针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格，详见输入输出样例。
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while ((scanf("%d %d", &a, &b)) != EOF)
//	{
//		getchar();
//		if (a == b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//	}
//	return 0;
//}
//KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数，其中一种定义方式为：
//现在试求单位冲激函数在时域t上的值。
//输入描述：
//题目有多组输入数据，每一行输入一个t(-1000<t<1000)表示函数的时域t。
//输出描述：
//输出函数的值并换行。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int a = 1;
//	float b=0.5;
//	int c = 0;
//	while ((scanf("%d", &n))!=EOF)
//	{
//		if (n > 0)
//		{
//			printf("%d\n",a);
//		}
//		if (n == 0)
//		{
//			printf("%.1f\n",b);
//		}
//		if (n < 0)
//		{
//			printf("%d\n", c);
//		}
//	}
//	return 0;
//}
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0<a, b, c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，
//等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
//	{
//		if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
//		{
//			printf("Not a triangle!\n");
//			break;
//		}
//		else if (a == b&&a == c&&b == c)
//		{
//			printf("Equilateral triangle!\n");
//		}
//		else if (a == b&&a != c&&b != c || a == c&&a != b&&c != b || b == c&&b != a&&c != a)
//		{
//			printf("Isosceles triangle!\n");
//		}
//		else
//		{
//			printf("Ordinary triangle!\n");
//		}
//	}
//	return 0;
//}
//在计算BMI（BodyMassIndex ，身体质量指数）的案例基础上，判断人体胖瘦程度。BMI中国标准如下表所示。
//输入描述：
//多组输入，每一行包括两个整数，用空格隔开，分别为体重（公斤）和身高（厘米）。
//输出描述：
//针对每行输入，输出为一行，人体胖瘦程度，即分类。
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	float x;
//	while ((scanf("%f %f", &a, &b)) != EOF)
//	{
//		b = b / 100;
//		x = a / (b*b);
//		if (x < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (x >= 18.5&&x <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (x>23.9&&x <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//	}
//	
//	return 0;
//}
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，
//当a ≠ 0时，根据△ = b2 - 4 * a*c的三种情况计算并输出方程的根。
//输入描述：
//多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，表示一元二次方程ax2 + bx + c = 0的系数。
//输出描述：
//针对每组输入，输出一行，输出一元二次方程ax2 + bx + c = 0的根的情况。
//如果a = 0，输出“Not quadratic equation”；
//如果a ≠  0，分三种情况：
//△ = 0，则两个实根相等，输出形式为：x1 = x2 = ...。
//△  > 0，则两个实根不等，输出形式为：x1 = ...; x2 = ...，其中x1 <= x2。
//△  < 0，则有两个虚根，则输出：x1 = 实部 - 虚部i; x2 = 实部 + 虚部i，
//即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2 * a), 虚部 = sqrt(-△) / (2 * a)
//所有实数部分要求精确到小数点后2位，数字、符号之间没有空格。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	float sum;
//	while ((scanf("%f %f %f", &a, &b, &c)) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			sum = (b*b) - (4 * a*c);
//			if (sum == 0)
//			{
//				if (-b / (2 * a) == -0.00)
//				{
//					printf("x1=x2=0.00");
//				}
//				else
//				{
//					printf("x1=x2=%.2f\n", (-b) / (2.0 * a));
//				}
//
//			}
//			else if (sum > 0)
//			{
//				printf("x1 = %.2f; x2 = %.2f\n",(-b-sqrt(sum))/(2.0*a),(-b+sqrt(sum))/(2.0*a));
//			}
//			else
//			{
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b /( 2 * a), sqrt(-sum) / (2 * a), -b / (2 * a), sqrt(-sum) / (2 * a));
//			}
//		}
//	}
//	return 0;
//}
