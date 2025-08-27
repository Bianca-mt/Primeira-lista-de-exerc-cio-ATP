#include <stdio.h>

int main() {
    float salario, novo;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    novo = salario * 1.37;

    printf("Novo salario: %.2f\n", novo);

    return 0;
}


