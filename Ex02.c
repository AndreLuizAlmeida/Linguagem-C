#include <stdio.h>

int main(){
    int valor;

    printf("Insira um valor: "); scanf("%i",&valor);
    
    printf("Valor em Hexadecimal: %x\n",valor);

    printf("Valor em Octal: %o\n",valor);
  return 0;
}