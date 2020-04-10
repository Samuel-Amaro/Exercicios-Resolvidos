#include <stdio.h>

int main() {
 int X,Y,i1 = 0,v[i1],k = 0,j[k];
 int ind = 0,c[ind];
 int ind2 = 0,p[ind2];
 int ind3 = 0, l[ind3];
 int soma = 0,soma1 = 0,soma2 = 0,soma3 = 0;
 printf("Digite um valor inteiro: ");
 scanf("%d",&X);
 printf("Digite um valor inteiro: ");
 scanf("%d",&Y);

 if(X < Y) {
    while(X <= Y) {
          printf(" X <= Y - %d\n",X);
          if(X % 2 == 1) {
             v[i1] = X;
             i1 += 1;
          }
          X += 1;
    }
    for(int i = 0; i <= i1; i += 1) {
        soma += v[i];
    }
    printf("Soma Dos Impares X < Y: %d\n",soma);
 }else if(Y > X) {
          while(Y >= X) {
               printf(" Y > X - %d\n",Y);
               if(Y % 2 == 1) {
                 c[ind] = Y;
                 ind += 1;
               }
               Y -= 1;
          }
          for(int i = 0; i < ind; i += 1) {
              soma1 += c[i];
          }
          printf("Soma dos Impares Y > X: %d\n",soma1);
   }else if(Y < X) {
            while(Y <= X) {
                 printf("Y < X - %d\n",Y);
                 if(Y % 2 == 1) {
                    p[ind2] = Y;
                    ind2 += 1;
                 }
                 Y += 1;
            }
            for(int i = 0; i < ind2; i += 1)
                soma2 += p[i];
            printf("Soma dos impares Y < X: %d\n",soma2);
   }else if(X > Y) {
            printf("X > Y - %d\n",X);
            while(X >= Y) {
                 if(X % 2 == 1) {
                    l[ind3] = X;
                    ind3 += 1;
                 }
                 X -= 1;
            }
            for(int i = 0; i < ind3; i += 1)
                soma3 += l[i];
            printf("Soma dos impares X > Y: %d\n",soma3);
   }
 return 0;
}
