#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

/*
 * a lista tem que ser composta por, nome - simples - produto | qtd | preco.
 * algoritmo que le uma lista de compras de um arquivo txt, e mostra o total gasto na lista.
 * e ate pode criar uma nova lista seguindo os passo de uso do arquivo e digitação da lista.
*/

//função qu vai receber uma lista de compras, informada por um arquivo.txt
float recebe_lista();

//função que cria a lista
void cria_lista();

int main() {
    float t;
    setlocale(LC_ALL,"Portuguese");
    int op;
    printf("-----------------------------------------------------------------\n");
    printf("Lendo Uma Lista de Compras e Calculando o Valor Total Gasto!    |\n");
    printf("1 - Fornecer a Lista de Compras                                 |\n");
    printf("2 - Digitar uma Nova Lista Compra                               |\n");
    printf("-----------------------------------------------------------------\n");
    printf("Sua opção: ");
    scanf("%d",&op);
    setbuf(stdin,NULL);
    switch(op) {
        case 1:
              t = recebe_lista();
              printf("Valor total da lista: R$: %.2f\n",t);
              break;
        case 2:
              //se quiser criar uma lista
              cria_lista();
              break;
        default:
              printf("Opção Invalida\n");
    }
    return 0;
}


float recebe_lista() {
    char ps; //armazenara os escapes do programa
    FILE *arquivo;
    int qtd;
    char produto[30];
    float valor,total = 0.0;
    printf("------------------------------------------------------------------\n");
    printf("        Istruções para poder importa uma Lista de Compra.        |\n");
    printf("1 - renomeio o arquivo para 'lista-compra.txt'                   |\n");
    printf("2 - copie o arquivo para a pasta que vai ser aberta a seguir     |\n");
    printf("3 - Feche a janela de arquivos que foi aberta e volte a aplicação|\n");
    printf("------------------------------------------------------------------\n");
    printf("#Pressione qualquer tecla para abrir a pasta: ");
    scanf("%c",&ps);
    setbuf(stdin,NULL);
    system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\Importa-Lista-Arquivo");
    printf("DIGITE ENTER APOS ABRIR A PASTA: ");
    scanf("%c",&ps);
    setbuf(stdin,NULL);
    //vendo se o arquivo existe na pasta
    arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\Importa-Lista-Arquivo\\lista-compra.txt","r");
    if(arquivo == NULL) {
       printf("Arquivo não existe na pasta informada\n");
       //printf("Se desejar pode-se criar uma lista agora, Sim(Criar Lista) Não(Não criar Lista)\n");
    }else{
         //se o arquivo existe, vou ler os valores e retorna o total gasto
         while(!feof(arquivo)) {
               fscanf(arquivo,"%s %d %f",produto,&qtd,&valor);
               //somando o total gasto
               total += qtd * valor;
         }
         return total;
    }
    return 0.0;
}

void cria_lista() {
    char c;
    FILE *arquivo;
    int qtd;
    char produto[30];
    float valor,total = 0.0;
    printf("#########################################################################################\n");
    printf("| A partir daqui criaremos sua lista de compras                                         |\n");
    printf("| Digite a lista desta maneira nome-produto(simples, sem nome composto) quantidade valor|\n");
    printf("| depois salve na pasta que sera aberta com o nome 'lista-compra.txt'                   |\n");
    printf("#########################################################################################\n");
    system("notepad");
    system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\Importa-Lista-Arquivo");
    printf("Digite enter para abria a pasta: ");
    scanf("%c",&c);
    //abrindo o arquivo
    arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\Importa-Lista-Arquivo\\lista-compra.txt","r");
    //verifico se salvou o arquivo na pasta
    if(arquivo == NULL)
       printf("Lista de Compras não foi feita corretamente!\n");
    else{
        //se o arquivo existe, vou ler os valores e retorna o total gasto
         while(!feof(arquivo)) {
               fscanf(arquivo,"%s %d %f",produto,&qtd,&valor);
               //somando o total gasto
               total += qtd * valor;
         }
         printf("Valor total gasto na compra R$: %.2f\n",total);
    }
}
