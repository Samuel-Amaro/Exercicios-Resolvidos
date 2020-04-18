#include <stdio.h>

void troca(int *a,int *b);


int main() {
 int habitantes,consultas;
 scanf("%d",&habitantes);
 scanf("%d",&consultas);
 int hab[habitantes];
 for(int i = 0; i < habitantes; i += 1) {
     printf("%d - ",i);
     scanf("%d",&hab[i]);
 }
 //ordena da maior nota para a menor
 for(int i = 0; i < habitantes; i += 1) {
    for(int j = 1; j < habitantes - 1; j += 1) {
        if(hab[j] < hab[j + 1]) {
           troca(&hab[j],&hab[j + 1]);
        }
    }
 }
  int i = 0, c;
 //consultas das notas
 while(consultas > i) {
       scanf("%d",&c);
       if(c == 1)
          c = c - 1;
       else if(c == habitantes)
               c = c - 1;
       printf("%d \n",hab[c]);
       consultas -= 1;
 }
 return 0;
}

void troca(int *a,int *b) {
 int n = *a;
 *a = *b;
 *b = n;
}
