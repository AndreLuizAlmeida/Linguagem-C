#include <stdio.h>

int main(){
  float altura;
  char sexo ;
  printf("Insira sua altura em metros: ");scanf("%f",&altura);
  printf("Insira o sexo, masculino('M'), feminino('F'): ");scanf("%c",&sexo);
  switch (sexo)
  {
  case 'M':
    printf("O seu peso ideal é: %.2f",72.7*altura-58);
    break;
  case 'F':
    printf("O seu peso ideal é: %.2f",62.1*altura-44.7);
    break;
  default:
    printf("Dado inserido incorretamente!");
    break;
  }
  return 0;
}