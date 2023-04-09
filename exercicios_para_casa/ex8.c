/*
Faça uma função que recebe 1 número e imprime todos os números entre 1 e o número recebido.
*/

#include <stdio.h>

int main()
{
    int n1, i;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    for ( i = n1 ; i > 0; i--)
    {
        printf("%d ",i);
    }
    
    return 0;
}
