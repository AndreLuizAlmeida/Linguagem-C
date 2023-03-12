#include <stdio.h>
#include <math.h>

int main() {
    float valor_mercadoria, entrada, prestacoes;
    int prestacoes_int;

    printf("Digite o valor da mercadoria: R$");scanf("%f", &valor_mercadoria);
   
    entrada = ceil(valor_mercadoria * 0.4);
    prestacoes = floor((valor_mercadoria - entrada) / 2);
    prestacoes_int = (int) prestacoes;

    printf("Valor da entrada: R$%.2f\n", entrada);
    printf("Valor das duas prestações: R$%d,00\n", prestacoes_int);

    return 0;
}