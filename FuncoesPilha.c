#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int pilha[20];
int topo = -1;

void push(int valor){
	
	topo ++;
	if(topo>-1&&topo<20)
	pilha[topo]=valor;
	else
	printf("A pilha está cheia!!!");
	
}

int pop(){
	
	if (topo<0){
	printf("A pilha está vazia!!!");
	return 9999;
	}
	return pilha[topo--];
}

int size(){
	return topo;
}

int stackpop(){
	return pilha[topo];
}

int main(){
	
	printf("\n Sao colocados dados na pilha");
	push(1);
	push(2);
	push(3);
	
	printf("\n Tamanho da Pilha %d",size());
	printf("\n Retirando dado da Pilha: %d ",pop());
	printf("\n Retirando dado da Pilha: %d ",pop());
	printf("\n Retirando dado da Pilha: %d ",pop());
	printf("\n Tamanho da pilha:%d ",size());
	printf("\n Atual topo da pilha:%d ",stackpop());
	
	push(10);
	
	printf("\n Retirando dado da Pilha: %d ", pop());
	printf("\n Retirando dado da Pilha: %d ", pop());
	printf("\n Tamanho da Pilha:%d ",size());		

	return 0;
	
}
