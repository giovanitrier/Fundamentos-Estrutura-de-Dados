#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Selecao_Direta(int A[],int n){
	int i,j,aux,menor;
	for(i=0;i<n-1;i++){
		menor = i;
		for(j=i+1;j<n;j++){
			if(A[j]<A[menor])
			menor = j;
		}
		aux =A[i];
		A[i]= A[menor];
		A[menor] = aux;
	}
}

int main(){
	
	int vetor[10] = {4,5,8,7,6,9,5,10,11,12};
	
	printf("Vetor Original\n");
	
	for(int i=0;i<=9;i++){
	printf("%d ",vetor[i]);
	}
	
	Selecao_Direta(vetor,10);
	
	printf("\nVetor Ordenado\n");
	
	for(int i=0;i<=9;i++){
	printf("%d ",vetor[i]);
	}
	
	return 0;
	
}
