#include <stdio.h>
#include <stdlib.h>

int main() {
 int a,b,c,d;
 printf(" Entre Com quatro Valores: ");
 scanf("%d %d %d %d",&a,&b,&c,&d);

 if(b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a % 2 == 0) {
    printf("Valores Aceitos\n");
 }else{
       printf("Valores nao aceitos\n");
 }

 return 0;
}
