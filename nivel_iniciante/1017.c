#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL,"Portuguese");
 int horas,velocidade;
 //tempo gasto na velocidade
 printf("Informe Horas: ");
 scanf("%i",&horas);
 //velocidade media percorrida na viagem
 printf("Informe Velocidade: ");
 scanf("%d",&velocidade);
 //o calculo pode ser feito assim
 // velocidade * hora / consumoMediocarro
 float km_l = (velocidade * horas) / 12;
 printf("Você vai precisar de %.3f KM/L para realizar sua viagem!\n",km_l);
 return 0;
}
