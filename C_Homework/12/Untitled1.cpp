//�F�P�ӦۨӦ� & ��� 
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
	char _quater[size][size];	//�u�s1/4�ӥ���ΡA�ѤU��3/4�̾ڦ�m��½��
	//����:�Q���r�� 
	for(_lenth = 0;_lenth<size;_lenth++)
	{
		count = 0;
		_count = 0;
		for(row = 0;row < size;row++)
		{
			_quater[_lenth][row]=count+65; //�ഫASCII (65 = 'A') 
			if (_count<_lenth)	//�ھڼh�ư��ഫ 
				count++;
				_count++;
			if (count >= letter)	//�p�G�W�X�W�r���W�� 
				count = 0;
		}
	}
	for(_lenth = size-1;_lenth >= 0;_lenth--)
	{
		//���W�� 
		for(row = size-1;row >= 0;row--)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		//�k�W�� 
		for(row = 1;row < size;row++)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		printf("\n");
	}

	for(_lenth = 1;_lenth < size;_lenth++)
	{
		//���U�� 
		for(row = size-1;row >= 0;row--)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		//�k�U�� 
		for(row = 1;row < size;row++)
		{
			printf("%c",_quater[_lenth][row]);	
		}
		printf("\n");
	}
	}
}
