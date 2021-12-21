#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void sqipan(char qipan[HANG][LIE],int hang, int lie)//实现函数
{
	for (int i = 0; i < hang; i++)
	{
		for (int i1 = 0; i1 < lie; i1++)
		{
			qipan[i][i1] =' ';
		}
	}
}
void dqipan(char qipan[HANG][LIE],int hang,int lie)//实现打印棋盘与格式
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
	for (int i = 0; i < hang; i++)
	{
		printf("%d", i+1);
		printf(" ");
		for (int i1 = 0; i1 < lie; i1++)
		{
			printf(" %c |",qipan[i][i1]);
		}
		printf("\n");
		if (i < hang-1)
		{
			printf("  ");
			for (int i2 = 0; i2 < hang; i2++)
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
void wanxiaqi(char qipan[HANG][LIE], int hang, int lie) //实现玩家走棋
{

	printf("玩家走\n");
	while (1)
	{
		int x, y;
		printf("坐标:为\"行与列,中间以空格隔开\"\n");
		printf("例如:1 1请输入:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (qipan[x-1][y-1] == ' ')
			{
				qipan[x - 1][y - 1] = '*';
				printf("现在的棋盘为:\n");
				break;
			}
			else if(qipan[x - 1][y - 1] == '*' || qipan[x - 1][y - 1] == 'o')
			{
				printf("该坐标已经有棋子,请再次输入\n\n");
			}
			else
			{
				printf("不合理坐标不符合规定值");
			}
		}
		else
		{

		}
	}
}
void cpxiaqi(char qipan[HANG][LIE], int hang, int lie,int yi)//电脑走棋，并且判断对方走棋和自己走棋，来进行走棋
{
	int i1 = 0;
	printf("电脑走,请稍等......\n");
	if (qipan[i1][i1 + 2] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1] == ' ')
	{
		qipan[i1 + 2][i1] = 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	else if (qipan[i1][i1 + 2] == 'o' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1] == 'o')
	{
		qipan[i1 + 1][i1 + 1] = 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	else if (qipan[i1][i1 + 2] == ' ' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1] == 'o')
	{
		qipan[i1][i1 + 2]= 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	else if (qipan[i1][i1] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1 + 2] == ' ')
	{
		qipan[i1 + 2][i1 + 2] == 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	else if (qipan[i1][i1] == 'o' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1 + 2] == 'o')
	{
		qipan[i1 + 1][i1 + 1] = 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	else if (qipan[i1][i1] == ' ' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1 + 2] == 'o')
	{
		qipan[i1][i1] = 'o';
		printf("现在的棋盘为\n");
		goto ca;
	}
	for (int i = 0; i < hang; i++)
	{
		if (qipan[i][i1] == 'o' && qipan[i][i1 + 1] == 'o' && qipan[i][i1 + 2] == ' ')
		{
			qipan[i][i1 + 2] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
		else if (qipan[i][i1] == 'o' && qipan[i][i1 + 1] == ' ' && qipan[i][i1 + 2] == 'o')
		{
			qipan[i][i1 + 1] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
		else if (qipan[i][i1] == ' ' && qipan[i][i1 + 1] == 'o' && qipan[i][i1 + 2] == 'o')
		{
			qipan[i][i1] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
		else if (qipan[i1][i] == 'o' && qipan[i1 + 1][i] == 'o' && qipan[i1 + 2][i] == ' ')
		{
			qipan[i1 + 2][i] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
		else if (qipan[i1][i] == 'o' && qipan[i1 + 1][i] == ' ' && qipan[i1 + 2][i] == 'o')
		{
			qipan[i1 + 1][i] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
		else if (qipan[i1][i] == ' ' && qipan[i1 + 1][i] == 'o' && qipan[i1 + 2][i] == 'o')
		{
			qipan[i1][i] = 'o';
			printf("现在的棋盘为\n");
			goto ca;
		}
	}
	
		for (int i = 0; i < lie; i++)
		{
			if (qipan[i][i1] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[2][i] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i][2] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i][i1] == '*' && qipan[i][i1 + 1] == '*' && qipan[i][i1 + 2] == ' ')
			{
				qipan[i][i1 + 2] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i][i1] == '*' && qipan[i][i1 + 1] == ' ' && qipan[i][i1 + 2] == '*')
			{
				qipan[i][i1 + 1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i][i1] == ' ' && qipan[i][i1 + 1] == '*' && qipan[i][i1 + 2] == '*')
			{
				qipan[i][i1] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i] == '*' && qipan[i1 + 2][i] == ' ')
			{
				qipan[i1 + 2][i] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i] == ' ' && qipan[i1 + 2][i] == '*')
			{
				qipan[i1 + 1][i] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
			else if (qipan[i1][i] == ' ' && qipan[i1 + 1][i] == '*' && qipan[i1 + 2][i] == '*')
			{
				qipan[i1][i] = 'o';
				printf("现在的棋盘为\n");
				goto ca;
			}
		}
		 if (qipan[i1][i1 + 2] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1] == ' ')
			{
			qipan[i1 + 2][i1] = 'o';
			printf("现在的棋盘为\n");
			}
		else if (qipan[i1][i1 + 2] == '*' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1] == '*')
			{
			qipan[i1 + 1][i1 + 1] = 'o';
			printf("现在的棋盘为\n");
			}
		else if (qipan[i1][i1 + 2] == ' ' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1] == '*')
			{
			qipan[i1][i1 + 2] = 'o';
			printf("现在的棋盘为\n");
			}
		else if (qipan[i1][i1] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1 + 2] == ' ')
			{
			qipan[i1 + 2][i1 + 2] = 'o';
			printf("现在的棋盘为\n");
			}
		else if (qipan[i1][i1] == '*' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1 + 2] == '*')
			{
			qipan[i1 + 1][i1 + 1] = 'o';
			printf("现在的棋盘为\n");
			}
		else if (qipan[i1][i1] == ' ' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1 + 2] == '*')
		 {
			 qipan[i1][i1] = 'o';
			 printf("现在的棋盘为\n");
		 }
		else if (qipan[2][1] == '*' && qipan[1][2] == '*' && qipan[2][2] == ' ')
		 {
			 qipan[2][2] = 'o';
			 printf("现在的棋盘为\n");
		 }
		else if (qipan[2][1] == '*' && qipan[1][0] == '*' && qipan[2][0] == ' ' )
		 {
			 qipan[2][0] = 'o';
			 printf("现在的棋盘为\n");
		 }
		else if (qipan[0][1] == '*' && qipan[1][0] == '*' && qipan[0][0] == ' ')
		 {
			 qipan[0][0] = 'o';
			 printf("现在的棋盘为\n");
		 }
		else if (qipan[0][1] == '*' && qipan[1][2] == '*' && qipan[0][2] == ' ')
		 {
			 qipan[0][2] = 'o';
			 printf("现在的棋盘为\n");
		 }
		else
		{
			srand((unsigned int)time(NULL));
			int a = rand() % hang;
			int b = rand() % lie;
			if (qipan[a][b] == ' ')
			{
				qipan[a][b] = 'o';
				printf("现在的棋盘为\n");
			}
		}
	ca:;
	/*for (int i = 0; i < hang; i++)
	{
		for (int i1 = 0; i1 < lie; i1++)
		{
			if (qipan[i][i1] == '*' && qipan[i][i1+1] == '*')
			{
				if (qipan[i][i1+2] == ' ')
				{
					qipan[i][i1 + 2] = 'o';
					dqipan(qipan, HANG, LIE);
					win(qipan, HANG, LIE);
					goto jieshu;
				}
				else
				{
					qipan[i][i1 - 1] = 'o';
					dqipan(qipan, HANG, LIE);
					win(qipan, HANG, LIE);
					goto jieshu;
				}
			}
		}
	}*/
	//while (1)
	//{
	//	srand((unsigned int)time(NULL));
	//	int a = rand() % hang;
	//	int b = rand() % lie;
	//	if (qipan[a][b] == ' ' )
	//	{
	//		qipan[a][b] = 'o';
	//		printf("现在的棋盘为\n");
	//		dqipan(qipan, HANG, LIE);
	//		win(qipan, HANG, LIE);
	//		goto jieshu;
	//	}
	//}
	//	jieshu:;		


}	

char win(char qipan[HANG][LIE], int hang, int lie)//判断输赢，并且返回一个值，来进行判断
{
	int i1 = 0;
	for (int i = 0; i < hang; i++)
	{
			if (qipan[i][i1] == '*' && qipan[i][i1 + 1] == '*' && qipan[i][i1 + 2] == '*')
			{
				return '*';
			}
			else if (qipan[i][i1] == 'o' && qipan[i][i1 + 1] == 'o' && qipan[i][i1 + 2] == 'o')
			{
				return 'o';
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i] == '*' && qipan[i1 + 2][i] == '*')
			{
				return '*';
			}
			else if (qipan[i1][i] == 'o' && qipan[i1 + 1][i] == 'o' && qipan[i1 + 2][i] == 'o')
			{
				return 'o';
			}
	}
		if (qipan[i1][i1] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1 + 2] == '*')
		{
			return '*';
		}
		else if (qipan[i1][i1] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1 + 2] == 'o')
		{
			return 'o';
		}
		else if (qipan[i1][i1 + 2] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1] == '*')
		{
			return '*';
		}
		else if (qipan[i1][i1 + 2] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1] == 'o')
		{
			return 'o';
		}
		for (int i = 0; i < hang; i++)
		{
			for (int i2 = 0; i2 < lie; i2++)
			{
				if (qipan[i][i2] == ' ')
				{
					return 'C';
				}
			}
		}	
	return 'P';
}