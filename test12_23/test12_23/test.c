#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void caidan()
{
	printf("*********************************************\n");
	printf("*******输入1开始游戏，输入0退出游戏**********\n");
	printf("*********************************************\n");
}
void game()
{
	char arr[HANGS][LIES] = { 0 };//表面格子
	char lei[HANGS][LIES] = { 0 };//隐藏的雷的一个格子
	chushi(arr,lei,HANGS,LIES);
	lei1(lei, HANG, LIE);//埋藏的雷
	//jiemian(lei, HANG, LIE);//打印布置雷的界面
	while (1)
	{
		jiemian(arr, HANG, LIE);//扫雷界面
		char a =pailei(arr, lei);//开始进行排雷
		if (a == '*')
		{
			break;
		}
	}
}
void xuanze()
{ 
	int u = 0;
	do
	{
		caidan();
		printf("请输入:>");
		scanf("%d", &u);
		switch (u)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (u);
}
int main()
{
	srand((unsigned int)time(NULL));
	xuanze();
	return 0;
}