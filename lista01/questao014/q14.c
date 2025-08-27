#include <stdio.h>

int main() {
    float salario_minimo, qtd_kw, valor_kw, valor_total, valor_desconto;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%f", &qtd_kw);

    valor_kw = salario_minimo / 5.0; // 1 kW custa 1/5 do salario
    valor_kw = valor_kw / 100.0;     // supondo que são 100 kW

    valor_total = qtd_kw * valor_kw;
    valor_desconto = valor_total * 0.85; // 15% de desconto

    printf("Valor de cada kW: R$ %.2f\n", valor_kw);
    printf("Valor total a pagar: R$ %.2f\n", valor_total);
    printf("Valor com 15%% de desconto: R$ %.2f\n", valor_desconto);

    return 0;
}
