/*
Considere o número 1230. Calculando-se 122 + 302 tem-se 1044, que é diferente de 1230.
Para quais números entre 1 e 9999 e resultado dessa operação é o próprio número?
*/

#include <stdio.h>

void resultado(int n1)
{
    int n2, n3;
    n2 = n1%100;
    n3 = n1/100;
    n3 *= n3;
    n2 *= n2;
    if (n1 == n2 + n3)
    {
        printf("%d\n", n1);
    }
}
/*
Calcule os possiveis numeros primos entre 1 e 9999
*/
void primo(int n)
{
    int j = 0;
    for (int i = n; i > 0 ; i--)
    {
        if (n % i == 0)
            j++;
    }
    if (j == 2)
    {
        printf("%d, ", n);
    }
    
    
}

int main()
{
    printf("Numero interessante[0, 9999]\n");
    int n = 0;
    while (n < 10000)
    {
        resultado(n);
        n++;
    }
    printf("Numero primo[0, 9999]\n");
    for (int i = 1; i < 10000; i++)
    {
        primo(i);
    }
    
    return 0;
}