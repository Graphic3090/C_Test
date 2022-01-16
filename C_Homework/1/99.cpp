#include<stdio.h>
#include<stdlib.h>
int M_Sum; //M1+M2ぇ羆㎝ 
int M1;  //砆计 
int M2;  //计 
int main(void)
{
	//┮Τ M1+M2 计そΑ 
	//羆㎝ 3 秨﹍秈︽碻吏ㄢ单 17 挡(9+8=17) 
	for (M_Sum=3;M_Sum<=17;M_Sum=M_Sum+2)   
	{
		// 眖砆计M11秨﹍秈︽碻吏M1羆┪9挡
		// M1ゲ礛M_Sumぶ 1M2ぃ眔0 
		for (M1=1;M1<M_Sum&&M1<10;M1++)
		{
			M2=M_Sum-M1; //M2=M_Sum-M1M1+M2=M_Sum 
			// M2ぃ眔9 
			if (M2<10) 
			{
			printf("%dX%d=%d ",M1,M2,M1*M2);	
			}
		}
	}
	//逞緇ぇそΑ: ┮Τ M1+M2 案计そΑ
	//:计+计=案计案计+案计=案计计+案计=计
	//眔:逞緇ぇそΑゲ计+计/案计+案计 
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
