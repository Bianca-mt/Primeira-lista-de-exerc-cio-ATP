#include <stdio.h>

int main() {
    //declaracao de variaveis
    int ano_nasc, ano_atual, idade, idade_semanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    //processamento e saida
    idade = ano_atual - ano_nasc;
    idade_semanas = idade * 52; // aproximado

    printf("Idade: %d anos\n", idade);
    printf("Idade em semanas: %d semanas\n", idade_semanas);

    return 0;

}
