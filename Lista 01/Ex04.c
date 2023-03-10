#include <stdio.h>

int main(){
  int num;
  printf("Insira um valor inteiro: "); scanf("%i",&num);
  printf("O seu triplo é %i\n",num*3);
  printf("O seu quadrado é %i\n",num*num);
  printf("O seu meio é %.2f\n",(float)num/2);
  return 0;
}