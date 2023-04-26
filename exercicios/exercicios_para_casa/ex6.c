/*
Faça uma função que recebe 3 números e retorna o maior deles.
*/

#include <stdio.h>

int main()
{
    int n1,n2,n3, maior;
    printf("Numero 1: ");
    scanf("%d",&n1);
    printf("Numero 2: ");
    scanf("%d",&n2);
    printf("Numero 3: ");
    scanf("%d",&n3);

    maior = n1;
    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    printf("O maior numero eh %d", maior);
}
