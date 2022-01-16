#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		int Size;
		scanf("%d",&Size);
		if (Size <= 0)
		{
			break;
		}
		for (int Multiplicand = 1;Multiplicand <= Size;Multiplicand++)	//­¼¼Æ 
		{
			for (int multiplier = 1; multiplier <= Size;multiplier++)	//³Q­¼¼Æ 
			{
				printf("%d*%d=%d ",Multiplicand,multiplier,Multiplicand*multiplier);
			}
			printf("\n");
		}
	}
}
