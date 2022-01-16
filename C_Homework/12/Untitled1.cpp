//靈感來自來西 & 科融 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
	int _lenth,row,count,_count;	
	int letter,size;
	scanf("%d%d",&letter,&size);
	if ((letter<=0)||(letter>=27)||(size<1))
		break;
	char _quater[size][size];	//只存1/4個正方形，剩下的3/4依據位置做翻轉
	//概念:鋪金字塔 
	for(_lenth = 0;_lenth<size;_lenth++)
	{
		count = 0;
		_count = 0;
		for(row = 0;row < size;row++)
		{
			_quater[_lenth][row]=count+65; //轉換ASCII (65 = 'A') 
			if (_count<_lenth)	//根據層數做轉換 
				count++;
				_count++;
			if (count >= letter)	//如果超出上字母上限 
				count = 0;
		}
	}
	for(_lenth = size-1;_lenth >= 0;_lenth--)
	{
		//左上角 
		for(row = size-1;row >= 0;row--)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		//右上角 
		for(row = 1;row < size;row++)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		printf("\n");
	}

	for(_lenth = 1;_lenth < size;_lenth++)
	{
		//左下角 
		for(row = size-1;row >= 0;row--)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		//右下角 
		for(row = 1;row < size;row++)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		printf("\n");
	}
	}
}
