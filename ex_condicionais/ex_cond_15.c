/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac¸a um programa em que o usuario entre com o valor e o estado destino do ´
produto e o programa retorne o prec¸o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado n ´ ao for v ˜ alido, mostrar uma mensagem ´
de erro
*/

#include <stdio.h>

int main()
{
    float preco;
    int estado;

    printf("Valor do produto: R$");
    scanf("%f", &preco);

    printf("Em qual estado sera vendido o produto: \n[1] MG\n[2] SP\n[3] RJ\n[4] MS\n>>");
    scanf("%d", &estado);

    switch (estado)
    {
    case 1:
        printf("O produto foi taxado em 7%%, o valor final sera de %.2f",preco + preco *7/100);
        break;

    case 2:
        printf("O produto foi taxado em 12%%, o valor final sera de %.2f",preco + preco *12/100);
        break;

    case 3:
        printf("O produto foi taxado em 15%%, o valor final sera de %.2f",preco + preco *15/100);
        break;

    case 4:
        printf("O produto foi taxado em 8%%, o valor final sera de %.2f",preco + preco *8/100);
        break;
    
    default:
        break;
    }
    return 0;
}
