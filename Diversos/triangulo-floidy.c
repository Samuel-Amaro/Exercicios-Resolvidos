#include <stdio.h>

/*Exercicio que mostra o triangulo de frody*/

int main() {

 int linhas,numero = 0,j,i;
 printf("Numero de Linhas: ");
 scanf("%i",&linhas);
 if(linhas > 0) {
    for(i = 0; i <= linhas; i += 1) {
        for(j = 0; j <= i; j += 1) {
            printf("%d ",numero);
            numero += 1;
        }
        printf("\n");
    }
 }


 return 0;
}
