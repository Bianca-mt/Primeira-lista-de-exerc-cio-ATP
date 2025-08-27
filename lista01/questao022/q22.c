#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    float p1, p2, p3, p4, p5, pagamento, soma, troco;

    // Entrada dos valores dos produtos
    printf("Digite o valor do produto 1: ");
    scanf("%f", &p1);

    printf("Digite o valor do produto 2: ");
    scanf("%f", &p2);

    printf("Digite o valor do produto 3: ");
    scanf("%f", &p3);

    printf("Digite o valor do produto 4: ");
    scanf("%f", &p4);

    printf("Digite o valor do produto 5: ");
    scanf("%f", &p5);

    // Entrada do pagamento
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    // Cálculo da soma e do troco
    soma = p1 + p2 + p3 + p4 + p5;
    troco = pagamento - soma;

    // Saída
    printf("O valor total foi: R$ %.2f\n", soma);
    printf("O troco a ser devolvido e: R$ %.2f\n", troco);

    return 0;
}

