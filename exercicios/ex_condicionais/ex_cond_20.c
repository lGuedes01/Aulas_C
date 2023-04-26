/*
Fac¸a um programa que receba tres numeros e mostre-os em ordem crescente
*/

#include <stdio.h>

int main()
{
    int n1,n2,n3;
    int maior,menor;
    int i;

    printf("Numero 1: ");
    scanf("%d",&n1);
    printf("Numero 2: ");
    scanf("%d",&n2);
    printf("Numero 3: ");
    scanf("%d",&n3);

    maior = n1; menor = n1;

    if (n2 > maior)
    {
        maior = n2;
    }
    else if (n2 < menor)
    {
        menor = n2;
    }
    
    if (n3 > maior)
    {
        maior = n3;
    }
    else if (n3 < menor)
    {
        menor = n3;
    }
    
    for (i = maior; i >= menor; i--)
    {
        if (i == n1 || i==n2 || i==n3)
        {
            printf("%d ", i);
        }
        
    }
    

    return 0;
}
