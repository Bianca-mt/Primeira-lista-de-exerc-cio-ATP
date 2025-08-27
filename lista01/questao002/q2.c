#include <stdio.h>

int main(void) {
    //declaraçao de variaveis
    float n1,n2,resultado=0;
    printf("Digite o primeiro valor: ");
    scanf("%f",&n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    //processamento e saida
    resultado=n1+n2;
    printf("A diferenca e: %f\n",resultado);
    return 0 ;
}