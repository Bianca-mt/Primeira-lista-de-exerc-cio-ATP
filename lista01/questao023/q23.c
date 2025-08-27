#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    int A, B, C, temp;

    // Entrada
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Troca de valores (sem if/else ou laços)
    temp = A;  // guarda A
    A = B;     // A recebe B
    B = C;     // B recebe C
    C = temp;  // C recebe o valor antigo de A

    // Saída
    printf("Agora A = %d, B = %d e C = %d\n", A, B, C);

    return 0;
}

