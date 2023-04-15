#include <stdio.h>

int main() {
	//inputs:
  int continuar
   float total_horas_trabajadas, valor_por_hora, monto_ventas;
   //outputs:
   float salario_bruto, valor_bonificaciones, salario_neto, horas_extras;
   do{
   // Solicitando información de entrada
   printf("BIENVENIDO A LA FARMACÉUTICA \n");
   printf("Por favor, Ingrese el total de horas trabajadas: ");
   scanf("%f", &total_horas_trabajadas);
   while(total_horas_trabajadas <= 0 or total_horas_trabajadas >720){
   	printf("Ingresa un valor coherente porfa:\n");
   	 scanf("%f", &total_horas_trabajadas);
   }
   
   printf("Gracias! Ingrese el valor (USD) por hora trabajada: ");
   scanf("%f", &valor_por_hora);
   while(valor_por_hora <= 0){
   	printf("Debes pagar un valor positivo a tus empleados por sus labores!");
   	scanf("%f", &valor_por_hora);
   }
   
   printf("Gracias!Ingrese el monto de ventas realizadas (USD): ");
   scanf("%f", &monto_ventas);
   while(monto_ventas <= 0){
   	printf("Ingresa por favor un valor real (o si tu empleado hizo 0$ en ventas, anda preparando esa carta de despido)");
    scanf("%f", &monto_ventas);
   }
  
   if (total_horas_trabajadas <= 40) {
      salario_bruto = total_horas_trabajadas * valor_por_hora;
      horas_extras = 0;
   } else if (total_horas_trabajadas <= 50) {
      salario_bruto = (total_horas_trabajadas*total_horas_trabajadas)+()
      horas_extras = total_horas_trabajadas - 40;
   } else if (total_horas_trabajadas <= 55) {
      salario_bruto = (40 * valor_por_hora) + (10 * (valor_por_hora * 1.1)) + ((total_horas_trabajadas - 50) * (valor_por_hora * 1.15));
      horas_extras = total_horas_trabajadas - 40;
   } else {
      salario_bruto = (40 * valor_por_hora) + (10 * (valor_por_hora * 1.1)) + (5 * (valor_por_hora * 1.15)) + ((total_horas_trabajadas - 55) * (valor_por_hora * 1.2));
      horas_extras = total_horas_trabajadas - 40;
   }
   
   // Bonificaciones:
   if (monto_ventas <= 800) {
      valor_bonificaciones = monto_ventas * 0.02;
   } else if (monto_ventas <= 1500) {
      valor_bonificaciones = (800 * 0.02) + ((monto_ventas - 800) * 0.04);
   } else if (monto_ventas <= 3000) {
      valor_bonificaciones = (800 * 0.02) + (700 * 0.04) + ((monto_ventas - 1500) * 0.06);
   } else {
      valor_bonificaciones = (800 * 0.02) + (700 * 0.04) + (1500 * 0.06) + ((monto_ventas - 3000) * 0.08);
   }
   
   // Calculando salario neto
   salario_neto = salario_bruto - (salario_bruto * 0.0945) + valor_bonificaciones;
     do
     prinft("Desea continuar?(1para si ó dos para no):");
     scanf("%d",&continuar);
} while (continuar!=1 && continuar!=2);
} while (continuar=1)
   // Print final con datos de salida 
   printf("\nSalario bruto: %.2f", salario_bruto);
   printf("\nHoras extras: %.2f", horas_extras);
    
  return 0;
}