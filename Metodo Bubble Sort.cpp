#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Bolha(int A[],int n){
	
	int i,j,troca;
	
	for(i=n-1;i>=1;i--){
		for(j=0;j<i;j++){
			if(A[j]<A[j+1]){ //Para Ordem Crescente basta inserir aqui A[j]>A[J+1]
				troca = A[j];
				A[j]= A[j+1];
				A[j+1] = troca;
			}
		}
	}
	
}

int main(){
	
	int vetor[10] = {4,5,8,7,6,9,5,10,11,12};
	
	for(int i=0;i<=9;i++){
		printf("%d ",vetor[i]);
	}
	
	Bolha(vetor,10);
	
	printf("\nApos a ordencao\n");
	
	for(int i=0;i<=9;i++){
	printf("%d ",vetor[i]);
	}
	
	return 0;
	
}
