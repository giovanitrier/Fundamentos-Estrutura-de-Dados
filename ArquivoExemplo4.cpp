#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

 FILE *p; 
 char str[30], frase[80] = "Este e um arquivo chamado: ", resposta[80]; 
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
 fputs(frase, p); 
 fputs(str,p);
 
 /* E se o seu disco estiver muito cheio.. */ 
 if (ferror(p)) 
 printf("\nNem tudo sao flores...\n"); 
 fclose(p);
 
 strcat(frase, str); 

/* abre novamente para a leitura e fecha. */
 p = fopen(str,"r"); 
 fgets(resposta, strlen(frase)+1, p); 
 printf("\n\n%s\n", resposta); 
 fclose(p); 
 remove(str);
	
}
