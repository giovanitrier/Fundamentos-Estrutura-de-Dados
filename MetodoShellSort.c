#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Melhores sequências de h:1,4,13,40,121,364,1093,3280.
//Não Estável
// Para s=1 h(s)=1 Para s>1 h(s) = 3h(s-1)+1;

void shellSort(int A[],int n){
	int i,j,h,aux;
	for(h=1;h<n;h=3*h+1);
	while(h>0){
		h=(h-1)/3;
		for(i=h;i<n;i++){
			aux=A[i];
			j=i;
			while(A[j-h]>aux){
				A[j]=A[j-h];
				j-=h;
				if(j<h)
				break;
			}
			A[j]=aux;
		}
	}
}

int main(){
	
	int i;
	
	int vetor[10] = {4,5,8,7,6,9,5,10,11,12};
	
	for(i=0;i<=9;i++){
		printf("%d ",vetor[i]);
	}
	
	shellSort(vetor,10);
	
	printf("\nApos a ordencao\n");
	
	for(i=0;i<=9;i++){
	printf("%d ",vetor[i]);
	}
	
	return 0;	
}
