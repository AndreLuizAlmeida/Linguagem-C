#include <stdio.h>

int main() {
  int dia = -1;
  
  while (dia != 0) {
    printf("Insira um número de 1 a 7 (0 para sair): ");scanf("%i", &dia);
    switch (dia) {
      case 1:
        printf("Domingo\n");
        break;
      case 2:
        printf("Segunda-feira\n");
        break;
      case 3:
        printf("Terça-feira\n");
        break;
      case 4:
        printf("Quarta-feira\n");
        break;
      case 5:
        printf("Quinta-feira\n");
        break;
      case 6:
        printf("Sexta-feira\n");
        break;
      case 7:
        printf("Sábado\n");
        break;
      case 0:
        printf("Encerrando o programa...\n");
        break;
      default:
        printf("Número não correspondente a dia\n");
        break;
    }
  }
  
  return 0;
}