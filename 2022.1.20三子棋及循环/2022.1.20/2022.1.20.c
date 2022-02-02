#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void maopao(int arr[], int n)
//{
//	int t = 0;
//	int i;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	int arr[] = { 1, 4, 2, 5, 6, 3, 9, 8, 14, 7 };
//	int n;
//	n = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define H 3
//#define L 3
////菜单
//void menu()
//{
//	printf("--------------------\n");
//	printf("---1.play  2.exit---\n");
//	printf("--------------------\n");
//}
////初始化棋盘
//void csboard(char board[H][L], int h, int l)
//{
//	int i;
//	for (i = 0; i < h; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//
//}
////打印棋盘
////   |   |   
////---|---|---
////   |   |   
////---|---|---
////   |   |   
//void dyboard(char board[H][L], int h, int l)
//{
//	int i;//打印行数据
//	for (i = 0; i < h; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l;j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < l - 1)
//			{
//				printf("|");
//			}
//
//		}
//		printf("\n");
//		if (i < h - 1)//打印分隔行
//		{
//			for (j = 0; j < l; j++)
//			{
//				printf("---");
//				if (j < l - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//
//	}
//
//}
////整个游戏的代码
//void game()
//{
//	char board[H][L] = { 0 };
//	//初始化棋盘
//	csboard(board, H, L);
//	//打印棋盘
//	dyboard(board, H, L);
//
//}
//
//void three()
//{
//	int n;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出成功\n");
//			break;
//		default:
//			printf("输入错误请重新输入\n");
//			break;
//		}
//	} while (n);
//}
//int main()
//{
//	three();
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define H 3
#define L 3

void menu()
{
	printf("----------------------\n");
	printf("----1.开始  2.退出----\n");
	printf("----------------------\n");
}

void csboard(char board[H][L],int h,int l)
{
	int i;
	for (i = 0; i < h; i++)
	{
		int j = 0;
		for (j = 0; j < l; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void dyboard(char board[H][L], int h, int l)
{
	int i;//打印数据
	for (i = 0; i < h; i++)
	{
		int j = 0;
		for (j = 0; j < l; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < l - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < h - 1)
		{
			int j = 0;
			for (j = 0; j < l; j++)
			{
				printf("---");
				if (j < l - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		

	}
	
}
void player(char board[H][L], int h, int l)
{
	int x, y;
	printf("请玩家下棋：\n");
	while (1)
	{
		printf("请输入坐标 例如：1 1\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= h && y >= 1 && y <= l)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入!\n");
			}		

		}
		else
		{
			printf("输入坐标错误！请重新输入：\n");
		}
	}
}
void computer(char board[H][L], int h, int l)
{
	int x;
	int y;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % h;
		y = rand() % l;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int full(char board[H][L], int h, int l)
{
	int i,j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char win(char board[H][L], int h, int l)
{
	int i;
	//横竖
	for (i = 0; i < h; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1]!= ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < l; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!= ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!= ' ')
	{
		return board[1][1];
	}
	//判断是否满了
	if (1 == full(board, H, L))
	{
		return 'Q';
	}
	return 'C';
}

void game()
{
	char n;
	char board [H][L] = { 0 };
	//初始化棋盘
	csboard(board, H, L);
	dyboard(board, H, L);
	while (1)
	{
		player(board,H,L);
		dyboard(board, H, L);
		n = win(board, H, L);
		if (n !='C')
		{
			break;
		}
		computer(board, H, L);
		dyboard(board, H, L);
		n = win(board, H, L);
		if (n!='C')
		{
			break;
		}
	}
	if (n == '*')
	{
		printf("玩家胜利\n");
	}
	else if (n=='#')
	{
		printf("电脑胜利\n");
	}
	else
	{
		printf("平局\n");
	}
}

void three()
{
	int n;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请进行选择：\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏成功\n");
			break;
		default:
			printf("输入错误请重新输入！\n");
			break;
		}
	} while (n);
	

}

int main()
{
	three();
	return 0;
}