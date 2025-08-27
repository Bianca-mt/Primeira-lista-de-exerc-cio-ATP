#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, lado, raio, baseMaior, baseMenor, diagonalMaior, diagonalMenor;

    // Triangulo
    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &base, &altura);
    printf("Area do triangulo: %.2f\n", (base * altura) / 2);

    // Quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Area do quadrado: %.2f\n", lado * lado);

    // Circulo
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area do circulo: %.2f\n", M_PI * raio * raio);

    // Trapezio
    printf("Digite a base maior, a base menor e a altura do trapezio: ");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);
    printf("Area do trapezio: %.2f\n", ((baseMaior + baseMenor) * altura) / 2);

    // Retangulo
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    printf("Area do retangulo: %.2f\n", base * altura);

    // Losango
    printf("Digite as diagonais maior e menor do losango: ");
    scanf("%f %f", &diagonalMaior, &diagonalMenor);
    printf("Area do losango: %.2f\n", (diagonalMaior * diagonalMenor) / 2);

    return 0;
}




