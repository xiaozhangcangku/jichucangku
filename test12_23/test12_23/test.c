#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void caidan()
{
	printf("*************************************\n");
	printf("*******����1��ʼ��Ϸ������0�˳���Ϸ\n");
	printf("*************************************\n");
}
void game()
{
	char arr[HANGS][LIES] = { 0 };//�������
	char lei[HANGS][LIES] = { 0 };//���ص��׵�һ������
	chushi(arr,lei,HANGS,LIES);
	jiemian(arr, HANG, LIE);//ɨ�׽���
	lei1(lei, HANG, LIE);//��ص���
	pailei(arr, lei, HANGS,LIES);//��ʼ��������
	jiemian(arr, HANG, LIE);
	
}
void xuanze()
{ 
	int u = 0;
	do
	{
		caidan();
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
	xuanze();
	return 0;
}