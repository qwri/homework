/*��ֹ�ظ�����*/
#ifndef _MODULE_INCLUDE_H
#define _MODULE_INCLUDE_H

#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
typedef struct Stu
{
	char num[20];
	char name[10];
	float gs;//ƽʱ�ɼ�
	//float egs;ʵ��ɼ�
	float fgs;//��ĩ�ɼ�
	float tgs;//�ܳɼ�
	int ranking;
}Ss;

Ss *ReadData(int *N);
void Sort(Ss S[], int n);
void Search(char numb[20],Ss S[],int n);
//����ƽ���ɼ��ͷ���
float av(Ss S[], int n);
float var(float aver, Ss S[], int n);

#endif