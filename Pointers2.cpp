#include <stdio.h>

int main(){
	int *int_pointer, count = 10, x;
	
	//aponta para endereço de count
	int_pointer = &count;
	
	// x recebe conteúdo de in_pointer
	x = *int_pointer;
	
	printf("count = %i, x = %i, int_pointer = %i\n", count, x, *int_pointer);
	count = 15;
	printf("count = %i, x = %i, int_pointer = %i\n", count, x, *int_pointer);
	
	return 0;
	
}
