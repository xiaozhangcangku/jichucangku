#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void caidan()
{
	printf("*********************************************\n");
	printf("*******����1��ʼ��Ϸ������0�˳���Ϸ**********\n");
	printf("*********************************************\n");
}
void game()
{
	char arr[HANGS][LIES] = { 0 };//�������
	char lei[HANGS][LIES] = { 0 };//���ص��׵�һ������
	chushi(arr,lei,HANGS,LIES);
	lei1(lei, HANG, LIE);//��ص���
	//jiemian(lei, HANG, LIE);//��ӡ�����׵Ľ���
	while (1)
	{
		jiemian(arr, HANG, LIE);//ɨ�׽���
		char a =pailei(arr, lei);//��ʼ��������
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
		printf("������:>");
		scanf("%d", &u);
		switch (u)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
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