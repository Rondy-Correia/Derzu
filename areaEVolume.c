#include <stdio.h>

int main() {
    float PI = 3.14159265;
    float R;
    float A;
    float V;

    printf("Adicione o valor de R:");
    scanf("%f", &R);

    A = PI * (R * R);
    V = ((4 * PI) / 3) * (R * R * R);

    printf("Area: %.2f\n", A);
    printf("Volume: %.2f", V);
}