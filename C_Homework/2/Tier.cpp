#include<stdio.h>
#include<stdlib.h>
int _Input[10];
int i;
int S_rank,A_rank,B_rank,C_rank,D_rank,E_rank; //�C�Ӷ��żƶq 
int main(void)
{
	//��J10�ӭ� 
	for (i=0;i<10;i++)
	{
		scanf("%d",&_Input[i]);
	}
	//��10�ӭȰ����ŧP�w 
	for (i=0;i<10;i++)
	{
		if (_Input[i]==100)
		{
			S_rank++;	
		}
		else if (_Input[i]>=90)
		{
			A_rank++;	
		}
		else if (_Input[i]>=80)
		{
			B_rank++;
		}
		else if (_Input[i]>=70)
		{
			C_rank++;
		}
		else if (_Input[i]>=60)
		{
			D_rank++;
		}
		else if (_Input[i]>=0)
		{
			E_rank++;
		}
	}
	//�p�G�Ӷ��Ū��ƶq>1�h��ܼƶq 
	if(S_rank!=0)
	{
		printf("%dS\n",S_rank);
	}
	if(A_rank!=0)
	{
		printf("%dA\n",A_rank);
	}
	if(B_rank!=0)
	{
		printf("%dB\n",B_rank);
	}
	if(C_rank!=0)
	{
		printf("%dC\n",C_rank);
	}
	if(D_rank!=0)
	{
		printf("%dD\n",D_rank);
	}
	if(E_rank!=0)
	{
		printf("%dE\n",E_rank);
	}
	system("pause");
}
