#include <stdio.h>

int main(){
  float num;
  printf("Insira o valor da conta: ");scanf("%f",&num);
  num += num * 0.1;
  printf("O valor da conta com os 10%% adicional fica %.2f\n",num);
  return 0;
}