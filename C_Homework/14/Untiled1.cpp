#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int SplitNum(int);
int main()
{
	while(1)
	{
		int input = 0;
		scanf("%d",&input);
		if (input<=0)
			break;
		do
		{
			int P=0,Q=0;
			input = SplitNum(input);	
		}while (input>=10);
	}
	return 0;
}
int SplitNum(int N)
{
	int i,j;
	int _Len=0,_N = N;
	int p=0,q=0;
	//�p���� 
	while(N/int(pow(10,_Len))!=0)
		_Len++;
	
	for (i = _Len-1;i>=0;i--)
	{	
		if (i%2 == 0)	//�_�Ʀ�� 
		{
			p = p*10 + _N/int(pow(10,i));
			_N=_N-_N/int(pow(10,i))*int(pow(10,i));
		}
		else		//���Ʀ�� 
		{
			q = q*10 + _N/int(pow(10,i));
			_N=_N-_N/int(pow(10,i))*int(pow(10,i));
		}
	}
	printf("%d-%d=%d\n",p,q,p-q);	//�p��L�{ 
	return p - q;
}
