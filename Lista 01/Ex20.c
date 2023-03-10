#include <stdio.h>

int main() {
    int num, resto;

    printf("Insira um número inteiro: ");scanf("%i", &num);

    resto = num % 2;

    switch(resto) {
        case 0:
            printf("O número %i é par.\n", num);
            break;
        default:
            printf("O número %i é ímpar.\n", num);
    }

    return 0;
}
