#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca para operações matemáticas

int main() {
    int n;
    double raiz, quadrado;

    // entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // processamento
    raiz = sqrt(n);          // raiz quadrada
    quadrado = pow(n, 2);    // numero elevado ao quadrado

    // saída
    printf("A raiz quadrada de %d e: %.2f\n", n, raiz);
    printf("%d elevado ao quadrado e: %.2f\n", n, quadrado);

    return 0;
}



