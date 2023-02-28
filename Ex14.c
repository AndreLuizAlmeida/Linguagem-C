#include <stdio.h>

int main(){
  float celsius;
  printf("Insira a temperatura em graus Celsius: ");scanf("%f",&celsius);
  printf("A temperatura %.2f em graus Celsius equivale a %.2f em graus Fahrenheit",celsius,(9*celsius+160)/5.0);
  return 0;
}