	#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		char arr[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //�Ʀr���� 
		char output[100]; 	
		double input = 0;
		int b = 0,d = 0;
		int i = 0;
		scanf("%lf%d%d",&input,&b,&d);
		if (input<=0||b<=1||b>36||d<0||d>5)
			break;
		int input_int = int(input);
		while (input_int)	//�u���k (�p���I�H�e) 
		{
			output[i++] = arr[input_int%b];	//�p�⤧�᪺�Ʀr�|�ھڼƦr���ް��ഫ 
			input_int = input_int/b;
		}
		for (int j = i-1; j>=0 ;j--)
		{
			printf("%c", output[j]);
		}
		if (d!=0)
			printf(".");
		double input_dot = input - int(input);	//�p���I�H�᪺�Ʀr 
		for (int j = 0; j<d ;j++)	//�s���k(�p���I�H��) 
		{
			input_dot = input_dot*b;
			printf("%c", arr[int(input_dot)]);	//�p�⤧�᪺�Ʀr�|�ھڼƦr���ް��ഫ 
			input_dot = input_dot - int(input_dot);
		}
		
		
		printf("\n");
	}
}
