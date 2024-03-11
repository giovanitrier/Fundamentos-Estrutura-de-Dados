#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>

int main(){
	
	FILE *fp; 
 	float f = 14.876;
 	
 	if((fp=fopen("teste.dat","wb"))==NULL) 
	 { 
	 puts("Nao posso abrir arquivo!"); 
	 exit(1); 
	 }
	 
	 if(fwrite(&f, sizeof(float), 1, fp)!=1) 
 	puts("Erro escrevendo no arquivo!"); 
 	fclose(fp); 
	
}
