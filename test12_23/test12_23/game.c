#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void chushi(char arr[HANGS][LIES],char lei[HANGS][LIES],int hang,int lie)
{	
	for (int i = 0; i < hang; i++)
	{
		for (int i1 = 0; i1 < lie; i1++)
		{
			arr[i][i1] = '+';
			//lei[i][i1] = 'o';
		}
	}
}
void jiemian(char arr[HANGS][LIES], int hang, int lie)//ʵ�ִ�ӡ�������ʽ
{	
	for (int i = 0; i <= 9; i++)
	{
		printf("%d   ", i);
	}
	printf("\n\n");
	for (int i = 1; i <= 9 ; i++)
	{
		printf("%d   ", i);
		for (int i1 = 1;i1 <= 9; i1++)
		{
			printf("%c   ", arr[i][i1]);
			if (i1 == 9)
			{
				printf("\n\n");
			}
		}
	}
}
void lei1(char lei[HANGS][LIES], int hang, int lie)
{
	int u = 1;
	printf("ϵͳ��������,���Ե�.......\n\n");
	printf("      ɨ����Ϸ����\nÿ��һ�����ӣ������ϵ����ִ���Χ����������ӵ�8�������ж��ٸ���\n");
	do
	{
		int a = rand() % HANG + 1;
		int b = rand() % LIE + 1;
		if (a >= 1 && b >= 1 && lei[a][b] != '*')
		{
			lei[a][b] = '*';
			u++;
		}
	} while (u <= HANGS-1);
	printf("�Ѿ�������ף���%d��\n",u);
}

char pailei(char arr[HANGS][LIES], char lei[HANGS][LIES])
{
	int c, d;
	char l = 48;
	printf("��������Ҫ���׵�����ֵ,����1 1:>");
	scanf("%d %d", &c, &d);
	printf("���ڵĽ���Ϊ\n");
	if (arr[c][d] == '+')
	{
		for (int i = 0; i < 3; i++)
		{
			for (int i1 = 0; i1 < 3; i1++)
			{
				if (lei[c-1+i][d-1+i1] == '*' && arr[c][d] != '*')
				{
					++l;
				}
				else if (lei[c][d] == '*')
				{
					arr[c][d] = '*';
					jiemian(arr, HANG, LIE);//ɨ�׽���
					printf("�ȵ����ˣ�������\n");
					return '*';
				}
			}
		}

	}
	arr[c][d] = l;
}


