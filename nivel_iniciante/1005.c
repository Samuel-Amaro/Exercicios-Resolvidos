#include <stdio.h>

int main() {
 double nota1,nota2,media;
 printf("Digite Nota 1: ");
 scanf("%lf",&nota1);
 printf("Digite nota 2: ");
 scanf("%lf",&nota2);
 //usando conceito de media ponderada.
 //nota multiplicada por cada peso e dividida pela soma dos pesos
 //nota 1 peso 3.5 nota 2 peso 7.5 soma dos pesos 11
 media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;
 printf("MEDIA = %.5f\n",media);
 return 0;
}
