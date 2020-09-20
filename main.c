#include <stdio.h>

int main(void) {
  float tempCelsius, temFahrenheit;

  printf("\nCONTROLE DE CONVID\n");
  printf("Informe a temperatura em fahrenheit que deseja analisar: ");
  scanf("%f", &temFahrenheit);
  tempCelsius = (temFahrenheit - 32) / 1.8;
  printf("\n======================= \n");
  printf("Resultado da conversão: \n");
  printf("°F: %.2f -> °C: %.2f\n", temFahrenheit, tempCelsius);
  printf("\n\n-------------------\n");
 
  if (tempCelsius <= 37.5) {
    printf(" Entrada Liberada!");
  } else {
    printf(" Entrada Bloqueada!");
  }
 
  printf("\n-------------------\n");
  return 0;
}