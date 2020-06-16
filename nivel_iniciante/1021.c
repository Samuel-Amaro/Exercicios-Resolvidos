#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
 float valor;
 //obtendo valor monetario via entrada de dados via teclado
 printf("Digite o Valor Monetario: ");
 scanf("%f",&valor);
 //armazena o resto do dinehrio a cada decomposição em notas
 float resto = valor,aux3;
 //armazena a qtd de cada nota
 int aux,aux2;
 do{
   //printf("------------------Notas--------------\n");
   //decompondo em notas
   if(resto > 100) {
      aux = resto / 100;
      aux2 = 100 * aux;
      resto = resto - aux2;
      printf("%d nota(s) de R$100\n",aux);
   }else if(resto > 50) {
            aux = resto / 50;
            aux2 = 50 * aux;
            resto = resto - aux2;
            printf("%d nota(s) de R$ 50\n",aux);
   }else if(resto > 20) {
            aux = resto / 20;
            aux2 = 20 * aux;
            resto = resto - aux2;
            printf("%d nota(s) de R$ 20\n",aux);
   }else if(resto > 10) {
            aux = resto / 10;
            aux2 = 10 * aux;
            resto = resto - aux2;
            printf("%d nota(s) de R$ 10\n",aux);
   }else if(resto > 5) {
           aux = resto / 5;
           aux2 = 5 * aux;
           resto = resto - aux2;
           printf("%d nota(s) de R$ 5\n",aux);
   }else if(resto > 2) {
           aux = resto / 2;
           aux2 = 2 * aux;
           resto = resto - aux2;
           printf("%d nota(s) de R$ 2\n",aux);
   }else if(resto > 1) {
           aux = resto / 1;
           aux3 = 1 * aux;
           resto = resto - aux3;
           printf("%d moeda(s) de R$ 1\n",aux);
   }else if(resto > 0.50) {
            aux = resto / 0.50;
           aux3 = 0.50 * aux;
           resto = resto - aux3;
           printf("%d moeda(s) de R$ 0.50 \n",aux);
   }else if(resto > 0.10) {
           aux = resto / 0.10;
           aux3 = 0.10 * aux;
           resto = resto - aux3;
           printf("%d moeda(s) de R$ 0.10\n",aux);
   }else if(resto > 0.05) {
           aux = resto / 0.05;
           aux3 = 0.05 * aux;
           resto = resto - aux3;
           printf("%d moeda(s) de R$ 0.05\n",aux);
   }else if(resto > 0.01) {
           aux = resto / 0.01;
           aux3 = 0.01 * aux;
           resto = resto - aux3;
           printf("%d moeda(s) de R$ 0.01\n",aux);
           break;
   }
 }while(resto > 0.00);
 return 0;
}
