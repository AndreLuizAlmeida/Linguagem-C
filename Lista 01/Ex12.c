#include <stdio.h>

int main(){
  int num1,num2;
  printf("Insira o primeiro número: ");scanf("%f",&num1);
  printf("Insira o segundo número: ");scanf("%f",&num2);
  printf("Dado os valores %i e %i\nSoma: %i\nSubtração: %i\nMultiplicação: %i\nQuociente: %i\nResto da divisão: %i",num1,num2,num1+num2,num1-num2,num1*num2,num1/num2, num1 % num2);
  return 0;
}