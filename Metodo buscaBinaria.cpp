#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O Vetor precisa estar ordenado.

void buscaBinaria(char A[], int tamanho, char x) {
    int esquerda = 0;
    int direita = tamanho - 1;
    int boolean = 0;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (A[meio] == x) {
            printf("Caractere encontrado na posicao: %d\n", meio);
            boolean = 1;
            
            // Verificar outras ocorrências do caractere no lado esquerdo
            int i = meio - 1;
            while (i >= 0 && A[i] == x) {
                printf("Caractere encontrado na posicao: %d\n", i);
                i--;
            }
            
            // Verificar outras ocorrências do caractere no lado direito
            i = meio + 1;
            while (i < tamanho && A[i] == x) {
                printf("Caractere encontrado na posicao: %d\n", i);
                i++;
            }
            
            break;
        }

        if (A[meio] < x) {
            esquerda = meio + 1;  // Busca na metade direita
        } else {
            direita = meio - 1;  // Busca na metade esquerda
        }
    }

    if (boolean == 0) {
        printf("Caractere nao encontrado.\n");
    }
}
