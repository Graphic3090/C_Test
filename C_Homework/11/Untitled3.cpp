#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		int Size;
		scanf("%d",&Size);
		if (Size <= 0||Size >=10) 
		{
			break;
		}
		int _Size = Size*2-1;		//計算規模(輸入*2-1即為該矩陣大小) 
		int Square[_Size][_Size];	//設定矩陣規模 
		//概念:金字塔的俯視圖，一層一層往上鋪 
		for(int floor=0;floor <= Size;floor++)	//層數 
		{
			//公式:第一層是全部填滿，之後每一層的範圍會慢慢減少(起始-1 & 結束-1) 
			for(int SL = floor;SL < _Size-floor ; SL++)
			{
				for(int SR = floor;SR < _Size-floor ; SR++)
				{
					Square[SL][SR]= Size - floor;	//令要存的數字依據層數決定(慢慢變小) 
				}
			}
		}
		//輸出 
		for(int SL = 0;SL < _Size ; SL++)
			{
				for(int SR = 0;SR < _Size ; SR++)
				{
					printf("%d",Square[SL][SR]);
				}
				printf("\n");
			}
	}
}
