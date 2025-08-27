#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y;

    printf("Digite os coeficientes a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    y = (a * f - c * d) / (a * e - b * d);
    x = (c * e - b * f) / (a * e - b * d);

    printf("x = %.2f, y = %.2f\n", x, y);

    return 0;
}
