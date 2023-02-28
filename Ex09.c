#include <stdio.h>

int main(){
  int valor;
  printf("Insira um valor inteiro: ");scanf("%i",&valor);
  printf("Os números anterior e sucessor de %i respectivamente são %i e %i",valor,valor-1,valor+1);
  return 0;
}