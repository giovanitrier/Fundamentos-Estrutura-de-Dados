#include <stdio.h>
#include <stdlib.h>

typedef struct item{
	
	int data;
	struct item *next;
}item;

item *itemCreate(){
	item *p;
	p = (item*)malloc(sizeof(item));
	p->next = NULL;
	if(!p){
		printf("Problema ao criar/alocar novo item");
		exit(0);
	}
	
	return p;
}

void insertStart(item *init,int info){
	
	item *newItem;
	
	newItem = itemCreate();
	newItem->data = info;
	newItem->next = init->next;
	init->next = newItem;
}

void printList(item *listPointer){
	while(listPointer!=NULL){
		printf("%d\n",listPointer->data);
		listPointer = listPointer->next;
	}
	printf("\n");
}

void searchItem(){
	int i;
	printf("Digite o índice do item que busca");
	scanf("%d",i);
	if(p == i){
		printList(init);
	}
}

int main(void){
	
	item *init;
	init = itemCreate();
	
	int i,info;
	
	for(i = 0; i < 3; i++) {
        printf("Entre com o valor do novo nó: ");
        scanf("%d", &info);
        insertStart(init, info);
    }
	
	printList(init);
	return 0;

}
