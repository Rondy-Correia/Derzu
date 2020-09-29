#include <stdio.h>
#include <stdlib.h>

int main () {
    float m, h;
    float IMC;

    printf("Calculo de IMC:\n\n");
    printf("digite a massa em quilos:\n");
    scanf("%f", &m);
    printf("digite a altura em metros:\n");
    scanf("%f", &h);

    IMC = m / (h * h);

    printf("o IMC calculado foi: %.2f\n", IMC);

    if (IMC < 18.5) {
        printf ("Abaixo do peso\n");}
        else if (IMC >= 18.5 && IMC < 25) {
        printf("Peso normal\n");}
        else if (IMC >= 25 && IMC <30){
        printf("Sobrepeso \n");}
        else{
        printf("Obesidade \n");
        }
}