#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades, inverso;

    printf("Insira um numero de tres digitos: ");
    scanf("%i", &numero);

    centenas = numero / 100;
    dezenas = (numero % 100) / 10;
    unidades = numero % 10;

    inverso = unidades * 100 + dezenas * 10 + centenas;

    printf("O inverso do numero %i é %i", numero, inverso);

    return 0;
}
