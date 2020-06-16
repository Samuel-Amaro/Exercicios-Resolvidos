#include <stdio.h>
#include <stdlib.h>

int main() {
 int x,y;
 printf("Entre Com Dois Valores: ");
 scanf("%i %i",&x,&y);
 for(int i = 1; i < y; i += 1) {
     //descobrir multiplos, do x para pular a linha na hora certa
     printf("%d ",i);
     if(i % x == 0)
        printf("\n");
 }
 return 0;
}
