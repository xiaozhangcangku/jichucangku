#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;
//	printf("%p\n", *p1);
//	printf("%p", p); // ����ָ��
//}

//int main()//ָ������
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* o[] = { &a,&b,&c };//���Ϊָ������-�������ָ�������
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(o[i]));
//	}
//	printf("\n");
////-----------------------
//	int arr[] = { 1,2,3 };
//	int* p[] = { &arr[0],&arr[1],&arr[2] };//����ָ�����飬��������������Ԫ�صĵ�ַ
//	//int** p1[] = { &p[0],&p[1],& p[2] };���ö���ָ��������һ��ָ������Ԫ�صĵ�ַ
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(p[i]));//������еĽ����ò����ǽ�ָ�������ڵ�Ԫ�ؽ��н�����
//		//printf("%d ", **p1[i]);������ָ�������ڵ�Ԫ����һ��ָ�����飬��Ҫ���һ��ָ��������Ԫ��
//	}                            //��ֵ��Ҫ�������εĽ����ò���
//	
//	return 0;
//}

long long zhuanhuan(int a)//����16���Ƶ����룬����ת��Ϊ10����
{
	char b[50];
	int i = 0,p[100];
	long long shi = 0;
		scanf("%s", b);
		for (int i = 0; i < strlen(b); i++)
		{
			if (b[i] >= 48 && b[i] <=57)
			{
				p[i] = b[i] - 48;
			
			}
			else if (b[i] >= 65 && b[i] <= 70)
			{
				p[i] = b[i] - 65 + 10;
			}
		}
		for (int i = 0; i < strlen(b); i++)
		{
			shi += p[i] * pow(16, strlen	(b) - 1 - i);
		}
		return shi;	
}
int main()
{
	int a = 0,arr[10],i1 = 0;
	long long shi1[10];
	scanf("%d", &a);//�������뼸��
	for (int i = 0; i < a; i++)
	{
		arr[i] = zhuanhuan(a);
	}
	for (int i = 0; i < a; i++)//����10����ת��Ϊ8����
	{
			do {
				shi1[i1] = arr[i] % 8;
				arr[i] = arr[i] / 8;
				i1++;
				} while (arr[i] / 8 != 0);
			shi1[i1] = arr[i] % 8;
			for (int i2 = i1; i2 >= 0; i2--)
			{
				printf("%d", shi1[i2]);
			}
			printf("\n");
			i1 = 0;
	}
	return 0;
}
