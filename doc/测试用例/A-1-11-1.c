/*A-1-11-1 ���������������ͬʱ���г�ʼ��*/
//�����������㲻��������extern ��������ʱ�ǲ����Գ�ʼ����
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct node{
	int item;
	float score;
};

struct node head;  					 //��ʾ
int data3;  					 //��ʾ

enum Etype {
	RED = 0,
	WHITE,
	BLUE
} edata;   					 //��ʾ

int main(void)
{
	int data1;  					 //��ʾ
	edata = BLUE;
	data3 = 32;
	data1 = data3;
	head.item = 43;
	head.score = 122.23;
    printf("%d,%d,%d,%d,%f\n",edata,data1,data3,head.item,head.score);
    return (0);
}
