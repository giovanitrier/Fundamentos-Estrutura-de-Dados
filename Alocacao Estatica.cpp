//Alocação Estática

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[10],i;
	
	for (i = 0;i<10;i++){
	
		printf("Digite um numero para o indice %d ->",i);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<10;i++){
		printf("O numero do indice %d eh %d \n",i,vet[i]);
	}
	
}
