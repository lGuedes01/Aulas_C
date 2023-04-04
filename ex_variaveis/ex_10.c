/*
Faça um programa que calcule a conversão entre graus centígrados e Fahrenheit. Para isso,
leia o valorentígrados e calcule com base na fórmula a seguir
*/

#include <stdio.h>

int main()
{
    float graus_c;

    printf("Digite uma temperatura em Celcius: ");
    scanf("%f", &graus_c);
    printf("%.2f graus Celcius em Farenheint eh %.2f graus", graus_c, (graus_c*9 + 160)/5);
}
