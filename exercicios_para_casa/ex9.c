/*
Faça uma função que recebe 2 números e imprime todos os números pares que são maiores que o primeiro e menores que o segundo.
*/

#include <stdio.h>

int main()
{
    int n1, n2, i;
    int maior, menor;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    // Avaliando qual número é maior
    if (n1 > n2)
    {
        maior = n1; menor = n2;
    }
    else
    {
        maior = n2; menor = n1;
    }
    // Laço para imprimir os números
    for (i = menor; i <= maior; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
    
    return 0;
}
