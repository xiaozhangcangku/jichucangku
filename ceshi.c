#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void caidan()
{
	printf("***************\n");
	printf("输入1开始游戏，输入0退出游戏\n");
	printf("***************\n");
}
void game()
{
	int y = 1;
	char a;
	char qipan[HANG][LIE] = {0};//先设置棋盘里面都是空格
	sqipan(qipan, HANG, LIE);//生成棋盘
	dqipan(qipan,HANG,LIE);//打印棋盘
	while (1)
	{
		wanxiaqi(qipan,HANG,LIE);//玩家下棋
		dqipan(qipan, HANG, LIE);
		a = win(qipan, HANG, LIE);//判断输赢
		if (a != 'C')
		{
			break;
		}
		cpxiaqi(qipan, HANG, LIE);//电脑下棋
		dqipan(qipan, HANG, LIE);
		a = win(qipan, HANG, LIE);//判断输赢
		if (a != 'C')
		{
			break;
		}
	}
	if (a == '*')
	{
		printf("玩家赢了\n");
	}
	else if(a == 'o')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int a = 0;
	do
	{
		caidan();
		printf("请选择:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("开始游戏\n\n");
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (a);
}


int main()
{
	test();
	return 0;
}