#include <stdio.h>

int main() {
    float valor, prestacao;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    prestacao = valor / 5;

    printf("Valor de cada prestacao: %.2f\n", prestacao);

    return 0;
}

