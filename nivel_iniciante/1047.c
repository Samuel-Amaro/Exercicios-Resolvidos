#include <stdio.h>

int main() {
 int horaInicial,minutoInicial,horaFinal,minutoFinal;
 printf("HORA INICIAL: ");
 scanf("%d",&horaInicial);
 printf("MINUTO INICIAL: ");
 scanf("%d",&minutoInicial);
 printf("HORA FINAL: ");
 scanf("%d",&horaFinal);
 printf("MINUTO FINAL: ");
 scanf("%d",&minutoFinal);
 //calculando tempo gasto do jogo em horas
 int i,contador = 0;
 for(i = horaInicial + 1; i <= 24; i += 1) {
     if(i != horaFinal) {
        contador += 1;
     }else
          break;
     if(i == 24)
        i = 0;
 }

 //calculando tempo gasto em minutos
 int j,contadorM = 0;
 for(j = minutoInicial; j <= 60; j += 1) {
     if(j != minutoFinal) {
        contadorM += 1;
     }else
          break;
      if(j == 60)
         j == 0;
 }

 printf("O JOGO DUROU %d HORA(s) e %d MINUTO(S)\n",contador + 1,contadorM);
 //vendo se a quantidade de minutos computa mais alguma hora
 float horasAdd = contadorM / 60;
 float hAdd;
 if(horasAdd > 1) {
    hAdd = horasAdd;
 }
 printf("O JOGO DUROU %d HORA(s) e %d MINUTO(S) e %.2f HORAS ADD\n",contador + 1,contadorM,hAdd);

 return 0;
}
