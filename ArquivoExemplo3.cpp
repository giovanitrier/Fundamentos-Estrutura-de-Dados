#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>

void abreArquivo(){
	
	FILE *fp; 
 	float exemplo[10][10]; 
	int i,j;
	
	if((fp=fopen("exemplo.dat","rb"))==NULL) 
 	{ 
	 puts("Nao posso abrir arquivo!"); 
 	exit(1); 
	}
	
	/* o código a seguir lê a matriz inteira em um único passo: */ 
	 if(fread(exemplo, sizeof(exemplo), 1, fp)!=1) 
	 { 
	 puts("Erro ao ler arquivo!"); 
	 exit(1); 
	 } 
	 for(i=0; i<10; i++) 
	 { 
	 for(j=0; j<10; j++) 
	 printf("%3.1f ", exemplo[i][j]); 
	 printf("\n"); 
	 } 
	 fclose(fp);
}


int main(){
	
	FILE *fp; 
 	float exemplo[10][10]; 
	int i,j;
	
	if((fp=fopen("exemplo.dat","wb"))==NULL) 
 	{ 
	 puts("Não posso abrir arquivo!"); 
 	exit(1); 
 	} 
 	for(i=0; i<10; i++) 
 	{ 
 	for(j=0; j<10; j++) 
 	{ 
 	exemplo[i][j] = (float) i+j; /* lei de formação dos elementos da 
 	matriz */ 
 	} 
 	}
	  
	 /* o código a seguir grava a matriz inteira em um único passo: */ 
	 if(fwrite(exemplo, sizeof(exemplo), 1, fp)!=1) 
	 { 
	 puts("Erro ao escrever arquivo!");exit(1);} 
	 fclose(fp);
	 abreArquivo(); 
	 }
	

