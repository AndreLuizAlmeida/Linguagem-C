#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float media_aritmetica, media_geometrica;

    printf("Insira o primeiro numero: ");scanf("%f", &num1);
    printf("Insira o segundo numero: ");scanf("%f", &num2);  
    printf("Insira o terceiro numero: ");scanf("%f", &num3);  

    media_aritmetica = (num1 + num2 + num3) / 3;
    media_geometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media geometrica: %.2f\n", media_geometrica);

    return 0;
}
