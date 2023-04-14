#include <stdio.h>

int main(void) {
  
  int numHoras, horasExtras;
  float valorHora, valorHoraExtra, salarioBruto, salarioExtra;
  horasExtras = 0;
  do
  printf("Ingrese el numero de horas trabajas: ");
  scanf("%d",&numHoras);
  printf("El numero de horas trabajadas en el mes es: %d",numHoras);
  printf("\nIngrese el valor por horas: ");
  scanf("%f",&valorHora);
  printf("El valor por hora es: %.2f",valorHora);
  if(numHoras > 40)
    horasExtras = numHoras -40;

  if(horasExtras <= 10)
    valorHoraExtra = valorHora *1.1;
  else if (horasExtras <= 15)
    valorHoraExtra = valorHora *1.15;
  else
    valorHoraExtra = valorHora *1.2;

  if(horasExtras > 0)
    salarioBruto = 40 *valorHora;
  else
    salarioBruto = numHoras * valorHora;

  salarioExtra = horasExtras * valorHoraExtra;
  salarioBruto += salarioExtra;

  printf("El valor del salario bruto es: %.2f",salarioBruto);
  } while (continuar == 1);
  return 0;
}