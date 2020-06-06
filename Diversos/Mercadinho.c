/*
 * Objetivo: Criar um mercadinho que venda produtos e emita uma nota fiscal no final
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

//estrutura de um cliente
typedef struct cliente{
 char nome[25];
 char cpf[15];
 int idade;
}Cliente;

//menu do programa
void menu(int opcao);

//cadastrar um cliente
void setCad(Cliente *c);

//mostrar o cadastro de um cliente
void getCad(Cliente *c);

int main() {
 //para ler acentos e caracteres especias de arquivo
 SetConsoleOutputCP(65001);
 //para escrever acentos e mostrar no monitor caracteres de acentos e tius
 //setlocale(LC_ALL,"Portuguese");
 //abrindo arquivo
 //FILE *f = fopen("Produtos-Mercadinho.txt","r");
 //arquivo abriu
 //if(f == NULL) {
   // printf("Arquivo não aberto!\n");
 //}else{
       //escreve todos caracteres do arquivo no monitor
       //EOF -> fim de um arquivo -> end of file
     // char c = fgetc(f);
     // while(c != EOF) {
      //      printf("%c",c);//  //      c = fgetc(f);
     // }
 //}
 menu(1);
}

void menu(int opcao) {
Cliente c;
 switch(opcao) {
   case 1:
         printf("#Cadastro De Um Cliente#\n");
         cad(&c);
   break;
   case 2:
         printf("#Mostrar Dados De Um Cliente Cadastrado!\n");
         getCad(&c);
   break;
   default:

    break;
 }
}


//cadastrar um cliente
void cad(Cliente *c) {
 printf("-----------------\n");
 printf("Digite Seu Nome:  ");
 gets(c->nome);
 printf("Digite seu CPF: ");
 setbuf(stdin,NULL);
 gets(c->cpf);
 printf("Digite Sua Idade: ");
 scanf("%i",&c->idade);
 printf("-----------------\n");
}


//mostrar o cadastro de um cliente
void getCad(Cliente *c) {
if(c == NULL)
    return;
else{
    printf("Nome: %s",c->nome,"\n");
    printf("CPF: %s",c->cpf,"\n");
    printf("idade: %d",c->idade,"\n");
}




}
