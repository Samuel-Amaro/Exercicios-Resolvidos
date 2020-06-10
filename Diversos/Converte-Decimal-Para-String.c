/*
  * algoritmo de conversão de um numero decimal para um numero binario
  * recebe um numero de entrada fornecido.
  * processa esse numero, e gera uma saida, retornando o numero binario.
*/


#include <stdio.h>
#include <math.h>



int main() {

 int indice = 0;
 int binario[indice];
 int numeroDecimal;
 printf("Informe Um Numero Decimal: ");
 scanf("%d",&numeroDecimal);
 setbuf(stdin,NULL);

 while(numeroDecimal > 0) {
       binario[indice] = numeroDecimal % 2;
       indice += 1;
       //divide o numero por 2
       numeroDecimal = numeroDecimal / 2;
 }
 for(int i = indice; i >= 0 ;i--)
     printf("%d ",binario[i]);
 return 0;
 }
