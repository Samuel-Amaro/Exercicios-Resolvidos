#include <stdio.h>
#include <stdlib.h>

int main() {
 int N,numero = 1,indice = 0;
 printf("DIGITE UM VALOR INTEIRO: ");
 scanf("%d",&N);

 while(numero <= 10000) {
      if(numero % N == 2)
         printf("%d\n",numero);
      numero += 1;
 }
 return 0;
}
