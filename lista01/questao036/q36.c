#include <stdio.h>

int main() {
    int aptos;
    float diaria, promocional, total100, total70, perda;

    printf("Digite o numero de apartamentos: ");
    scanf("%d", &aptos);
    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);

    promocional = diaria * 0.75;
    total100 = aptos * promocional;
    total70 = total100 * 0.7;
    perda = (aptos * diaria) - total100;

    printf("Diaria promocional: %.2f\n", promocional);
    printf("Total arrecadado com 100%%: %.2f\n", total100);
    printf("Total arrecadado com 70%%: %.2f\n", total70);
    printf("Perda pela promocao: %.2f\n", perda);

    return 0;
}
