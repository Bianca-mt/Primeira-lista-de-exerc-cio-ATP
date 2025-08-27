#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada, degraus;

    printf("Digite a altura do degrau (m): ");
    scanf("%f", &alturaDegrau);
    printf("Digite a altura desejada (m): ");
    scanf("%f", &alturaDesejada);

    degraus = alturaDesejada / alturaDegrau;

    printf("Serao necessarios %.0f degraus\n", degraus);

    return 0;
}
