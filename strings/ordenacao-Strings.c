#include <stdio.h>
#include <string.h>

int main() {
 char nomes[10][20];
 int linha = 0,coluna,retorno;
 char aux[20];

 //lendo nomes
 for(linha = 0; linha < 10; linha += 1) {
     printf("Digite o Nome %d: ",linha);
     setbuf(stdin,NULL);
     scanf("%20[^\n]",nomes[linha]);
 }

 //ordenando strings, e aplicando um pouco do bubble sort para ordenar, pelo menos o conceito
 for(linha = 0; linha < 10; linha += 1) {
     //a cada comparação do nome exterior e usado com o interior
     // ele encontra sua posição apos ser comparado com todos ou nomes
     for(int i = 1; i < 10 - 1; i += 1) {
            //a comáração e feita caractere por caracter de cada string e dependendo do retorno consigo deduzir se uma esta na frente da outra alfabeticamente
            //porque a compaação naç e de tamanho mas de caracteres, se uma e maior que outra e porque no alfabeto a maior esta na frente.
            //seguindo essa linha de raciocinio
            retorno = strcmp(nomes[i],nomes[i + 1]);
            //retorno da comparação e importante para ordenar as strings
            if(retorno == 0) //strings iguais
               break;
            //str1 esta alfabeticamente na frente de str2
            else if(retorno > 0) {
                    strcpy(aux,nomes[i]);
                    strcpy(nomes[i],nomes[i + 1]);
                    strcpy(nomes[i + 1],aux);
            }
     }
 }



 //mostrando nomes
 for(int i = 0; i < 10; i += 1) {
    printf("%s \n",nomes[i]);
 }

 return 0;
}
