#include <stdio.h>

int main(void){
	
	int i1, i2;
	int *p1, *p2;
	
	i1 = 5;
	p1 = &i1;
	i2 = *p1/2+10;
	p2 = p1;
	
	printf("i1 = %d, p1 = %d\n",i1,*p1); //5 e 5
	printf("i2 = %d, p2 = %d\n", i2, *p2); // 12 e 5
	return 0;
	
}
