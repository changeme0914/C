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
	printf("***   1.��ʼ   ***\n");
	printf("***   0.����   ***\n");
	printf("******************\n");
}
////��ʼ�����11�ж�Ҫ��ʼ��
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
		printf("�������Ų����꣺> ����1 1\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= h&&y >= 1 && y <= l)
		{
			if (houtai[x][y] == '1')
			{
				printf("�㱻ը���ˣ���Ϸ������\n");
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
			printf("����������󳬳���Χ��������������룡\n");
		}
	}
	if (win == h*l - LEISHU)
	{
		printf("��ϲ�㣡ɨ�׳ɹ�!\n");
	}

}

void game()
{
	printf("ɨ�׿�ʼ\n");
	char houtai[HS][LS] = { 0 };
	char xianshi[HS][LS] = { 0 };
	//��ʼ�����
	cshboard(houtai, HS, LS, '0');
	cshboard(xianshi, HS, LS,'*');
	//��ӡ����
	//dyboard(houtai, H, L);
	dyboard(xianshi, H, L);
	//������
	bzlei(houtai, H, L);
	dyboard(houtai, H, L);
	//ɨ��
	slei(houtai, xianshi, H, L);

	
}

void saolei()
{
	int n=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
	    printf("�����룺>\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ�ɹ�\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while(n);

}
int main()
{
	saolei();
	return 0;
}