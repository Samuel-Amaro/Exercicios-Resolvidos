#include <stdio.h>
#include <math.h>

int main() {
 float a,b,c;
 float valores[2];
 printf("Entre com 3 Valores: ");
 scanf("%f %f %f",&a,&b,&c);
 //ordenado valores decrecentemente
 if(a > (b + c)) {
    valores[0] = a;
 }else if(b > c) {
          valores[1] = b;
          valores[2] = c;
  }else {
        valores[1] = c;
        valores[2] = b;
  }
 if(valores[0] > (valores[1] + valores[2]))
    printf("Nao Forma triangulo\n");
 else if(pow(a,2)== (pow(b,2) + pow(c,2)))
         printf("Triangulo Retangulo\n");
 else if(pow(a,2) > (pow(b,2) + pow(c,2)))
         printf("Triangulo Obtusangulo\n");
 else if(pow(a,2) < (pow(b,2) + pow(c,2)))
        printf("Triangulo Ocutangulo\n");
 else if(a == b && a == c)
        printf("Triangulo Equilatero\n");
 else if(a == b || a == c)
         printf("Triangulo Isoceles\n");
 return 0;
}
