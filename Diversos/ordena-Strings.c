#include <stdio.h>
#include <string.h>

//vai armazenar 10 nomes, cada nome pode ter 100 caracteres
char nomes[10][10];

int main() {
 //alfabeto
 char alfa[26] = {'A','B','C','D','E','F','G','H','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
/*
 int linha,coluna,qtdSrt = 10,j;
 for(j = 0; j < qtdSrt; j += 1) {
     gets(nomes[j]);
 }
 */
 for(int i = 0; i < 26; i += 1) {
    printf("%d\n",alfa[i]);
 }





 return 0;
}
