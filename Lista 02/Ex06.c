#include <stdio.h>

int main() {
    int candidato5 = 0, candidato7 = 0, votosBrancos = 0, votosNulos = 0;
    int voto, confirmarVoto;
    do {
        printf("Digite o numero do candidato (5-Paulo, 7-Renata) ou 0 para voto em branco e valores negativos para encerrar: ");scanf("%i", &voto);
        if (voto == 5) {
            printf("Confirmar voto em Paulo? (1-Sim, 0-Nao): ");scanf("%i", &confirmarVoto);
            if (confirmarVoto == 1) {
                candidato5++;
                printf("Voto confirmado em Paulo.\n\n");
            } else {
                printf("Voto nao confirmado.\n\n");
            }
        } else if (voto == 7) {
            printf("Confirmar voto em Renata? (1-Sim, 0-Nao): ");scanf("%i", &confirmarVoto);            
            if (confirmarVoto == 1) {
                candidato7++;
                printf("Voto confirmado em Renata.\n\n");
            } else {
                printf("Voto nao confirmado.\n\n");
            }
        } else if (voto == 0) {
            printf("Confirmar voto em branco? (1-Sim, 0-Nao): ");scanf("%i", &confirmarVoto);
            if (confirmarVoto == 1) {
                votosBrancos++;
                printf("Voto confirmado em branco.\n\n");
            } else {
                printf("Voto nao confirmado.\n\n");
            }
        } else {
            printf("Voto nulo.\n\n");
            votosNulos++;
        }
    } while (voto >= 0);

    int totalVotos = candidato5 + candidato7 + votosBrancos + votosNulos;
    double percentual5 = (double) candidato5 / totalVotos * 100;
    double percentual7 = (double) candidato7 / totalVotos * 100;
    double percentualBrancos = (double) votosBrancos / totalVotos * 100;
    double percentualNulos = (double) votosNulos / totalVotos * 100;

    printf("RESULTADO DA ELEICAO:\n\n");
    printf("Votos em Paulo: %d (%.2f%%)\n", candidato5, percentual5);
    printf("Votos em Renata: %d (%.2f%%)\n", candidato7, percentual7);
    printf("Votos em branco: %d (%.2f%%)\n", votosBrancos, percentualBrancos);
    printf("Votos nulos: %d (%.2f%%)\n", votosNulos, percentualNulos);

    if (candidato5 > candidato7) {
        printf("O candidato eleito foi Paulo.\n");
    } else if (candidato7 > candidato5) {
        printf("A candidata eleita foi Renata.\n");
    } else {
        printf("Empate entre Paulo e Renata.\n");
    }

    return 0;
}

