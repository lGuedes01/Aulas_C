/*
Dados tres valores, ˆ A, B, C, verificar se eles podem ser valores dos lados de um triangulo ˆ
e, se forem, se e um tri ´ angulo escaleno, equil ˆ atero ou is ´ oscele, considerando os seguin- ´
tes conceitos:
• O comprimento de cada lado de um triangulo ˆ e menor do que a soma dos outros ´
dois lados.
• Chama-se equilatero o tri ´ angulo que tem tr ˆ es lados iguais. ˆ
• Denominam-se isosceles o tri ´ angulo que tem o comprimento de dois lados iguais. ˆ
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes
*/

#include <stdio.h>
#include <stdbool.h>

int existencia_triangulo(int lado_a,int lado_b,int lado_c)
{
    int existencia_triangulo;
    if ((lado_a > lado_b - lado_c && lado_a < lado_b + lado_c) && (lado_b > lado_a - lado_c && lado_b < lado_a + lado_c) &&
    (lado_c > lado_a - lado_b && lado_c < lado_a + lado_b))
    {
        existencia_triangulo = 1;
    }
    else
    {
        existencia_triangulo = 0;
    }
    return existencia_triangulo;
}

int escaleno(int lado_a,int lado_b,int lado_c)
{
    int escaleno;
    if (lado_a!=lado_b && lado_a!=lado_c && lado_b!=lado_c)
    {
        escaleno = 1;
    }
    else
    {
        escaleno = 0;
    }
    return escaleno;
}

int isosceles(int lado_a,int lado_b,int lado_c)
{
    int isosceles;
    if (lado_a==lado_b || lado_a==lado_c || lado_b==lado_c)
    {
        isosceles = 1;
    }
    else
    {
        isosceles = 0;
    }
    return isosceles;
    
}

int equilatero(int lado_a,int lado_b,int lado_c)
{
    int equilatero;
    if (lado_a==lado_b && lado_a==lado_c)
    {
        equilatero = 1;
    }
    else
    {
        equilatero = 0;
    }
    return equilatero;
    
}

int main()
{
    int lado_a, lado_b, lado_c;
    printf("De o valor do lado A do triangulo: ");
    scanf("%d", &lado_a);
    printf("De o valor do lado B do triangulo: ");
    scanf("%d", &lado_b);
    printf("De o valor do lado C do triangulo: ");
    scanf("%d", &lado_c);

    if (existencia_triangulo(lado_a, lado_b, lado_c))
    {
        if (escaleno(lado_a, lado_b, lado_c))
        {
            printf("\nEsse triangulo eh escaleno ");
        }
        if (isosceles(lado_a, lado_b, lado_c))
        {
            printf("\nEsse triangulo eh ");
        }
        if (equilatero(lado_a, lado_b, lado_c) && isosceles(lado_a, lado_b, lado_c))
        {
            printf(" e equilatero");
        }
        else if (equilatero(lado_a, lado_b, lado_c))
        {
            printf("\nEsse triangulo eh equilatero ");
        }
    }
    else
    {
        printf("Esse triangulo nao pode existir!");
    }
    return 0;
}
