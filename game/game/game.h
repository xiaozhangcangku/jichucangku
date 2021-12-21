#define _CRT_SECURE_NO_WARNINGS
#define HANG 3 //定义棋盘的大小
#define LIE 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sqipan(char qipan[HANG][LIE], int hang, int lie);//声明函数
void dqipan(char qipan[HANG][LIE], int hang, int lie);
void wanxiaqi(char qipan[HANG][LIE], int hang, int lie);
void cpxiaqi(char qipan[HANG][LIE], int hang, int lie);
char win(char qipan[HANG][LIE], int hang, int lie);