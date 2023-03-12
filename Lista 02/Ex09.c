#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, proximo, i;

    printf("Serie de Fibonacci ate o vigesimo termo:\n");

    for (i = 1; i <= 20; i++) {
        printf("%d, ", n2);
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }

    return 0;
}