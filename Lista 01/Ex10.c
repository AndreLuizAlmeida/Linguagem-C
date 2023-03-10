#include <stdio.h>

int main(){
  float comprimento,altura,largura;
  printf("Calculadora de volume de caixas\n");
  printf("Insira o comprimento da caixa em metros: ");scanf("%f",&comprimento);
  printf("Insira a altura da caixa em metros: ");scanf("%f",&altura);
  printf("Insira a largura da caixa em metros: ");scanf("%f",&largura);
  printf("O volume da caixa em metros cúbicos é %.2f",comprimento*altura*largura);
  return 0;
}