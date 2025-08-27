#include <stdio.h>

int main() {
    //declaracao de variaveis
    float salario, salarioMinimo, qtdSalarios;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    //processamento e saida de dados
    qtdSalarios = salario / salarioMinimo;

    printf("O funcionario ganha %.2f salarios minimos\n", qtdSalarios);
    main.c
    return 0;
}



