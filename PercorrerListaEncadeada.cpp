#include<stdio.h>

int main(){
	
	struct listItem{
		
		int value;
		struct listItem *next;
	};
	
	struct listItem n1,n2,n3;
	struct listItem *listPointer = &n1; //Ponteiro que aponta pro primeiro nodo.
	
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	
	while(listPointer !=NULL){
		
		printf("%d\n", listPointer->value);
		listPointer = listPointer ->next;
	}
	
	listPointer = &n1;	
	
	int achei = 0;
	
		while(listPointer !=NULL){
			printf("Achei %d\n ", listPointer->value);
			achei = 1;
			listPointer = listPointer -> next;
		}
		
	if(achei==0)
	printf("Não achei");	
	
	return 0;
}
