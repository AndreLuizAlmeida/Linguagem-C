#include <stdio.h>

int main(){
    float valor_dia = 50.25, valor_liquido, gratificacao;
    int dias, imposto = 10;

    printf("Insira a quantidade de dias trabalhados: ");scanf("%i",&dias);
    if (dias <= 10)
    {
        gratificacao = 0;
    } else if(10 < dias <= 20){
        gratificacao = valor_dia*dias*(0.2);
    } else if (30 <= dias)
    {
        gratificacao = valor_dia*dias*(0.3);
    }
    valor_liquido = valor_dia*dias + gratificacao;
    valor_liquido -= valor_liquido*imposto/100;
    printf("O salário recebido final do mes foi: %.2f",valor_liquido);
}