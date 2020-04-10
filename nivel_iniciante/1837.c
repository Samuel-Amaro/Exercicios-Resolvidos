#include <stdio.h>

int main() {
 int dividendo,divisor,quociente,resto;
 printf("Valor a: ");
 scanf("%d",&dividendo);
 printf("Valor b: ");
 scanf("%d",&divisor);
 if(divisor != 0) {
    quociente = dividendo / divisor;
    printf("%d\n",quociente);
    resto = dividendo % divisor;
    printf("%d\n",resto);
 }
 return 0;
}
