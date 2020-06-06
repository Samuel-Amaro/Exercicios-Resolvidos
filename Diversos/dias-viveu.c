#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
 * Programa que calcula a quantidade de dias que voçê ja viveu
 * sem contar com o ano atual e mes atual que estamos.
*/


int main() {
 //tradução dos caracteres acentuados e tius etc....
 setlocale(LC_ALL,"Portuguese");
 //obtendo as entradas de dados do usuario
 int diaNas,mesNas,anoNas;
 printf("Digite Seu Dia De Nascimento: ");
 scanf("%d",&diaNas);
 printf("Digite Seu Mês Nascimento: ");
 scanf("%d",&mesNas);
 printf("Digite Seu Ano Nascimento: ");
 scanf("%d",&anoNas);
 //obtendo datas atuais do sistema
 struct tm *dataHoraAtual;
 time_t tempo;
 time(&tempo);
 dataHoraAtual = localtime(&tempo);
 int diaAtu,mesAtu,anoAtu;
 //dia atual
 diaAtu = dataHoraAtual->tm_mday;
 //mes atual(acrescenta um porque se inicia em 0)
 mesAtu = dataHoraAtual->tm_mon + 1;
 //ano atual(acrescenta 1900 porque se inicia a contagem a partir desse ano)
 anoAtu = dataHoraAtual->tm_year + 1900;
 //calculando dias
 //variavel vai armazenar os dias calculados
 int dias = 0;
 //um vetor que vai ter uma generalização de meses de todos os anos, mas em anos bissextos são 366 dias
 int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 //fazendo um calculo sobre os anos que a pessoa ja viveu, e vendo qual deles são bissextos
 int anoDif,diaBissexto = 0; char anoString[4];
 //um ano e bissexto se e divisel por quatro e resto e == 0, e não pode terminar em 00, ai o mes de fevereiro tem 29 dias
 for(anoDif = anoNas; anoDif <= anoAtu; anoDif += 1) {
    //converte, o ano interio em string
    sprintf(anoString,"%d",anoDif);
    //a logica nesse if(se o ano for divisel por quatro, e se os dois ultimos digitos do ano, forem 00), esse ano que esta sendo usado não e bissexto
    if(anoDif % 4 == 0 && anoString[2] == '0' &&  anoString[3] == '0') {
       //ano não e bissexto
    }else if(anoDif % 4 == 0) {
             diaBissexto += 1;
             printf("Ano bissexto: %d\n",anoDif);
    }
 }
 //obtendo a diferença de anos que ja viveu
 int anosDiferenca = 0;
 anosDiferenca = anoAtu - anoNas;
 //se multiplicar os anos de diferenca por 365 vai, dar a soma total de dias ja vividos nesses anos
 dias = anosDiferenca * 365;
 //acrescentado os anos bissextos
 dias += diaBissexto;
 //apos meu aniversario no ano atual que esta sendo, calculo os dias ja vividos apos o aniversario
 int mesDif, mes, diasMes = 0, diasDif;
 if(mesNas == meses[mesNas]) {
    diasMes = 31;
 }
 //e faço os descontos dos dias que ja passou e viveu no mes
 diasDif = diasMes - diaAtu;
 diasMes -= diasDif;
 dias += diasMes;
 printf("Dias Ja Vividos: %d\n",dias);
 return 0;
}

