#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	while(1)
	{
		char LetterList[52];	//�r������
		int LetterNum[52];		//�C�Ӧr���ƶq 
		for (int i = 0 ; i<26 ; i++)	//�إߦr������ 
		{
			LetterList[i] = 'A' + i;
			LetterList[i+26] = 'a' + i;
			LetterNum[i] = 0;
			LetterNum[i+26] = 0;
		}
		int DataNum;
		scanf("%d",&DataNum);
		if (DataNum <= 0)
			break;
		for (int i = 0 ; i<DataNum ; i++)
		{
			char Data[100];
			scanf("%s",Data);
			//�C�@�Ӧr�v����� 
			for (int count = 0 ; count<strlen(Data) ; count++)
			{
				for (int scan = 0 ; scan<52 ;scan++)
				{
					if (Data[count] == LetterList[scan])
					{
						LetterNum[scan]++;
						break;	//�p�G���ŦX�h�������X�j�� 
					}	
				}	
			}
		}
		//�w�j�Ƨ� 
		for(int i = 51; i > 0; i--)
		{
		    for(int j = 0; j <= i-1; j++)
		    {
		        if( LetterNum[j] < LetterNum[j+1])
		        {
		            int tmp = LetterNum[j];
		            LetterNum[j] = LetterNum[j+1];
		            LetterNum[j+1] = tmp;
		            
		            char ctmp = LetterList[j];
		            LetterList[j] = LetterList[j+1];
		            LetterList[j+1] = ctmp;
		        }
		    }
		}
		
		for(int i = 0 ; i < 52; i++)
			if (LetterNum[i]!=0)
				printf("%c(%d) ",LetterList[i],LetterNum[i]);
		printf("\n");
	}
}
