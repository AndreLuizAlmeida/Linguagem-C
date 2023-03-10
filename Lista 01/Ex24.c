#include <stdio.h>

int main() {
   int x, n, resultado;

   printf("Insira o valor de x: ");scanf("%i", &x);
   printf("Insira o valor de n: ");scanf("%i", &n);
   
   resultado = x << n; 

   printf("O produto entre %i e 2 elevado a %i é igual a %i.\n", x, n, resultado);

   return 0;
}
