#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//função que gera numeros aleatorios entre intevalo estabelecido
double geraFlu(double min,double max);

int main() {
 int linha;
 char operacao;
 srand(time(NULL));
 //gera numeros aleatorios inteiros do relogio do sistema
 float matriz[12][12],soma,media;
 for(int coluna = 0; coluna < 12; coluna += 1) {
    for(int linha = 0; linha < 12; linha += 1) {
        matriz[linha][coluna] = geraFlu(1.9,300.9);
    }
 }

 for(int coluna = 0; coluna < 12; coluna += 1) {
    for(int linha = 0; linha < 12; linha += 1) {
        printf("[%.3f] ",matriz[linha][coluna]);
    }
    printf("\n");
 }

 printf("Digite um valor entre 0 e 11: ");
 scanf("%d",&linha);
 printf("S - soma | M - media: ");
 setbuf(stdin,NULL);
 scanf("%c",&operacao);

 if(operacao == 'S' || operacao == 's') {
    for(int coluna = 0; coluna < 12; coluna += 1) {
        soma += matriz[linha][coluna];
    }
    printf("Soma da linha %d e %.3f\n",linha,soma);
 }
 if(operacao == 'M' || operacao == 'm') {
    for(int coluna = 0; coluna < 12; coluna += 1) {
        media += matriz[linha][coluna];
    }
    media = media / 12;
    printf("Media da linha %d e %.3f\n",linha,media);
 }
 return 0;
}


double geraFlu(double min,double max) {
 return min + (rand() / (RAND_MAX / (max - min)));
}
