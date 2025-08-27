#include <stdio.h>

int main() {
    float fabrica, impostos, distribuidor, final;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &fabrica);

    impostos = fabrica * 0.45;
    distribuidor = (fabrica + impostos) * 0.28;
    final = fabrica + impostos + distribuidor;

    printf("Custo ao consumidor: %.2f\n", final);

    return 0;
}
