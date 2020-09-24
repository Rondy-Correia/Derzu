#include <stdio.h>

int main() {
    //declaração de variaveis
    int n1, n2;
    int d1, d2;

    //leitura dos dados do usuario
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite outro numero: ");
    scanf("%d", &n2);

    //calcula o dobro

    d1 = n1 * 2;
    d2 = n2 * 2;

    //exibe o resultado (saída)

    printf("dobro do primeiro: %d\n", d1);
    printf("dobro do segundo: %d\n", d2);
}