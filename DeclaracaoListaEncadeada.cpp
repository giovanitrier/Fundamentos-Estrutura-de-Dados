#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Declaracao de Lista Encadeada.
	
	struct listItem{
		int value;
		struct listItem *next;
	};
	
	struct listItem n1,n2,n3;
	
	int i;
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	n1.next = &n2;
	n2.next = &n3;
	
	printf("%d\n",n1.value);
	printf("%d\n",n1.next->value);
	printf("%d\n",n2.next->value);
	
	/*Remover um nodo
	 n1.next = &n3; pula o N2*/
	 
	/*Inserir um elemento
	n2_3.next=n2.next;
	n2.next=&n2_3;
	*/
	
	return 0;

}


