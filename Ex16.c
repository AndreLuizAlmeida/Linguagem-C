#include <stdio.h>

int main(){
  float hora_aula,desconto,salario_liquido,salario_bruto;
  int num_horas;
  
  printf("Insira o valor da hora aula: ");scanf("%f",&hora_aula);
  printf("Insira a quantidade de horas trabalhadas: ");scanf("%i",&num_horas);
  printf("Insira o percentual de desconto do INSS: ");scanf("%f",&desconto);

  salario_bruto = num_horas*hora_aula;
  salario_liquido = salario_bruto - (salario_bruto*desconto/100);

  printf("Salário bruto: R$ %.2f\n",salario_bruto);
  printf("Salário líquido: R$ %.2f\n",salario_liquido);
  return 0;
}