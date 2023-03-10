#include <stdio.h>

int main() {
    int n, maior, menor;
    
    printf("Insira um número inteiro (0 para sair): ");scanf("%i", &n);
    
    
    maior = menor = n;
    
    while (n != 0) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
        printf("Insira um número inteiro (0 para sair): ");scanf("%i", &n);
        
    }
    
    printf("Maior número digitado: %i\n", maior);
    printf("Menor número digitado: %i\n", menor);
    
    return 0;
}
