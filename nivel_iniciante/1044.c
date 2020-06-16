#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
 setlocale(LC_ALL,"Portuguese");
 int valor1,valor2,aux,aux2,aux3;
 printf("Entre Com dois Valores: ");
 scanf("%d %d",&valor1,&valor2);
 //condições
 if(valor1 > valor2) {
    aux = valor1 % valor2;
    if(aux == 0) {
       aux2 = valor1 / valor2;
       aux3 = valor2 * aux2;
       aux3 == valor1 ? printf("São Multiplos\n") : printf("\n");
    }else
         printf("Não São Multiplos\n");
 }else if(valor2 > valor1) {
         aux = valor2 % valor1;
         if(aux == 0) {
            aux2 = valor2 / valor1;
            aux3 = valor1 * aux2;
            aux3 == valor2 ? printf("São Multiplos\n") : printf("\n");
         }else
              printf("Não São Multiplos\n");
 }
 return 0;
}
