#include <stdio.h>
#define TAMANHO 100

int main() {
 double valor;
 double v[TAMANHO];
 printf("Digite um valor: ");
 scanf("%lf",&valor);

 v[0] = valor;
 for(int i = 0; i < TAMANHO; i += 1) {
    v[i + 1] = v[i] / 2;
    printf("N[%d] = %.4f\n",i,v[i]);
 }
 return 0;
}
