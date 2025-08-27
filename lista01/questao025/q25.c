#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Para usar a funcao pow()

int main() {
    // Declaração
    float P, i, n, acumulado;

    // Entrada
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &P);

    printf("Digite a taxa (em decimal, ex: 0.02 para 2%%): ");
    scanf("%f", &i);

    printf("Digite o numero de meses (n): ");
    scanf("%f", &n);

    // Fórmula: acumulado = (P * ( (1+i)^n - 1 )) / i
    acumulado = (P * (pow(1 + i, n) - 1)) / i;

    // Saída
    printf("O valor acumulado e: R$ %.2f\n", acumulado);

    return 0;
}

