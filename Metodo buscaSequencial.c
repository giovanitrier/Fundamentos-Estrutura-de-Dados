#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscaSequencial(int A[],int n,int x){
	
	A[n]=x;
	int i;
	for(i=0;x !=A[i];i++);
	if(i<n){
	printf("%d",A[i]);
	return(i);
	}
	else{
	printf("sentinela encontrado");
	return(-1);
	}
}

int main(){
	
	int vetor[10] = {4,5,8,7,6,9,5,10,11,12};
	
	buscaSequencial(vetor,10,15);
	
	return 0;
}
