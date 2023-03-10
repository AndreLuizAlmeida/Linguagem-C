#include <stdio.h>

int main(){
  int jose = 150,pedro = 110,ano_jose = 2,ano_pedro = 3,anos;
  printf("Jose tem %icm de altura e Pedro tem %icm de altura\n",jose,pedro);
  printf("Jose cresce %icm por ano enquanto Pedro cresce %icm por ano\n",ano_jose,ano_pedro);
  do
  {
    jose += ano_jose;
    pedro += ano_pedro;
    anos += 1;
  } while (jose >= pedro);
  printf("Após %i anos José tem %icm e Pedro tem %icm de altura",anos,jose,pedro);
  
  return 0;
}