/*
Faça um programa que leia o valor de um produto, o percentual do desconto desejado e
imprima o valor do desconto e o valor do produto subtraindo o desconto.
*/

#include <stdio.h>

int main()
{
    float preco;
    int desconto;

    printf("Digite o valor do produto: R$");
    scanf("%f", &preco);
    printf("Digite o valor do desconto: %%");
    scanf("%d",&desconto);

    printf("O seu produto com valor R$%.2f teve um desconto de %d e agora eh R$%.2f",
    preco, desconto, preco - (preco*desconto/100));
    return 0;
}
