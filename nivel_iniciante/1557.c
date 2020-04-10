#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
 srand(time(NULL));
 int m,linha,coluna;
 printf("Digite um valor entre 0 e 15: ");
 scanf("%d",&m);

 linha = m;
 coluna = m;
 int matriz[linha][coluna];

 for(int i = 0; i < coluna; i += 1) {
     for(int j = 0; j < linha; j += 1) {
         matriz[i][j] = rand() % 100 + 1;
     }
 }

 for(int i = 0; i < coluna; i += 1) {
     for(int j = 0; j < linha; j += 1) {
         printf("%d ",matriz[i][j]);
     }
     printf("\n");
 }
 return 0;
}
