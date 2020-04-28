/*
  Exercicio que permite um usuario cadastrar alunos, quantos quiser, e logo depois ao termino de usar o pograma poder obter os dados dos
  alunos em um relorio, um arquivo de texto txt que vai ser encontrado na pasta onde o programa foi executado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#define QTD_ALUNOS 0


//estrutura de um aluno
typedef struct aluno{
 char nome[50];
 int idade;
 char matricula[50];
 char cpf[50];
}Aluno;

//função menu, que vai ser a estrutura principal do programa
void menu();

//função que cadastra aluno
void cadAluno(Aluno *a);

//variavel global que e a quantidade de alunos
int qtdAlunos = 0;
//um vetor que armazenara todos os alunos cadastrados
Aluno alunos[QTD_ALUNOS];

//função que mostrara todos os alunos cadastrados
void getAlunos(Aluno a[]);

//função que gera um arquivo, com todos os dados dos alunos cadastrados, gera meio que um relatorio
void geraRelatorio(FILE **arquivo,Aluno a[]);

//arquivo global para usar em qualquer parte do programa, função que gera um arquivo
FILE* geraArquivo();

//arquivo global pode ser usado em qualquer lugar
FILE *arquivo;

//struct, estrutura que armazena data e hora do sistema, esta global porque vai ser usada em varias partes do programa, armazena entrada
struct tm *tempoEntrada;

//struct, estrutura de tempo, que armazena data e hora do sistema, so que da saida
struct tm *tempoSaida;

//função que gera a saida de tempo do programa
void geraSaida();

//função que gera a entrada de tempo no programa
void geraEntrada();


int main() {
 geraEntrada();
 setlocale(LC_ALL,"Portuguese");
 //verifica se arquivo existe
 arquivo = geraArquivo();
 if(arquivo == NULL)
 {
   printf("Ocorreu um erro com o relatorio\n");
 }else{
      menu();
 }
 return 0;
}


//função menu, que vai ser a estrutura principal do programa
void menu() {
 int op,i;
 printf("--------------------------------------------\n");
 printf("Bem Vindo ao Sistema de Cadastro de Alunos!|\n");
 printf("----------HORA ENTRADA NO SISTEMA-----------\n");
 printf("   Horas: %d Minutos: %d Segundos: %d      |\n",tempoEntrada->tm_hour,tempoEntrada->tm_min,tempoEntrada->tm_sec);
 printf("--------------------------------------------\n");
 do{
    printf("------------------------------\n");
    printf("             MENU            |\n");
    printf("------------------------------\n");
    printf("1 - Cadastrar Aluno          |\n");
    printf("2 - Listar Alunos Cadastrados|\n");
    printf("3 - Imprimir Relatório       |\n");
    printf("4 - Sair                     |\n");
    printf("------------------------------\n");
    scanf("%i",&op);
    setbuf(stdin,NULL);
    switch(op) {
          case 1:
                 printf("-----------------------------------\n");
                 printf("Quantos Alunos Predente Cadastrar ?\n");
                 printf("-----------------------------------\n");
                 printf("-> ");
                 setbuf(stdin,NULL);
                 scanf("%i",&qtdAlunos);
                 setbuf(stdin,NULL);
                 alunos[qtdAlunos];
                 for(i = 0; i < qtdAlunos; i += 1)
                     cadAluno(&alunos[i]);
          break;
          case 2:
                getAlunos(alunos);
          break;
          case 3:
                printf("\nGerando Relatorio, Os dados estara armazenado em um arquivo.txt,(arquivo de texto).\n");
                geraSaida();
                geraRelatorio(&arquivo,alunos);
          break;
          case 4:
                printf("-------------------------------------------\n");
                printf("---------Encerrando Programa......!-------|\n");
                printf("------------------------------------------|\n");
                printf("-------HORA DA SAIDA DO SISTEMA-----------|\n");
                geraSaida();
                printf("   Horas: %d Minutos: %d Segundos: %d     |\n",tempoSaida->tm_hour,tempoSaida->tm_min,tempoSaida->tm_sec);
                printf("-------------------------------------------\n");
                fclose(arquivo);
                break;
          default:
                 printf("Opção Escolhida e Invalida! Programa Encerrado!\n");
    }
 }while(op < 4 && op > 0);
}


//função que cadastra aluno
//recebe um aluno por referencia
void cadAluno(Aluno *a) {
 printf("Nome: ");
 setbuf(stdin,NULL);
 gets(a->nome);
 printf("Idade: ");
 setbuf(stdin,NULL);
 scanf("%i",&a->idade);
 printf("Matricula: ");
 setbuf(stdin,NULL);
 gets(a->matricula);
 printf("CPF: ");
 setbuf(stdin,NULL);
 gets(a->cpf);
}

//função que mostrara todos os alunos cadastrados
void getAlunos(Aluno a[]) {
 int i;
 for(i = 0; i < qtdAlunos; i += 1) {
    printf("-------------\n");
    printf("Aluno -> [%d]\n",i);
    printf("Nome :: %s\n",a[i].nome);
    printf("Idade :: %d\n",a[i].idade);
    printf("CPF :: %s\n",a[i].cpf);
    printf("Matricula :: %s\n",a[i].matricula);
    printf("-------------\n");
 }
}


//função que gera um arquivo, com todos os dados dos alunos cadastrados, gera meio que um relatorio
void geraRelatorio(FILE **arquivo,Aluno a[]) {
 int i;
 //verifico se o arquivo existe
 if(*(arquivo) == NULL)
    return;
 fputs("            BEM VINDO, AQUI ESTA SEU RELATORIO GERADO, POR MEIO DO SISTEMA QUE VOCÊ USOU\n",*(arquivo));
 fprintf(*(arquivo),"                     DATA: %i/%i/%i",tempoEntrada->tm_mday,tempoEntrada->tm_mon + 1,tempoEntrada->tm_year + 1900);
 fputc('\t',*(arquivo));
 fprintf(*(arquivo),"            HORA: %d:%d:%d\n",tempoSaida->tm_hour,tempoSaida->tm_min,tempoSaida->tm_sec);
 fputs("                         ABAIXO ESTÃO OS DADOS DOS ALUNOS CADASTRADOS\n",*(arquivo));
 for(i = 0; i < qtdAlunos; i += 1) {
     fprintf(*(arquivo),"-----------------------Aluno [%d]-------------------\n",i);
     fputs("---------------------------------------------------\n",*(arquivo));
     fputs(a[i].nome,*(arquivo));
     fputc('\t',*(arquivo));
     fputs(a[i].matricula,*(arquivo));
     fputc('\t',*(arquivo));
     fputs(a[i].cpf,*(arquivo));
     fputc('\t',*(arquivo));
     fprintf(*(arquivo),"%d",a[i].idade);
     fputc('\n',*(arquivo));
 }
}

//função que gera o arquivo com um caminho relativo, porque em função ?
//para que gere o arquivo so quando tiver real necessidade
FILE* geraArquivo() {
 FILE *arquivo = fopen("Relatorio-Alunos.txt","w");
 return arquivo;
}

void geraSaida() {
 //pegando data e hora do sistema
 time_t t2;
 time(&t2);
 //inicializa estrutura de tempo
 tempoSaida = localtime(&t2);
}


//função que gera a entrada de tempo no programa
void geraEntrada() {
 //pegando data e hora do sistema
 time_t t;
 time(&t);
 //inicializa estrutura de tempo
 tempoEntrada = localtime(&t);
}

