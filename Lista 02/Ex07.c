#include <stdio.h>

int main() {
    float num1, num2, resultado;
    
    printf("Digite o primeiro numero: ");scanf("%f", &num1);   
    printf("Digite o segundo numero (o divisor nao pode ser zero): ");scanf("%f", &num2);
     
    while (num2 == 0) {
        printf("Erro! O divisor nao pode ser zero. Digite um novo valor para o segundo numero: ");scanf("%f", &num2);    
    }
    
    resultado = num1 / num2;
    
    printf("O resultado da divisao de %.2f por %.2f eh: %.2f\n", num1, num2, resultado);
    
    return 0;
}