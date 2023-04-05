/*
 Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.
*/

#include <stdio.h>

int main()
{
    float salario, emprestimo, prestacao;
    int parcelas;

    printf("Salario: ");
    scanf("%f",&salario);

    printf("Emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Quantidade de parcelas: ");
    scanf("%d", &parcelas);

    prestacao = emprestimo/parcelas;

    if (prestacao > salario * 0.20)
    {
        printf("Emprestimo NAO concedido");
    }
    else
    {
        printf("Emprestimo concedido");
    }
}
