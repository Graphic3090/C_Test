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
			case 1:		//�˪����T����
				//���L�ťաA�A�L* 
				for (int Len = 0;Len<Size;Len++)
				{
					for (White = 0;White<Len;White++)
						printf(" ");	//�ھڦ�Ƨ@�X�ܤ�(���n�h�ɦLn-1�Ӫť�) 
					for (int Star = Size - White;Star>0;Star--)
						printf("*");	//�ھڦ�Ƨ@�X�ܤ�(�q�`�h�ƭӳv�����) 
					printf("\n");					
				}		
				break;
			case 2:
				for (int Len = 1;Len<=Size;Len++)
				{
					for (White = Size - Len;White > 0;White--)
						printf(" ");	//�ھڦ�Ƨ@�X�ܤ�(�q�`�h�ƭӳv�����)
					for (int Star = 1 ;Star<=Len;Star++)
						printf("* ");	// �ڦ�Ƨ@�X�ܤ�(���n�h�ɦLn-1��* ) 
					printf("\n");										
				}
				break;
		}
	}
}
