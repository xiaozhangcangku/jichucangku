#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void sqipan(char qipan[HANG][LIE],int hang, int lie)//ʵ�ֺ���
{
	for (int i = 0; i < hang; i++)
	{
		for (int i1 = 0; i1 < lie; i1++)
		{
			qipan[i][i1] =' ';
		}
	}
}
void dqipan(char qipan[HANG][LIE],int hang,int lie)//ʵ�ִ�ӡ�������ʽ
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
void wanxiaqi(char qipan[HANG][LIE], int hang, int lie) //ʵ���������
{

	printf("�����\n");
	while (1)
	{
		int x, y;
		printf("����:Ϊ\"������,�м��Կո����\"\n");
		printf("����:1 1������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (qipan[x-1][y-1] == ' ')
			{
				qipan[x - 1][y - 1] = '*';
				printf("���ڵ�����Ϊ:\n");
				break;
			}
			else if(qipan[x - 1][y - 1] == '*' || qipan[x - 1][y - 1] == 'o')
			{
				printf("�������Ѿ�������,���ٴ�����\n\n");
			}
			else
			{
				printf("���������겻���Ϲ涨ֵ");
			}
		}
		else
		{

		}
	}
}
void cpxiaqi(char qipan[HANG][LIE], int hang, int lie,int yi)//�������壬�����ж϶Է�������Լ����壬����������
{
	int i1 = 0;
	printf("������,���Ե�......\n");
	if (qipan[i1][i1 + 2] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1] == ' ')
	{
		qipan[i1 + 2][i1] = 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	else if (qipan[i1][i1 + 2] == 'o' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1] == 'o')
	{
		qipan[i1 + 1][i1 + 1] = 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	else if (qipan[i1][i1 + 2] == ' ' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1] == 'o')
	{
		qipan[i1][i1 + 2]= 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	else if (qipan[i1][i1] == 'o' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1 + 2] == ' ')
	{
		qipan[i1 + 2][i1 + 2] == 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	else if (qipan[i1][i1] == 'o' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1 + 2] == 'o')
	{
		qipan[i1 + 1][i1 + 1] = 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	else if (qipan[i1][i1] == ' ' && qipan[i1 + 1][i1 + 1] == 'o' && qipan[i1 + 2][i1 + 2] == 'o')
	{
		qipan[i1][i1] = 'o';
		printf("���ڵ�����Ϊ\n");
		goto ca;
	}
	for (int i = 0; i < hang; i++)
	{
		if (qipan[i][i1] == 'o' && qipan[i][i1 + 1] == 'o' && qipan[i][i1 + 2] == ' ')
		{
			qipan[i][i1 + 2] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
		else if (qipan[i][i1] == 'o' && qipan[i][i1 + 1] == ' ' && qipan[i][i1 + 2] == 'o')
		{
			qipan[i][i1 + 1] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
		else if (qipan[i][i1] == ' ' && qipan[i][i1 + 1] == 'o' && qipan[i][i1 + 2] == 'o')
		{
			qipan[i][i1] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
		else if (qipan[i1][i] == 'o' && qipan[i1 + 1][i] == 'o' && qipan[i1 + 2][i] == ' ')
		{
			qipan[i1 + 2][i] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
		else if (qipan[i1][i] == 'o' && qipan[i1 + 1][i] == ' ' && qipan[i1 + 2][i] == 'o')
		{
			qipan[i1 + 1][i] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
		else if (qipan[i1][i] == ' ' && qipan[i1 + 1][i] == 'o' && qipan[i1 + 2][i] == 'o')
		{
			qipan[i1][i] = 'o';
			printf("���ڵ�����Ϊ\n");
			goto ca;
		}
	}
	
		for (int i = 0; i < lie; i++)
		{
			if (qipan[i][i1] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[2][i] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i][2] == '*' && qipan[i1 + 1][i1 + 1] == ' ')
			{
				qipan[i1 + 1][i1 + 1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i][i1] == '*' && qipan[i][i1 + 1] == '*' && qipan[i][i1 + 2] == ' ')
			{
				qipan[i][i1 + 2] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i][i1] == '*' && qipan[i][i1 + 1] == ' ' && qipan[i][i1 + 2] == '*')
			{
				qipan[i][i1 + 1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i][i1] == ' ' && qipan[i][i1 + 1] == '*' && qipan[i][i1 + 2] == '*')
			{
				qipan[i][i1] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i] == '*' && qipan[i1 + 2][i] == ' ')
			{
				qipan[i1 + 2][i] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i1][i] == '*' && qipan[i1 + 1][i] == ' ' && qipan[i1 + 2][i] == '*')
			{
				qipan[i1 + 1][i] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
			else if (qipan[i1][i] == ' ' && qipan[i1 + 1][i] == '*' && qipan[i1 + 2][i] == '*')
			{
				qipan[i1][i] = 'o';
				printf("���ڵ�����Ϊ\n");
				goto ca;
			}
		}
		 if (qipan[i1][i1 + 2] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1] == ' ')
			{
			qipan[i1 + 2][i1] = 'o';
			printf("���ڵ�����Ϊ\n");
			}
		else if (qipan[i1][i1 + 2] == '*' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1] == '*')
			{
			qipan[i1 + 1][i1 + 1] = 'o';
			printf("���ڵ�����Ϊ\n");
			}
		else if (qipan[i1][i1 + 2] == ' ' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1] == '*')
			{
			qipan[i1][i1 + 2] = 'o';
			printf("���ڵ�����Ϊ\n");
			}
		else if (qipan[i1][i1] == '*' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1 + 2] == ' ')
			{
			qipan[i1 + 2][i1 + 2] = 'o';
			printf("���ڵ�����Ϊ\n");
			}
		else if (qipan[i1][i1] == '*' && qipan[i1 + 1][i1 + 1] == ' ' && qipan[i1 + 2][i1 + 2] == '*')
			{
			qipan[i1 + 1][i1 + 1] = 'o';
			printf("���ڵ�����Ϊ\n");
			}
		else if (qipan[i1][i1] == ' ' && qipan[i1 + 1][i1 + 1] == '*' && qipan[i1 + 2][i1 + 2] == '*')
		 {
			 qipan[i1][i1] = 'o';
			 printf("���ڵ�����Ϊ\n");
		 }
		else if (qipan[2][1] == '*' && qipan[1][2] == '*' && qipan[2][2] == ' ')
		 {
			 qipan[2][2] = 'o';
			 printf("���ڵ�����Ϊ\n");
		 }
		else if (qipan[2][1] == '*' && qipan[1][0] == '*' && qipan[2][0] == ' ' )
		 {
			 qipan[2][0] = 'o';
			 printf("���ڵ�����Ϊ\n");
		 }
		else if (qipan[0][1] == '*' && qipan[1][0] == '*' && qipan[0][0] == ' ')
		 {
			 qipan[0][0] = 'o';
			 printf("���ڵ�����Ϊ\n");
		 }
		else if (qipan[0][1] == '*' && qipan[1][2] == '*' && qipan[0][2] == ' ')
		 {
			 qipan[0][2] = 'o';
			 printf("���ڵ�����Ϊ\n");
		 }
		else
		{
			srand((unsigned int)time(NULL));
			int a = rand() % hang;
			int b = rand() % lie;
			if (qipan[a][b] == ' ')
			{
				qipan[a][b] = 'o';
				printf("���ڵ�����Ϊ\n");
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
	//		printf("���ڵ�����Ϊ\n");
	//		dqipan(qipan, HANG, LIE);
	//		win(qipan, HANG, LIE);
	//		goto jieshu;
	//	}
	//}
	//	jieshu:;		


}	

char win(char qipan[HANG][LIE], int hang, int lie)//�ж���Ӯ�����ҷ���һ��ֵ���������ж�
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