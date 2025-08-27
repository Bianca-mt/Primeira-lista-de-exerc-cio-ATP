#include <stdio.h>

int main() {
    float distancia, velocidade, tempo, velocidade_ms;

    printf("Digite a distancia (km): ");
    scanf("%f", &distancia);
    printf("Digite a velocidade (km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade; // tempo em horas
    velocidade_ms = (velocidade * 1000) / 3600; // conversão km/h -> m/s

    printf("Tempo medio: %.2f horas\n", tempo);
    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

    return 0;
}

