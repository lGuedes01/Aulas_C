/*
Faça um programa que efetue a apresentação do valor da conversão em real (R$) de um valor
lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.
*/

#include <stdio.h>

int main()
{
    float real, dolar, cotacao;

    printf("Insira uma quantidade em real [R$]: ");
    scanf("%f", &real);

    printf("Insira a cotacao atual do dolar: ");
    scanf("%f", &cotacao);

    dolar = real*cotacao;

    printf("\nR$%.2f em dolar eh $%.2f", real, dolar);
    return 0;
}
