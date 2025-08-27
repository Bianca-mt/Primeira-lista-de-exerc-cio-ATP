#include <stdio.h>

int main() {
    float custo, percentual, venda;

    printf("Digite o preco de custo: ");
    scanf("%f", &custo);
    printf("Digite o percentual de acrescimo: ");
    scanf("%f", &percentual);

    venda = custo + (custo * percentual / 100);

    printf("Valor de venda: %.2f\n", venda);

    return 0;
}
