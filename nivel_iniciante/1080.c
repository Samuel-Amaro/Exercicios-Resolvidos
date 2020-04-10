#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100

int getValores(int vetor[]);

int main() {
 int conjuntoValores[TAMANHO],maiorVe = 0,pos = 0,maiorRes = 0;
 srand(time(NULL));//CRIA SEMENTE PARA NUMEROS ALEATORIOS
 for(int i = 0; i < TAMANHO; i += 1)
     conjuntoValores[i] = rand() % 1000 + 1;
 getValores(conjuntoValores);

 //faz as compara��es para obter quem e o maior
 for(int i = 0; i < TAMANHO; i += 1) {
      maiorVe = conjuntoValores[i];
     for(int j = 1; j < TAMANHO; j += 1) {
         if(maiorVe > conjuntoValores[j]) {
            //atualizando o maior para verifica��o
            maiorRes = maiorVe;
        }else{
            //atualizando o maior para verifica��o
            maiorVe = conjuntoValores[j];
            maiorRes = maiorVe;
        }
    }
 }
 //procura posi��o do maior
 for(int i = 0; i < TAMANHO; i += 1) {
     if(conjuntoValores[i] == maiorRes)
        pos = i;
 }
 printf("Maior valor e: %d posicao e: %d",maiorRes,pos);
 return 0;
}

int getValores(int vetor[]) {
    for(int i = 0; i < TAMANHO; i += 1) {
        printf("%d\n",vetor[i]);
    }
}
