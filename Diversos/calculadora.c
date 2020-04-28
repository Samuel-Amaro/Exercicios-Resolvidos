#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int soma(int a,int b);

int subtracao(int a,int b);

int divisao(int a, int b);

int multiplicacao(int a,int b);

int main() {
 char operation,resposta;
 int a,b,s,sub,mult,div;
 setlocale(LC_ALL,"Portuguese");//para codificar acentos da lingua portuguesa

 do{
    printf("------------------------------\n");
    printf("         Calculadora         |\n");
    printf("         + -> soma           |\n");
    printf("         - -> subtração      |\n");
    printf("         * -> multiplicação  |\n");
    printf("         / -> divisão        |\n");
    printf("------------------------------\n");
    printf("Sua Escolha -> ");
    setbuf(stdin,NULL); //limpando buffer para não perder os caracter na memoria
    operation = getchar();
    switch(operation) {
     case '+':
           printf("Digite o Valor 1: ");
           scanf("%d",&a);
           printf("Digite o Valor 2: ");
           scanf("%d",&b);
           s = soma(a,b);
           printf("Resultado = %d\n",s);
           break;
     case '-':
           printf("Digite o Valor 1: ");
           scanf("%d",&a);
           printf("Digite o Valor 2: ");
           scanf("%d",&b);
           sub = subtracao(a,b);
           printf("Resultado = %d\n",sub);
           break;
     case '*':
           printf("Digite o Valor 1: ");
           scanf("%d",&a);
           printf("Digite o Valor 2: ");
           scanf("%d",&b);
           mult = multiplicacao(a,b);
           printf("Resultado = %d\n",mult);
           break;
     case '/':
           printf("Digite o Valor 1: ");
           scanf("%d",&a);
           printf("Digite o Valor 2: ");
           scanf("%d",&b);
           div = divisao(a,b);
           printf("Resultado divisão inteira = %d, resto = %d\n",div,a % b);
           break;
    default:
           printf("Operação Não Existe!\n");
    }
    printf("Continua Usando Calculadora ? S - Sim | N - Não\n");
    setbuf(stdin,NULL);
    resposta = getchar();
 }while(resposta != 'N' && resposta == 'S' || resposta != 'n' && resposta == 's');
 return 0;
}


int soma(int a,int b) {
 return (a + b);
}

int subtracao(int a,int b) {
 return (a - b);
}

int divisao(int a, int b) {
 return (a / b);
}

int multiplicacao(int a,int b) {
 return (a * b);
}
