#include <stdio.h>

int main() {
    //declaracao de variaveis
    float comp, larg, prof, volume, preco;
    printf("Digite comprimento, largura e profundidade: ");
    scanf("%f %f %f", &comp, &larg, &prof);

    //processamento e saida
    volume = comp * larg * prof;
    preco = volume * 45.0;

    printf("Preco da piscina: R$ %.2f\n", preco);
    return 0;
}
