#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Insira um valor inteiro: ");scanf("%i",&num1);
    printf("Insira outro valor inteiro: ");scanf("%i",&num2);
    
    resto = num1 % num2;

    switch(resto) {
        case 0:
            printf("%i é múltiplo de %i.\n", num1, num2);
            break;
        default:
            printf("%i não é múltiplo de %i.\n", num1, num2);
    }

    return 0;
}
