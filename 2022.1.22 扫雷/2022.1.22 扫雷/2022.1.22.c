#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define H 9
#define L 9
#define HS H+2
#define LS L+2
#define LEISHU 80

void menu()
{
	printf("******************\n");
	printf("***   1.开始   ***\n");
	printf("***   0.结束   ***\n");
	printf("******************\n");
}
////初始化表格11行都要初始化
void cshboard(char board[HS][LS], int hs, int ls,char p)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hs; i++)
	{
		for (j = 0; j < ls; j++)
		{
			board[i][j] = p;
		}
	}

}
void dyboard(char board[HS][LS], int h, int l)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= l; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= h; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= l; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void bzlei(char board[HS][LS], int h, int l)
{
	int leishu = LEISHU;
	while (leishu)
	{
		int x = rand() % h + 1;
		int y = rand() % l + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			leishu--;
		}
	}

}

void slei(char houtai[HS][LS], char xianshi[HS][LS], int h, int l)
{
	int n;
	int x;
	int y;
	int win=0;
	while (win<h*l-LEISHU)
	{
		printf("请输入排查坐标：> 例：1 1\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= h&&y >= 1 && y <= l)
		{
			if (houtai[x][y] == '1')
			{
				printf("你被炸死了！游戏结束。\n");
				dyboard(houtai, H, L);
				break;
			}
			else
			{
				n=houtai[x - 1][y - 1] + houtai[x - 1][y] + houtai[x - 1][y + 1] +
					houtai[x][y - 1] + houtai[x][y + 1] + houtai[x + 1][y - 1]
					+ houtai[x + 1][y] + houtai[x + 1][y + 1] - 8 * '0';
				xianshi[x][y] = n + '0';
				dyboard(xianshi, H, L);
				win++;

			}

		}
		else
		{
			printf("输入坐标错误超出范围或错误，请重新输入！\n");
		}
	}
	if (win == h*l - LEISHU)
	{
		printf("恭喜你！扫雷成功!\n");
	}

}

void game()
{
	printf("扫雷开始\n");
	char houtai[HS][LS] = { 0 };
	char xianshi[HS][LS] = { 0 };
	//初始化表格
	cshboard(houtai, HS, LS, '0');
	cshboard(xianshi, HS, LS,'*');
	//打印棋盘
	//dyboard(houtai, H, L);
	dyboard(xianshi, H, L);
	//布置雷
	bzlei(houtai, H, L);
	dyboard(houtai, H, L);
	//扫雷
	slei(houtai, xianshi, H, L);

	
}

void saolei()
{
	int n=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
	    printf("请输入：>\n");
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
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while(n);

}
int main()
{
	saolei();
	return 0;
}