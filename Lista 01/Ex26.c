#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Insira a coordenada x do primeiro ponto: ");scanf("%f", &x1);
    printf("Insira a coordenada y do primeiro ponto: ");scanf("%f", &y1);
    printf("Insira a coordenada x do segundo ponto: ");scanf("%f", &x2);
    printf("Insira a coordenada y do segundo ponto: ");scanf("%f", &y2);
    
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}
