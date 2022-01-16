#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//使用遞回函式 
void get(int,int);
int main()
{
	while(1)
	{
		int input;
		int i = 0;		//總共位數 
		scanf("%d",&input);	
		if (input<=0)
			break;
		//計算位數 
		while((input/int(pow(10,i)))!=0)
		{
			i++;
		}
		get(input,i);
		printf("\n");
	}	
}
//輸入:剩餘位數 
void get(int input,int i)
{
	if (i==0)	//遞迴結束條件:位數 = 0 
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
