#include <stdio.h>
#include <stdlib.h>
int NUM_LIST[10];
int NUMA_LIST[10];
int SUMN,MIDN;
int temp;
int main(void)
{
	for (int T=0;T<3;T++)	//�`�@��J3�� 
	{
		
		for (int e=0;e<9;e++)
			scanf("%d",&NUM_LIST[e]);	
		
		for (int a=0;a<9;a++)	//�p���`�X 
			SUMN=SUMN+NUM_LIST[a];
			
		//��}�C�i���ƱƧ�(�Ѥp��j) 
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
		MIDN=NUM_LIST[4];	//�����(��5��) 
		printf("%d %d",SUMN,MIDN);
		printf("\n");
		SUMN=0;
		temp=0;
	}
	system("pause");
	return(0);
} 
