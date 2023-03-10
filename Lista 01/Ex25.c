#include <stdio.h>

int main(){
  int horas,minutos,segundos,total_segundos;

  printf("Insira o total de segundos a ser calculado: ");scanf("%i",&total_segundos);

  horas = total_segundos/3600;
  minutos = (total_segundos - horas*3600)/60;
  segundos = total_segundos - horas*3600 - minutos*60;

  printf("%i h %i min e %i sec\n", horas, minutos, segundos);

  return 0;
}