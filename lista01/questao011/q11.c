#include <stdio.h>
#include <math.h>

int main() {
    //declaracao de variaveis
    float diagonal, area;

    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%f", &diagonal);

    //processamento de dados
    area = (diagonal * diagonal) / 2;

    //saida de dados
    printf("A area do quadrado eh: %.2f\n", area);

    return 0;
}
