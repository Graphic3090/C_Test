#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	while(1)
	{
		char LetterList[52];	//字母索引
		int LetterNum[52];		//每個字母數量 
		for (int i = 0 ; i<26 ; i++)	//建立字母索引 
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
			//每一個字逐漸比對 
			for (int count = 0 ; count<strlen(Data) ; count++)
			{
				for (int scan = 0 ; scan<52 ;scan++)
				{
					if (Data[count] == LetterList[scan])
					{
						LetterNum[scan]++;
						break;	//如果比對符合則提早跳出迴圈 
					}	
				}	
			}
		}
		//泡沫排序 
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
