#include <stdio.h>

int main(){
	int *int_pointer, count = 10, x;
	
	//aponta para endere�o de count
	int_pointer = &count;
	
	// x recebe conte�do de in_pointer
	x = *int_pointer;
	
	printf("count = %i, x = %i, int_pointer = %i\n", count, x, *int_pointer);
	count = 15;
	printf("count = %i, x = %i, int_pointer = %i\n", count, x, *int_pointer);
	
	return 0;
	
}
