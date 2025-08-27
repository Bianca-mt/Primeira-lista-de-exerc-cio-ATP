#include <stdio.h>

int main() {
    //declaraçao de variaveis
    float salario, imposto;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    //processamento de dados
    imposto = salario * 0.05;

    //saida
    printf("O valor do imposto de renda a ser pago: %.2f\n", imposto);

    return 0;
}
