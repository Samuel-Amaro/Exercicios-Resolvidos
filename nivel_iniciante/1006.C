#include <stdio.h>

void main() {
 double n1,n2,n3,media;
 printf("Digite nota 1:");
 scanf("%lf",&n1);
 printf("Digite nota 2:");
 scanf("%lf",&n2);
 printf("Digite nota 3:");
 scanf("%lf",&n3);
 //usando conceito de media ponderada a soma das notas multiplicadas pelos seus pesos, divido pela soma dos pesos de cada nota.
 media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
 printf("Sua MEDIA = %.1f\n",media);
}
