#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void caidan()
{
	printf("***************\n");
	printf("����1��ʼ��Ϸ������0�˳���Ϸ\n");
	printf("***************\n");
}
void game()
{
	int y = 1;
	char a;
	char qipan[HANG][LIE] = {0};//�������������涼�ǿո�
	sqipan(qipan, HANG, LIE);//��������
	dqipan(qipan,HANG,LIE);//��ӡ����
	while (1)
	{
		wanxiaqi(qipan,HANG,LIE);//�������
		dqipan(qipan, HANG, LIE);
		a = win(qipan, HANG, LIE);//�ж���Ӯ
		if (a != 'C')
		{
			break;
		}
		cpxiaqi(qipan, HANG, LIE);//��������
		dqipan(qipan, HANG, LIE);
		a = win(qipan, HANG, LIE);//�ж���Ӯ
		if (a != 'C')
		{
			break;
		}
	}
	if (a == '*')
	{
		printf("���Ӯ��\n");
	}
	else if(a == 'o')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int a = 0;
	do
	{
		caidan();
		printf("��ѡ��:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��ʼ��Ϸ\n\n");
			game();
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (a);
}


int main()
{
	test();
	return 0;
}