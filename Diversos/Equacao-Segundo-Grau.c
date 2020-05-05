#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
 * Calcular as raizes de uma equação do segundo grau
*/
int main() {
 setlocale(LC_ALL,"Portuguese");
 int a,b,c;
 double deltaP1;
 int deltaP2, deltaFinal;
 int xP1,xP3;
 double xP2;
 float xL1,xL2;

 printf("Digite os Coeficientes\n");
 printf("Digite o coeficiente (A): ");
 scanf("%d",&a);
 printf("Digite o coeficiente (B): ");
 scanf("%d",&b);
 printf("Digite o coeficiente (C): ");
 scanf("%d",&c);
 printf("Equação Formada: ax² + bx + c = 0 | %dx² + (%dx) + (%d) = 0\n",a,b,c);

 if(a != 0) {
    deltaP1 = pow((double)b,(double)2);
    deltaP2 =  - 4 * a * c;
    deltaFinal = (int)deltaP1 + (int)deltaP2;
    printf("Delta Final %d\n",deltaFinal);

    if(deltaFinal > 0) {
       //duas raizes reais e distintas
       // x = -b +- sqrt(deltaFinal) / 2 * a;
       //desmenbrando a equação
       xP1 = - b;
       xP2 = sqrt((double)deltaFinal);
       xP3 = 2 * a;
       xL1 = (xP1 + xP2) / xP3;
       printf("Duas Raizes Reais e Distintas\n");
       printf("X' = %.0f\n",xL1);
       xL2 = (xP1 - xP2) / xP3;
        printf("X'' = %.0f\n",xL2);
    }else if(deltaFinal < 0) {
             printf("Não Possui Raizes Reais e distintas!\n");
    }else if(deltaFinal == 0) {
             printf("A equação possui raizes reais so que iguais!\n");
             xP1 = - b;
             xP2 = sqrt((double)deltaFinal);
             xP3 = 2 * a;
             xL1 = (xP1 + xP2) / xP3;
             printf("Duas Raizes Reais e Distintas\n");
             printf("X' = %.0f\n",xL1);
             xL2 = (xP1 - xP2) / xP3;
             printf("X'' = %.0f\n",xL2);
    }
 }
 return 0;
}
