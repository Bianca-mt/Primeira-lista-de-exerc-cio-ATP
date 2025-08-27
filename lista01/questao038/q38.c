#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo de viagem (h): ");
    scanf("%f", &tempo);
    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Combustivel gasto: %.2f litros\n", litros);

    return 0;
}
