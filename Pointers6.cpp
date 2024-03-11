#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	
	int a = 10; int b = 20; int c = 30;
	
	int *pa, *pb, *pc;
	pa = &a; pb = &b;pc = &c;
	
	printf("a = %d b = %d c = %d \n",*pa,*pb,*pc);
	
	pa-=2;
	pb--;
	pc++;
	
	printf("*pa = %d *pb = %d *pc = %d \n",*pa,*pb,*pc);
	return 0;
	system("pause");
	
}
