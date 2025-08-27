#include <stdio.h>
#include <math.h>
    int main() {
        //declaraçao de variaveis
        float a, b, resultado;
        printf("Digite um numero numero: ");
        scanf("%f" ,&a);
        printf("Digite outro numero numero: ");
        scanf("%f" ,&b);

        //processamentto e saida
        resultado = pow(a, b);

        printf("%.2f elevado a %.2f = %.2f\n", a, b, resultado);
        return 0;
}


