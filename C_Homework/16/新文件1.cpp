#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//�ϥλ��^�禡 
void get(int,int);
int main()
{
	while(1)
	{
		int input;
		int i = 0;		//�`�@��� 
		scanf("%d",&input);	
		if (input<=0)
			break;
		//�p���� 
		while((input/int(pow(10,i)))!=0)
		{
			i++;
		}
		get(input,i);
		printf("\n");
	}	
}
//��J:�Ѿl��� 
void get(int input,int i)
{
	if (i==0)	//���j��������:��� = 0 
	{
		return;
	}
	else
	{
		int Na = input % int(pow(10,i-1));
		int Nb = input / int(pow(10,i));
		int N = Na+(Nb*int(pow(10,i-1)));
		int Ia = input % int(pow(10,i-1));
		int Ib = input % int(pow(10,i));
		int I = (Ib - Ia)/int(pow(10,i-1));
		
		if (N%I==0)
			printf("%c",'T');
		else 
			printf("%c",'F'); 
		get(input,i-1);
	}
}
