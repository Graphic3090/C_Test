#include<stdio.h>
int num1,num2,num3,MINnum;
int MINmultiple;

int main(void)
{
	for (int time=0;time<3;time++)
	{
		MINmultiple=0;
		int count=1;
		//т程计 
		scanf("%d%d%d",&num1,&num2,&num3);
		if (num2<num1)
			MINnum=num2;
		else
			MINnum=num1;
		if (num3<MINnum)
			MINnum=num3;
		//眖程计讽膀┏ウ计碝т程そ计 
		while(1)
		{
			MINmultiple=MINnum*count;
			if ((MINmultiple%num1==0)&&(MINmultiple%num2==0)&&(MINmultiple%num3==0))
				break;
			count++;
		}
		printf("%d\n",MINmultiple);
	}
} 
