#include <stdio.h>
#include <string.h>

int main() {
 //usando o tipo long(longo), aumentando o escopo do int
 long int numero;
 printf("Digite o numero: ");
 scanf("%d",&numero);
 //converte o valor inteiro em string
 char string[30];
 sprintf(string,"%d",numero);
 int tamanhoString = strlen(string);
 for(int i = tamanhoString; i >= 0; i -= 1) {-
     printf("%c",string[i]);
 }
 printf("\n");
 return 0;
}
