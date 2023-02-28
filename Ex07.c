#include <stdio.h>

int main(){
  int horas,minutos,segundos;
  printf("Insira as horas: ");scanf("%i",&horas);
  printf("Insira os minutos: ");scanf("%i",&minutos);
  printf("Insira as segundos: ");scanf("%i",&segundos);
  printf("O tempo total em segunsos é: %i",(horas*60*60)+(minutos*60)+segundos);
  return 0;
}