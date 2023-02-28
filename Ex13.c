#include <stdio.h>

int main(){
  int a,b,c;
  printf("Digite o valor da variável A: ");scanf("%i", &a);
	printf("Digite o valor da variável B: ");scanf("%i", &b);
  c = a, a = b, b = c;
  printf("Valores após troca:\n");
  printf("A: %i\nB: %i",a,b);
  return 0;
}