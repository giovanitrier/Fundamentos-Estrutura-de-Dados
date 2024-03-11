#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//n eh o tamanho do vetor
void InsertionSort(int A[], int n) {
    int i = 0;
    int j = 1;
    int aux = 0;

    while (j < n) {
        aux = A[j];
        i = j - 1;
        while ((i >= 0) && (A[i] > aux)) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = aux;
        j = j + 1;
    }
}

int main(){
	
	int i;
	
	int vetor[10] = {4,5,8,7,6,9,5,10,11,12};
	
	for(i=0;i<=9;i++){
		printf("%d ",vetor[i]);
	}
	
	InsertionSort(vetor,10);
	
	printf("\nApos a ordencao\n");
	
	for(i=0;i<=9;i++){
	printf("%d ",vetor[i]);
	}
	
	return 0;	
}
