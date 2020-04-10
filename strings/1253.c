#include <stdio.h>
#include <string.h>

/*criptografia de cifra de julio cesar*/

void main() {
 char stringEntrada[50];
 char alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 printf("DIGITE SUA STRING DE ENTRADA[A-Z]:");
 gets(stringEntrada);
 int tamanhoString = strlen(stringEntrada);
 int i,j,deslocameto;
 char decodificada[tamanhoString];
 printf("Numero de deslocamento: [0-25]: ");
 scanf("%d",&deslocameto);
 //FOR PARA CONTROLAR A STRING RECEBIDA(SEU TAMANHO CERTO) E A STRING QUE VAI SER DECODIFICADA(TER SEU TAMANHO CERTO)
 for(i = 0; i < tamanhoString; i += 1) {
     //FOR PARA CONTROLAR E PERCORRER O ALFABETO E FAZER OS DESLOCAMENTOS PARA CODIFICAÇÃO.
     for(j = 0; j < 25; j++) {
        //DESLOCAMENTO BASEADO QUANDO O CARATER QUE QUERO CODIFICAR TENHA EM MEU ALFABETO, E QUANDO O DESLOCAMENTO FOR MAIOR QUE O INDICE ATUAL DO ALFABETO,
        //E PORQUE TENHO QUE CODIFICAR O CARCATER ATUAL COM CARACTERES QUE ESTÃO NO FINAL DO ALFABETO(MEIO QUE VAI PARA O FINAL DO ALFABETO)
        if(stringEntrada[i] == alfabeto[j] && deslocameto >= j) {
           int p = (25 - deslocameto) + 1 + j;
           decodificada[i] = alfabeto[p];
        }
         //MESMA COISA COMPARAÇÃO DOS CARACTERES, E AQUI O DESLOCAMENTO E NORMAL, PEGO  A POSIÇÃO ATUAL QUE ESTOU E DIMINUI O TANTO CERTO DO DESLOCAMENTO,
         // E CHEGO AO CARACTER CODIFICADO.
        if(stringEntrada[i] == alfabeto[j] && j > deslocameto) {
           int p = j - deslocameto;
           decodificada[i] = alfabeto[p];
        }
     }
 }
 //imprimindo com for para não imprimir caracteres lixos
 for(int k = 0; k < tamanhoString; k ++)
    printf("%c",decodificada[k]);

 printf("\n");
 //aqui imprime tudo da string
 printf("STRING %s\n",decodificada);

}
