#include <stdio.h>

int main() {
    float custo, preco, qtdCusto, qtdLucro;

    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Digite o preco do convite: ");
    scanf("%f", &preco);

    qtdCusto = custo / preco;
    qtdLucro = (custo * 1.23) / preco;

    printf("Convites para cobrir custo: %.0f\n", qtdCusto);
    printf("Convites para lucro de 23%%: %.0f\n", qtdLucro);

    return 0;
}
