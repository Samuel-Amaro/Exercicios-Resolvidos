#include <stdio.h>


float calculaSalario(int horasTrabalhadas,float valorHoraTrabalhada);


int main() {
 int nFuncionario,horasTrabalhadas;
 float valorHoraTrabalhada;
 printf("Seu Numero: ");
 scanf("%d",&nFuncionario);
 printf("Horas Trabalhadas: ");
 scanf("%d",&horasTrabalhadas);
 printf("Horas Trabalhadas: ");
 scanf("%f",&valorHoraTrabalhada);
 printf("NUMERO = %d\n",nFuncionario);
 printf("SALARIO R$ =  %.2f\n",calculaSalario(horasTrabalhadas,valorHoraTrabalhada));
 return 0;
}
float calculaSalario(int horasTrabalhadas,float valorHoraTrabalhada) {
 float salario = horasTrabalhadas * valorHoraTrabalhada;
 return salario;
}
