#include <stdio.h>
#include <stdlib.h> 
int Intyp,NumA,NumB,NumC;
int main(){
	for (int time = 0 ; time < 5 ; time++){		//總共執行5次 
		scanf("%d%d%d%d",&Intyp,&NumA,&NumB,&NumC);
		if (Intyp == 0){		//找最小 
			int MinNum = NumA;
			if (NumB < MinNum)
				MinNum = NumB;
			if (NumC < MinNum)
				MinNum = NumC;
			printf("%d\n",MinNum);				
		}
		else if (Intyp == 1){	//找最大 
			int MaxNum = NumA;
			if (NumB > MaxNum)
				MaxNum = NumB;
			if (NumC > MaxNum)
				MaxNum = NumC;
			printf("%d\n",MaxNum);
		}
	}
	system("pause");
}
