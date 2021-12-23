#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void chushi(char jiemian[HANGS][LIES],char pailei[HANGS][LIES],int hang,int lie)
{
	for (int i = 0; i < hang; i++)
	{
		for (int i1 = 0; i1 < lie; i1++)
		{
			jiemian[i][i1] = 'o';
		}
	}
}
void jiemian(char arr[HANG][LIE], int hang, int lie)//实现打印棋盘与格式
{
	for (int i = 1; i <= lie; i++)
	{
		printf("   %d", i);
	}
	printf("\n");
	printf("  ");
	for (int i = 0; i < lie; i++)
	{
		printf("----");
	}
	printf("\n");
	for (int i = 1; i <= hang; i++)
	{
		printf("%d", i);
		printf(" ");
		for (int i1 = 1; i1 <= lie; i1++)
		{
			printf(" %c |", arr[i][i1]);
		}
		printf("\n");
		if (i < hang )
		{
			printf("  ");
			for (int i2 = 1; i2 <= hang; i2++)
			{
				printf("---|");
			}
			printf("\n");
		}
	}
	printf("  ");
	for (int i = 0; i < lie; i++)
	{
		printf("----");
	}
	printf("\n\n");
}
void lei1(char lei[HANGS][LIES], int hang, int lie)
{
	int u = 1;
	do
	{
		srand((unsigned int)time(NULL));
		int a = rand() % HANG + 1;
		int b = rand() % LIE + 1;
		if (a >= 1 && b >= 1 && lei[a][b] != '*')
		{
			lei[a][b] = '*';
			u++;
		}
	} while (u < 10);
	printf("已经完成埋雷，共10个\n");
}

void pailei(char arr[HANGS][LIES], char lei[HANGS][LIES], int hangs, int lies)
{
	int c, d;
	printf("请输入你要排雷的坐标值,例如1 1\n");
	scanf("%d %d", &c, &d);
	//if (arr[c][d] == 'o')
	//{
	//	int l = 0;
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int i1 = 0; i1 < 3; i1++)
	//		{
	//			if (lei[c-2+i][d-2+i1] == '*' && arr[c][d] != '*')
	//			{
	//				++l;
	//			}
	//		}
	//	}
	//}
	arr[c][d] = 'l';
}
