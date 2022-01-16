#include <stdio.h>
#include <stdlib.h>
int NUM_LIST[10];
int NUMA_LIST[10];
int SUMN,MIDN;
int temp;
int main(void)
{
	for (int T=0;T<3;T++)	//總共輸入3次 
	{
		
		for (int e=0;e<9;e++)
			scanf("%d",&NUM_LIST[e]);	
		
		for (int a=0;a<9;a++)	//計算總合 
			SUMN=SUMN+NUM_LIST[a];
			
		//對陣列進行資料排序(由小到大) 
		for(int i = 0; i < 9; i++) 
		{
	        for(int j = i; j < 9; j++) 
			{
	            if( NUM_LIST[j] < NUM_LIST[i] ) 
				{
	                temp = NUM_LIST[j];
	                NUM_LIST[j] = NUM_LIST[i];
	                NUM_LIST[i] = temp;
	            }
	        }
    	}
		MIDN=NUM_LIST[4];	//中位數(第5個) 
		printf("%d %d",SUMN,MIDN);
		printf("\n");
		SUMN=0;
		temp=0;
	}
	system("pause");
	return(0);
} 
