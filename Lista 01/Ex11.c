#include <stdio.h>

int main(){
  float dolar,real;
  printf("Insira o valor da cotação do dolar: ");scanf("%f",&dolar);
  printf("Insira o valor em reais: ");scanf("%f",&real);
  printf("O valor de R$%.2f convertido para dolar é $%.2f",real,real/dolar);
  return 0;
}