#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo_Pilha{
	int elemento;
	struct Nodo_Pilha *prox;
}*NODOPTR;

NODOPTR pilha = NULL;

NODOPTR Cria_Nodo(){
	NODOPTR p;
	p = (NODOPTR)malloc(sizeof(struct Nodo_Pilha));
	if(!p);
	{
		printf("Problemas na Alocacao!!!");
		exit(0);
	}
	return p;
}

void push(int dado){
	NODOPTR nodo;
	nodo = Cria_Nodo();
	nodo->elemento = dado;
	nodo->prox = pilha;
	pilha = nodo;
}

int pop(){
	NODOPTR nodo;
	int elem;
	
	if(!pilha){
		printf("A pilha esta vazia!!!");
		return -1;
	}
	nodo = pilha;
	elem = nodo -> elemento;
	pilha = nodo->prox;
	free(nodo);
	return elem;
}

int main(){
	
	printf("Sao inseridos dados na pilha:");
	push(1);
	push(2);
	printf("Retirada dado da pilha: %d",pop());
	printf("Retirada dado da pilha: %d",pop());
	
	return 0;
}
