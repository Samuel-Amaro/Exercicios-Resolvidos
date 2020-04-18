#include <stdio.h>

int main() {
 int n; //numero de atributos
 int M; //numero cartas baralho de marcos
 int L; //numero de cartas baralho de leonardo
 printf("NUMERO DE ATRIBUTOS: ");
 scanf("%d",&n);
 printf("NUMERO DE CARTAS MARCOS: ");
 scanf("%d",&M);
 printf("NUMERO DE CARTAS LEONARDO: ");
 scanf("%d",&L);

 //N - numero de colunas
 // M - L : numero de linhas
 int marcos[N][M];
 int leonardo[N][L];

 //cartas escolhida por marcos
 for(int linha = 0; linha < N; linha += 1) {
    for(int coluna = 0; coluna < M; coluna += 1) {
        printf("Carta Marcos: ");
        scanf("%d",&marcos[linha][coluna]);
    }
 }

 //cartas escolhidas por leonardo
 for(int linha = 0; linha < N; linha += 1) {
     for(int coluna = 0; coluna < L; coluna += 1) {
        printf("Carta Leonardo: ");
        scanf("%d",&marcos[linha][coluna]);
    }
 }

 int CEM,CEL; //CEM: carta escolhida por marcos, CEL: cartas escolhidas por leonardo.
 printf("Carta Escolhida Marcos: ");
 scanf("%d",&CEM);
 printf("Carta Escolhida Leonardo: ");
 scanf("%d",&CEL);

 int A;//atributo sorteado
 printf("Atributo Sorteado: ");
 scanf("%d",&A);

 //otendo detalhes da carta escolhida por marcos

 for(int linha = 0; linha < N; linha += 1) {
    for(int coluna = 0; coluna < M; coluna += 1) {
        if(linha == CEM) {

        }
    }
 }



 return 0;
}
