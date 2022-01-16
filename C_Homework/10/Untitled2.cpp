#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		int Mode , Size , White;
		scanf("%d%d",&Mode,&Size);
		if ((Mode != 1 && Mode != 2)||Mode <= 0)
			break;
		switch (Mode){
			case 1:		//倒直角三角形
				//先印空白，再印* 
				for (int Len = 0;Len<Size;Len++)
				{
					for (White = 0;White<Len;White++)
						printf(" ");	//根據行數作出變化(當第n層時印n-1個空白) 
					for (int Star = Size - White;Star>0;Star--)
						printf("*");	//根據行數作出變化(從總層數個逐漸減少) 
					printf("\n");					
				}		
				break;
			case 2:
				for (int Len = 1;Len<=Size;Len++)
				{
					for (White = Size - Len;White > 0;White--)
						printf(" ");	//根據行數作出變化(從總層數個逐漸減少)
					for (int Star = 1 ;Star<=Len;Star++)
						printf("* ");	// 據行數作出變化(當第n層時印n-1個* ) 
					printf("\n");										
				}
				break;
		}
	}
}
