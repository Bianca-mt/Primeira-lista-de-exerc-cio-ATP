#include <stdio.h>

int main() {
    int nascimento, atual, idade, idade2028;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &atual);

    idade = atual - nascimento;
    idade2028 = 2028 - nascimento;

    printf("Idade atual: %d\n", idade);
    printf("Idade em 2028: %d\n", idade2028);

    return 0;
}
