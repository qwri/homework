#include<stdio.h>
#include"module.h"
#include<stdlib.h> //����exit()
#include<string.h>
int main()
{
	int N=0;
	Ss *S;
	S=ReadData(&N);	
	Sort(S,N);
	char numb[20];
	printf("������Ҫ��ѯ��ѧ��ѧ��:\n");
	scanf_s("%s", &numb);
	Search(numb,N,S);
	int aver=av(S, N);
	printf("�ɼ���ƽ��ֵΪ��%f\n",aver);
	int vari = var(aver, S, N);
	printf("�ɼ��ķ���Ϊ��%lf\n",vari);
	return 0;
}