#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	struct date{
		int day;
		int month;
	};
	
	struct date aDate,*pDate;
	
	//Acesso via ponteiro.
	
	pDate = &aDate;
	pDate -> day = 21;
	pDate -> month = 10;
	
	printf("Data = %d/%d \n",pDate -> day,pDate->month);
	
	//Acesso direto.
	
	aDate.day = 25;
	aDate.month = 5;
	
	printf("Data = %d/%d \n",aDate.day,aDate.month);
		
	return 0;
}
