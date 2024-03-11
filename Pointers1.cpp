#include <stdio.h>

int main(){
	int *int_pointer, count = 10;
	
	//aponta para endereço de count
	int_pointer = &count;
	
	printf("count = %i\n", count);
	printf("int_pointer = %i\n", *int_pointer);
	
	count = 15;
	printf("count = %i\n",count);
	printf("int_pointer = %i\n", *int_pointer);
	
	return 0;
	
}
