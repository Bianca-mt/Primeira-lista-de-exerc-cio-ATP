#include <stdio.h>

int main() {
    //declaracao de variaveis
    float v1, v2, soma, media;
    printf("Digite dois valores: ");
    scanf("%f %f", &v1, &v2);

    //processamento e saida
    soma = v1 + v2;
    media = soma / 2;

    printf("Soma = %.2f\n", soma);
    printf("Media = %.2f\n", media);
    printf("Resto da soma %% v1 = %.2f\n", (int)soma % (int)v1);
    printf("Resto da soma %% v2 = %.2f\n", (int)soma % (int)v2);
    return 0;
}
