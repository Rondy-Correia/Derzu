#include <stdio.h>

int main() {
    //declaração de variaveis
    float Celsius;
    float Fahrenheint;
    
    //leitura de dados do usuario
    printf("Insira valor em Celsius: ");
    scanf("%f", &Celsius);

    //Conversão

    Fahrenheint = 9.0 / 5 * Celsius + 32;

    //Saída para usuario
    printf("Conversao resultante: %.2f ", Fahrenheint);
}