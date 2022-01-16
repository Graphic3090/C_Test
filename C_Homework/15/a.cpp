	#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		char arr[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //计ま 
		char output[100]; 	
		double input = 0;
		int b = 0,d = 0;
		int i = 0;
		scanf("%lf%d%d",&input,&b,&d);
		if (input<=0||b<=1||b>36||d<0||d>5)
			break;
		int input_int = int(input);
		while (input_int)	//祏埃猭 (计翴玡) 
		{
			output[i++] = arr[input_int%b];	//璸衡ぇ计穦沮计ま暗锣传 
			input_int = input_int/b;
		}
		for (int j = i-1; j>=0 ;j--)
		{
			printf("%c", output[j]);
		}
		if (d!=0)
			printf(".");
		double input_dot = input - int(input);	//计翴计 
		for (int j = 0; j<d ;j++)	//硈猭(计翴) 
		{
			input_dot = input_dot*b;
			printf("%c", arr[int(input_dot)]);	//璸衡ぇ计穦沮计ま暗锣传 
			input_dot = input_dot - int(input_dot);
		}
		
		
		printf("\n");
	}
}
