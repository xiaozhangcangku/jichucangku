#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

long long zhuanhuan(int a)//进行16进制的输入，并且转换为10进制
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
	scanf("%d", &a);//进行输入几行
	for (int i = 0; i < a; i++)
	{
		arr[i] = zhuanhuan(a);
	}
	for (int i = 0; i < a; i++)//进行10进制转换为8进制
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
