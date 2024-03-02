#include <stdio.h>
 
int main()
{
  float cantidad;
  float quetzal, dolar, euro;
  int opcion;
 
  printf("Opciones:");
  printf("\nOpción 1: Quetzales a Dólares");
  printf("\nOpción 2: Dólares a Quetzales");
  printf("\nOpción 3: Quetzales a Euros");
  printf("\nOpción 4: Euros a Quetzales");
  printf("\nOpción 5: Dólares a Euros");
  printf("\nOpción 6: Euros a Dólares");
 
  printf("\nEscriba el número de opción deseada: ");
  scanf("%d", &opcion);
 
  printf("Escriba la cantidad a convertir\n");
  scanf("%f", &cantidad);
 
  switch (opcion)
  {
    case 1: // Quetzales a Dólares
        dolar = cantidad / 7.81;
        printf("%.2f GTQ =  %.2f USD\n\n", cantidad, dolar);
        break;
 
    case 2: // Dólares a Quetzales
        quetzal = cantidad * 7.81;
        printf("\n%.2f USD =  %.2f GTQ\n\n", cantidad, quetzal);
        break;
 
    case 3: // Quetzales a Euros
        euro = cantidad / 8.46;
        printf("\n%.2f GTQ =  %.2f EU\n\n", cantidad, euro);
        break;
 
    case 4: // Euros a Quetzales
        quetzal = cantidad * 8.46;
        printf("\n%.2f EU =  %.2f GTQ\n\n", cantidad, quetzal);
        break;

    case 5: // Dólares a Euros
        euro = cantidad / 1.08;
        printf("%.2f USD =  %.2f EU\n\n", cantidad, euro);
        break;
 
    case 6: // Euros a Dólares
        dolar = cantidad * 1.08;
        printf("\n%.2f EU =  %.2f USD\n\n", cantidad, dolar);
        break;
  
     //Predeterminado
    default:
        printf("\nDato inválido");
  }
 
  return 0;
}