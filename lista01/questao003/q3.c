#include <stdio.h>

int main(void) {
    //declaraçao de variaveis
    int n1,n2,divisao=0;
    printf("Entre com o primeiro valor:\n");
    scanf("%d",&n1);
    printf("Entre com o segundo valor:\n");
    scanf("%d",&n2);
    //processamento e saida
    divisao= n1/n2;
    printf("O valor da divisao e: %d\n",divisao);
    return 0;
}