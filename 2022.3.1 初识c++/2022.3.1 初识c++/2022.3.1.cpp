#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	//cout << "请输入两个数组：\n";
//	char arr1[20] = {0};
//	char arr2[20] = {0};
//	cin >> arr1;
//	cin >> arr2;
//	int  ret = strcmp(arr1, arr2);
//	if (ret == 0)
//	{
//		cout << "Yes";
//	}
//	else
//	{
//		cout << "No";
//	}
//	return 0;
//}
//定义变量
//#include <iostream>
//using namespace std;
//int main()
//{
//	// write your code here......
//	char a;
//	int b;
//	long c;
//	double d;
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	cout << sizeof(c) << endl;
//	cout << sizeof(d) << endl;
//	return 0;
//}
//实现四舍五入
//#include <iostream>
//using namespace std;
//int main() 
//{
//	double d;
//	cin >> d;
//
//	// write your code here......
//	int x = d;
//	int y = (d - x) / 0.5;
//	int sum = x + y;
//	cout << sum << endl;
//	return 0;
//}
//两数求和
//#include <iostream>
//using namespace std;
//int main()
//{
//	// write your code here......
//	int a, b;
//	int sum = 0;
//	cin >> a >> b;
//	sum = a + b;
//	cout << sum << endl;
//	return 0;
//}
//获得两个数中的最大值
//#include <iostream>
//using namespace std;
//int main() 
//{
//	// write your code here......
//	int a, b; 
//	cin >> a >> b;
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	cout << max << endl;
//	return 0;
//}
//简单运算
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << (a + b) << " " << (a - b) << " " << (a * b) << " " << (a / b) << " " << (a % b) << endl;
//	}
//	else
//	{
//		cout << (a + b) << " " << (b - a) << " " << (a * b) << " " << (b / a) << " " << (b % a) << endl;
//	}
//	return 0;
//}
//交换两个变量的值
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a;
//	cin >> b;
//	int t=a;
//	a = b;
//	b = t;
//	cout << a << " " << b << endl;
//	return 0;
//}
//获得三个数中的最大值
//#include <iostream>
//using namespace std;
//int main() {
//
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	cout << max;
//	return 0;
//}
//判断身体状态

//#include <iostream>
//using namespace std;
//int main() 
//{
//
//	double weight;
//	double height;
//	cin >> weight;
//	cin >> height;
//	double num = (weight) / (height*height);
//	if (num < 18.5)
//	{
//		cout << "偏瘦";
//	}
//	else if (num >= 18.5&&num < 20.9)
//	{
//		cout << "苗条";
//	}
//	else if (num >= 20.9&&num <= 24.9)
//	{
//		cout << "适中";
//	}
//	else
//	{
//		cout << "偏胖";
//	}
//	return 0;
//}
//判断成绩等级
//#include <iostream>
//using namespace std; 
//int main() 
//{
//
//	int n;
//	cin >> n;
//	if (n > 100 || n < 0)
//	{
//		cout << "成绩不合法";
//	}
//	else if (n >= 90 && n <= 100)
//	{
//		cout << "优秀";
//	}
//	else if (n >= 80 && n < 90)
//	{
//		cout << "良";
//	}
//	else if (n >= 70 && n < 80)
//	{
//		cout << "中";
//	}
//	else if (n >= 60 && n < 70)
//	{
//		cout << "及格";
//	}
//	else
//	{
//		cout << "差";
//	}
//	return 0;
//}
//判断季节
//#include <iostream>
//using namespace std;
//int main()
//{
//	int month;
//	cin >> month;
//	if (month > 12 || month < 1)
//	{
//		cout << "不合法";
//	}
//	else if (month >= 3 && month <= 5)
//	{
//		cout << "春季";
//	}
//	else if (month >= 6 && month <= 8)
//	{
//		cout << "夏季";
//	}
//	else if (month >= 9 && month <= 11)
//	{
//		cout << "秋季";
//	}
//	else
//	{
//		cout << "冬季";
//	}
//	return 0;
//}
//1-n之间偶数的和
//#include <iostream>
//using namespace std;
//int main() {
//
//	int n;
//	cin >> n;
//	int sum = 0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
//	}
//	// write your code here......
//	cout << sum << endl;
//
//	return 0;
//}
//求一个数的阶乘
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int n;
//	cin >> n;
//	long long factorial = 1;
//	while (n!=0)
//	{
//		factorial *= n;
//		n--;
//	}
//	cout << factorial << endl;
//	return 0;
//}