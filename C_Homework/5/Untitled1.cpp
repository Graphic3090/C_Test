#include<stdio.h>
#include<stdlib.h>
int run_time;
int _form,MINnum,MAXnum;
int total;

int main(void)
{
	scanf("%d",&run_time);	//����N�� 
	for (int time=0;time<run_time;time++)
	{
		scanf("%d%d%d",&_form,&MINnum,&MAXnum);
		if (_form==1)	//����[�` 
		{
			int num=MINnum;
			while(num!=MAXnum)
			{
				total=total+num;
				if (num<MAXnum)
					num++;
				else
					num--;
			}
			total=total+num;
		}
		else if (_form==2)
		{	//���歼�n 
			total=1;	//�_�l��1,���o��0 
			int num=MINnum;
			while(num!=MAXnum)
			{
				total=total*num;
				if (num<MAXnum)
					num++;
				else
					num--;
			}
			total=total*num;
		}
		printf("%d\n",total);
		total=0;	
	}
	system("pause");	
	return 0;

}
