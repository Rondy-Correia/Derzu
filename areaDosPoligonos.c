#include <stdio.h>

int main() {
    float A, B, C;
    float PI =  PI = 3.14159265;
    float TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    //area do triangulo
    printf("AREA DO TRIANGULO:\n");
    printf("digite o valor da base:\n");
    scanf("%f", &A);
    printf("digite o valor da altura:\n");
    scanf("%f", &C);

    TRIANGULO = A * C / 2;

    printf("Valor do triangulo: %f\n", TRIANGULO);

    //area do circulo
    printf("AREA DO CIRCULO:\n");
    printf("digite o valor do raio:\n");
    scanf("%f", &C);

    CIRCULO = PI * (C * C);

    printf("Valor do circulo: %f\n", CIRCULO);

    //area do trapezio
    printf("AREA DO TRAPEZIO:\n");
    printf("digite o valor da base:\n");
    scanf("%f", &A);
    printf("digite o valor da base:\n");
    scanf("%f", &B);
    printf("digite o valor da altura:\n");
    scanf("%f", &C);

    TRAPEZIO = ((A + B) * C) / 2;

    printf("Valor do trapezio: %f\n", TRAPEZIO);
    
    //area do quadrado
    printf("AREA DO QUADRADO:\n");
    printf("digite o valor do lado:\n");
    scanf("%f", &B);

    QUADRADO = B * B;

    printf("Valor do quadrado: %f\n", QUADRADO);

    //area do retangulo
    printf("AREA DO RETANGULO:\n");
    printf("digite o valor do lado 1:\n");
    scanf("%f", &A);
    printf("digite o valor do lado 2:\n");
    scanf("%f", &B);

    RETANGULO = A * B;

    printf("Valor do retangulo: %f\n", RETANGULO);
    printf("Putz fim");
}