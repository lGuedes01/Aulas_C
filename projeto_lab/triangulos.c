#include <stdio.h>

void imprime_ponto(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
}

void imprime_espaco(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void triang_1(int base)
{
    for (int i = 1; i <= base; i++)
    {
        imprime_ponto(i);
        printf("\n");
    }
    
    
}

void triang_2(int base)
{
    for (int i = base; i > 0; i--)
    {
        imprime_ponto(i);
        printf("\n");
    }
}

void triang_3(int base)
{

for (int i = base; i > 0; i--)
{
    imprime_ponto(i);
    printf("\n");
    imprime_espaco(base-i+1);
}

}

void losango(int base)
{
    for (int i = base; i > 0; i--)
    {
        imprime_ponto(i);imprime_espaco(base-i);imprime_espaco(base-i);imprime_ponto(i);
        printf("\n");

    }

    for (int i = 1; i <= base; i++)
    {
        imprime_ponto(i);imprime_espaco(base-i);imprime_espaco(base-i);imprime_ponto(i);
        printf("\n");
        
    }
    
}

int main()
{
    int base;
    printf("Digite um numero: ");
    scanf("%d", &base);
    losango(base);
}
