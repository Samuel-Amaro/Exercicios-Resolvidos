#include <stdio.h>
#include <string.h>

int main() {
 char alfabeto[26];
 int nPiscadas,piscou;
 setbuf(stdin,NULL);
 gets(alfabeto);
 printf("------------------\n");
 setbuf(stdin,NULL);
 scanf("%d",&nPiscadas);
 printf("------------------\n");
 int nLinha = 0;
 int m[nLinha][nPiscadas];
 for(int i = 0; i <= 0; i += 1) {
    for(int j = 0; j < nPiscadas; j += 1) {
        scanf("%d",&m[i][j]);
    }
 }
 for(int i = 0; i <= 0; i += 1) {
    for(int j = 0; j < nPiscadas; j += 1) {
        printf("%c ",alfabeto[m[i][j] - 1]);
    }
 }
 return 0;
}
