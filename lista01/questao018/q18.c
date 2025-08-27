#include <stdio.h>

int main() {
    //declaracao de variaveis
    int q1, q2, q3;
    float v1, v2, v3, total;

    printf("Digite quantidade1 e valor1: ");
    scanf("%d %f", &q1, &v1);

    printf("Digite quantidade2 e valor2: ");
    scanf("%d %f", &q2, &v2);

    printf("Digite quantidade3 e valor3: ");
    scanf("%d %f", &q3, &v3);

    //processamento e saida
    total = (q1*v1) + (q2*v2) + (q3*v3);

    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
