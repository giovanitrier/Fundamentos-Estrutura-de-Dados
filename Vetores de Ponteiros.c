#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4 
#define COLUNAS 60 
/* protótipos das funções */

/* protótipos das funções */ 
void alocaespaco(char *linha[]); 
void lelinhas (char *linha[]); 
void imprimelinhas (char *linha[]); 
void ordenalinhas (char *linha[]); 


void main(void){ 
 char *linha[LINHAS]; 
 alocaespaco(linha); 
 lelinhas(linha); 
 imprimelinhas(linha); 
 ordenalinhas(linha); 
 imprimelinhas(linha);
 
 
}

/* Esta rotina aloca espaço para as linhas */
void alocaespaco(char *linha[]){
 int i;
 for (i=0; i<LINHAS; i++){ 
 if (!(linha[i] = malloc(COLUNAS*sizeof(int)))) 
 { 
 printf("Nao consegui alocar o vetor %d.\n", i); 
 exit(i); 
 } 
 } 
}

/* Esta rotina le linhas */
void lelinhas (char *linha[]) 
{ 
 int i; 
 for (i=0; i<LINHAS; i++) 
 { 
 printf("Entre com a linha %d.\n", i); 
 gets(linha[i]); 
 } 
}

/* Esta rotina imprime as linhas */

void imprimelinhas (char *linha[]) 
{ 
 int i; 
 for (i=0; i<LINHAS; i++){ 
 printf("Linha %d %s.\n", i, linha[i]); 
 } 
}

void ordenalinhas( char *linha[]) 
{ 
 char trocou; 
 char *p; 
 int i; 
 do { 
 trocou = 0; 
 for (i=0; i<LINHAS-1; i++){ 
 if (strcmp(linha[i], linha[i+1]) >0) 
 { 
 p = linha[i]; 
 linha[i] = linha[i+1]; 
 linha[i+1] = p; 
 trocou = 1; 
 } 
 }
} while(trocou);
}

