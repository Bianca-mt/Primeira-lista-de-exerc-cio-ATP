#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração
    float valor, desconto, novo_valor;

    // Entrada
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    // Cálculo do desconto (9% do valor)
    desconto = valor * 0.09;
    novo_valor = valor - desconto;

    // Saída
    printf("O novo valor com 9%% de desconto e: R$ %.2f\n", novo_valor);

    return 0;
}

