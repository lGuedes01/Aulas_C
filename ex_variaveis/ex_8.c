/* 
    Faça um programa que calcule o reajuste do salário de um funcionário. Para isso, o programa
    deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor
    do novo salário.
*/



#include <stdio.h>

int main()
{
   float salario, reajuste;

    printf("Salário atual: ");
    scanf("%f", &salario);
    printf("Reajusto necessário [%%]: ");
    scanf("%f", &reajuste);
    salario += (reajuste/100)*salario;
    printf("Novo salário: %.2f", salario);
    return 0;
}
