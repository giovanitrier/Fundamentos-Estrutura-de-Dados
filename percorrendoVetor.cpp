#include <stdio.h>

int main(void){
	
	int vet[10]={1,2,3,4,5,6,7,8,9,10}, i,*p;
	
	
	for(i=0;i<10;i++){
		p = &vet[i];
		printf("p = %d\n",*p);
	}
	
}
