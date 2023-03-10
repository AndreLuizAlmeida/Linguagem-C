#include <stdio.h>

int main() {
    int num,modulo;

    printf("Insira um número inteiro: ");
    scanf("%i", &num);

    modulo = (num >= 0) ? num : -num;

    printf("O valor absoluto de %i é %i\n", num, modulo);

    return 0;
}
