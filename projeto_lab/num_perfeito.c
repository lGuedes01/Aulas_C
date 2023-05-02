/*
Imprimir os números perfeitos (números que são iguais à soma de seus divisores, como 6 (1+2+3) e 28 (1+2+4+7+14)).
*/
#include <stdio.h>
#include <stdbool.h>

int soma_divisor(int n)
{
    int total = 0;
    for (int i = 1 ; i < n; i++)    
    {
        if (n % i == 0)
        {
            total += i;
        }
        
    }
    return total;
}

bool n_perfeito(int n)
{
    int total;
    total = soma_divisor(n);
    printf("%d %d\n", n, total);
    if (total == n)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    printf("Os numeros perfeitos de 1 a 100 sao:");
    for (int i = 1; i <= 100; i++)
    {
        if (n_perfeito(i))
        {
            printf("\n%d", i);
        }
        
    }
    
    return 0;
}
