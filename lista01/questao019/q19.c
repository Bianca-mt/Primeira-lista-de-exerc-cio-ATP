#include <stdio.h>

int main() {
    //declaracao de variaveis
    float largura, comprimento, area;
    printf("Digite a largura: ");
    scanf("%f", &largura);
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    //processamento e saida
    area = largura * comprimento;
    printf("Area do lote: %.2f\n", area);
    return 0;
}
