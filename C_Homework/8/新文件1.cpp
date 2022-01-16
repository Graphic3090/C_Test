#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		int DATAnum;
		int command;
		int minnum,maxnum;
		scanf("%d%d",&DATAnum,&command);
		if (DATAnum <= 0)
			break;
		int DATAarr[DATAnum];
		for (int i = 0 ; i < DATAnum ; i++)
		{
			scanf("%d",&DATAarr[i]);
			if (i == 0)
			{
				minnum = DATAarr[i];
				maxnum = DATAarr[i];
			}
			else if (command == 1 && DATAarr[i]<minnum)
				minnum = DATAarr[i];
			else if (command == 2 && DATAarr[i]>minnum)
				maxnum = DATAarr[i];
		}
		if (command == 1)
		{
			printf("%d ",minnum);
			for (int i = 0 ; i < minnum ; i++)
			{
				printf("%c",'*');
			}
		}
		else if(command == 2)
		{
			printf("%d ",maxnum);
			for (int i = 0 ; i < maxnum ; i++)
			{
				printf("%c",'*');
			}
		}
		printf("\n");
	}
}
