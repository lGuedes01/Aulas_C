/*
Calcule as ra´ızes da equac¸ao de 2o grau
A variavel ´ a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Nao˜
e equac¸ ´ ao de segundo grau”. ˜
• Se ∆ < 0, nao existe real. Imprima a mensagem ˜ N~ao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz ´unica.
• Se ∆ ≥ 0, imprima as duas ra´ızes reais
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    int delta;

    printf("Calculando uma equacao de segundo grau");
    printf("Digite o valor de A [Ax^2]: ");
    scanf("%d", &a);
    printf("Digite o valor de B [Bx]: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a >= 0)
    {
        float raiz_1, raiz_2;
        delta = pow(b, 2) - 4*a*c;
        if (delta < 0)
        {
            printf("\nNao existe raiz real");
        }
        else if (delta == 0)
        {
            printf("\nExiste apenas uma raiz real");
            raiz_1 = (-1) * b / 2.0*a;
        }
        else if (delta > 0)
        {
            printf("\nExite duas raizes reais");
            raiz_1 = (((-1) * b ) + sqrt(delta))/ (2.0*a);
            raiz_2 = (((-1) * b ) - sqrt(delta))/ (2.0*a);
            printf("\nAs raizes sao : %.2f e %.2f", raiz_1, raiz_2);
        }
        
    }
    else
    {
        printf("\nIsso nao eh uma equacao de segundo grau");
    }
    
    return 0;
}
