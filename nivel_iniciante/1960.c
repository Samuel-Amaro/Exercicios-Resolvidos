#include <stdio.h>
#include <string.h>

 //estrutura de um numero romano
 typedef struct romano{
 int numero;
 char romano[10];
 }Romano;

 //para prencher um vetor de numeros romanos
 void setRomano(Romano *romanos[]);

 //obter numeros romanos
 void getRomanos(Romano romanos[]);

int main() {
 //vetor de numero romanos
 Romano romanos[13];
 //preenchendo vetor com os numeros romanos necessarios
 setRomano(romanos);

 getRomanos(romanos);
 return 0;
 }

 void setRomano(Romano *romanos[]) {
  romanos[0].numero = 1;
  romanos[0].romano[0] = "I";
  romanos[1].numero = 2;
  romanos[1].romano[1] = "II";
  romanos[2].numero = 3;
  romanos[2].romano[2] = "III";
  romanos[3].numero = 4;
  romanos[3].romano[1] = "IV";
  romanos[4].numero = 5;
  romanos[4].romano[0] = "V";
  romanos[5].numero = 6;
  romanos[5].romano[1] = "VI";
  romanos[6].numero = 7;
  romanos[6].romano[2] = "VII";
  romanos[7].numero = 8;
  romanos[7].romano[3] = "VIII";
  romanos[8].numero = 9;
  romanos[8].romano[1] = "IX";
  romanos[9].numero = 10;
  romanos[9].romano[0] = "X";
  romanos[10].numero = 50;
  romanos[10].romano[0] = "L";
  romanos[11].numero = 100;
  romanos[11].romano[0] = "C";
  romanos[12].numero = 500;
  romanos[12].romano[0] = "D";
  romanos[13].numero = 1000;
  romanos[13].romano[0] = "M";
 }

 void getRomanos(Romano romanos[]) {
 int tamanho = 0;
 for(int i = 0; i < 14; i += 1) {
     printf("%d -> %s\n",romanos[i].numero,romanos[i].romano);

 }
}
