#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v[] = {1,2,3,4,5},i;
	
	for (i=0;i<5;i++){
		printf("%d",v[i]);
		printf("\n");
	}
	
	for (i=0;i<5;i++){
		printf("%d",*(v+i));
		printf("\n");
	}
	
}
