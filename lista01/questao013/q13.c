#include <stdio.h>

int main() {
    //declaracao de variavaeis
    float salario, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    //processamento de dados
    novoSalario = salario * 1.25;

    //saida
    printf("O novo salario com aumento de 25%% eh: %.2f\n", novoSalario);

    return 0;
}
