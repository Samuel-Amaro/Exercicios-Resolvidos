#include <stdio.h>
#include <math.h>
#define PI 3.14159

//obs: como ler uma dado de entrada de tipo double: %lf

void main() {
 double raio,area;
 printf("Digite o Valor do Raio:");
 scanf("%lf",&raio);
 area = (pow(raio,2)) * PI;
 printf("A = %.4f\n",area);
}
