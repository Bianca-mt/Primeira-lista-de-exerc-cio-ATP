#include <stdio.h>

int main() {
    int peso;
    //declaracao de variaveis
    float peso_gramas, peso_novo;

    printf("Digite o peso da pessoa (em kg): ");
    scanf("%d", &peso);

    //processamento de dados
    peso_gramas = peso * 1000;
    peso_novo = peso_gramas * 1.05; // engordar 5%

    //saida
    printf("Peso em gramas: %.2f g\n", peso_gramas);
    printf("Novo peso com 5%% a mais: %.2f g\n", peso_novo);

    return 0;
}
