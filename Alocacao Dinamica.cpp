#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *vet,i;
	
	vet = (int*) malloc(10*sizeof(int));
	
	for (i = 0;i<10;i++){
		printf("Digite um numero para a posicao %d ->",i);
		scanf("%d",&vet[i]);
	}
	
	for (i=0;i<10;i++){
		printf("O valor do indice %d eh %d \n",i,vet[i]);
	}
	
	free(vet); // Libera o espaço em memoria.
	
	return 0;
}
