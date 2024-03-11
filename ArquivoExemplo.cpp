#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <system.h>

int main(){
	
	FILE *p; 
	char c, str[30], frase[80] = "Este e um arquivo chamado: "; 
	int i;
	
	/* Le um nome para o arquivo a ser aberto: */
	printf("\n\n Entre com um nome para o arquivo:\n");
	gets(str);
	
	if (!(p = fopen(str,"w"))) /* Caso ocorra algum erro na abertura do arquivo..*/ 
	{ /* o programa aborta automaticamente */ 
 	printf("Erro! Impossivel abrir o arquivo!\n"); 
 	exit(1); 
 	}
	 
	 /* Se nao houve erro, imprime no arquivo, fecha ...*/ 
	strcat(frase, str); //Essa funcao faz a concatenacao de strings
	for (i=0; frase[i]; i++) 
 	putc(frase[i],p); 
	fclose(p);
	
	/* abre novamente para a leitura e fecha. */ 
	p = fopen(str,"r"); 
	while (!feof(p)) 
 	c = getc(p); 
 	printf("%c",c); 
 	} 
 	fclose(p);
 
}
