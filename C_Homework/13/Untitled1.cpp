#include <stdio.h>
#include <stdlib.h>
void FifstT(int);
void SecondT(int);
void ThirstT(int);
void _printS(int);
int main()
{
	while(1)
	{
		int mode,size;
		scanf("%d%d",&mode,&size);
		if (((mode!=1)&&(mode!=2))||(size<=0))
			break;	
		if (mode==1)
		{
			_printS(size);	
		}
		else
		{
			FifstT(size);
			SecondT(size);
			ThirstT(size);	
		}
	}
}
void FifstT(int size)
{
	int i;
	int j = size*3-1;
	for (i=1;i<=size;i++,j--)
	{
		for (int k=j;k>0;k--)
			printf("^");
		for (int k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}
}
void SecondT(int size)
{
	int i;
	int j = size*3-1;
	for (i=1;i<=size*2;i++,j--)
	{
		for (int k=j;k>0;k--)
			printf("^");
		for (int k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}
}
void ThirstT(int size)
{
	int i;
	int j = size*3-1;
	for (i=1;i<=size*3;i++,j--)
	{
		for (int k=j;k>0;k--)
			printf("^");
		for (int k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}
}
void _printS(int size)
{
	char Square[size*2-1][size*2-1];
	int i,j;
	//清空陣列 
	for (i = 0;i<size*2-1;i++) 
	{
		for (j = 0;j<size*2-1;j++)
		{
			Square[i][j]=' ';
		}
	}
	//畫"-" 
	for (i=0;i<=size*2-1;i++)
	{		
		Square[0][i]='-';
	}
	for (i=0;i<=size*2-1;i++)
	{		
		Square[size*2-2][i]='-';
	}
	//畫"|"  
	for (i=1;i<size*2-2;i++)
	{
		for (j=0;j<=size*2-2;j+=size*2-2)
		{
		Square[i][j]='|';
		}
	}
	//畫"\" 
	for (i=1,j=1;i<size-1;i++,j++)
	{
		Square[i][j]='\\';
	}
	for (i=size,j=size;i<size*2-2;i++,j++)
	{
		Square[i][j]='\\';
	}
	//畫"/"
	for (i=1,j=size*2-3;i<size-1;i++,j--)
	{
		Square[i][j]='/';
	}
	for (i=size,j=size-2;i<size*2-2;i++,j--)
	{
		Square[i][j]='/';
	}
	//畫"*"	
	Square[size-1][size-1]='*';
	//畫"@"
	for (i=2;i<size;i++)
	{
		for (j=1;j<i;j++)
			Square[i][j]='@';
	}
	for (i=size;i<size*2-2;i++)
	{
		for (j=(size*2-3-i);j>0;j--)
			Square[i][j]='@';
	}
	//畫"&"
	int k;
	for (i=1,k=(size*2-1)-2;i<size-1;i++,k=k-1)
	{
		for (j=i+1;j<k;j++)
			Square[i][j]='&';
	}		
	//畫"%"	
	for (i=size,k=1,j=size-1;i<size*2-2;i++,k+=2,j=j-1)
	{
		for (int y=0;y<k;y++)
			Square[i][j+y]='%';
	}
	//畫"$"	
	for (i = 0;i<size*2-1;i++)
	{
		for (j = 0;j<size*2-1;j++)
		{
			if (Square[i][j]==' ')
			Square[i][j]='$';
		}	
	}
	
	for (i = 0;i<size*2-1;i++)
	{
		for (j = 0;j<size*2-1;j++)
		{
			printf("%c",Square[i][j]);
		}
		printf("\n");	
	}	
}
