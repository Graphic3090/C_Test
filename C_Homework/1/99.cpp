#include<stdio.h>
#include<stdlib.h>
int M_Sum; //M1+M2���`�M 
int M1;  //�Q���� 
int M2;  //���� 
int main(void)
{
	//�Ҧ� M1+M2 ���_�ƪ����� 
	//�H�`�M 3 �}�l�i��`���æb��ۥ[�ȵ��� 17�� ����(9+8=17) 
	for (M_Sum=3;M_Sum<=17;M_Sum=M_Sum+2)   
	{
		// �q�Q����M1��1�}�l�i��`���æbM1�p���`�ۥ[�ȩΤj��9�ɵ���
		// M1���M�p��M_Sum�ܤ� 1�A�]��M2���o��0�C 
		for (M1=1;M1<M_Sum&&M1<10;M1++)
		{
			M2=M_Sum-M1; //�OM2=M_Sum-M1�A�]��M1+M2=M_Sum 
			// M2���o�j��9 
			if (M2<10) 
			{
			printf("%dX%d=%d ",M1,M2,M1*M2);	
			}
		}
	}
	//�Ѿl������: �Ҧ� M1+M2 �����ƪ�����
	//�w��:�_��+�_��=���ơA����+����=���ơA�_��+����=�_��
	//�o��:�Ѿl�����������_��+�_��/����+���� 
	for (M1=1;M1<=9;M1++)
	{
		if (M1%2==0)
		{
			for (M2=2;M2<=9;M2=M2+2)
			{
				printf("%dX%d=%d ",M1,M2,M1*M2);
			}
		}
		else
		{
			for (M2=1;M2<=9;M2=M2+2)
			{
				printf("%dX%d=%d ",M1,M2,M1*M2);
			}
		}
	}
	system("pause");
	return(0);
	
 } 
