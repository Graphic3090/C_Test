#include<stdio.h>
#include<stdlib.h> 
int num1,num2,num3,MAXnum;
int MAXfactor;
int main(void)
{
	for (int time=0;time<3;time++)
	{
		scanf("%d%d%d",&num1,&num2,&num3);
		//��X�̤j�� 
		if (num2>num1)
			MAXnum=num2;
		else
			MAXnum=num1;
		if (num3>MAXnum)
			MAXnum=num3;
		//�q1�p���̤j�� 
		for (int count=1;count<=MAXnum+1;count++ )
		{
			//�T�̬Ҿ㰣�̬����]�� 
			if ((num1%count==0)&&(num2%count==0)&&(num3%count==0))
			MAXfactor=count;
		}
		printf("%d\n",MAXfactor);
	}
} 
