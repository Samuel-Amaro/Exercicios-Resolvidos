#include <stdio.h>

int main() {
 int N,i;
 printf("DIGITE UM VALOR INTEIRO N: ");
 scanf("%d",&N);

 for(i = 1; i <= 10; i += 1)
     printf("%d x %d = %d\n",i,N,i * N);
 return 0;
}
