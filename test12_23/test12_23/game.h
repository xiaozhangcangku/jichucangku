#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define HANG 9
#define LIE 9
#define HANGS HANG+2
#define LIES LIE+2
void chushi(char jiemian[HANGS][LIES], char lei[HANGS][LIES],int hang, int lie);
void jiemian(char jiemian[HANG][LIE], int hang, int lie);
void lei1(char lei[HANGS][LIES], int hang, int lie);
char pailei(char arr[HANGS][LIES], char lei[HANGS][LIES]);

