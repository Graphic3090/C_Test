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
		int _Size = Size*2-1;		//�p��W��(��J*2-1�Y���ӯx�}�j�p) 
		int Square[_Size][_Size];	//�]�w�x�}�W�� 
		//����:���r�𪺭����ϡA�@�h�@�h���W�Q 
		for(int floor=0;floor <= Size;floor++)	//�h�� 
		{
			//����:�Ĥ@�h�O�����񺡡A����C�@�h���d��|�C�C���(�_�l-1 & ����-1) 
			for(int SL = floor;SL < _Size-floor ; SL++)
			{
				for(int SR = floor;SR < _Size-floor ; SR++)
				{
					Square[SL][SR]= Size - floor;	//�O�n�s���Ʀr�̾ڼh�ƨM�w(�C�C�ܤp) 
				}
			}
		}
		//��X 
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
