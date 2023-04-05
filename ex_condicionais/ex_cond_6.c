/*
Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos.
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter a int number: ");
    scanf("%d",&n1);
    printf("Enter other int number: ");
    scanf("%d",&n2);

    if (n1 > n2)
    {
        printf("%d > %d", n1, n2);
        printf("\n%d - %d = %d", n1, n2, n1-n2);
    }
    else
    {
        printf("%d > %d", n2, n1);
        printf("\n%d - %d = %d", n2, n1, n2-n1);
    }
}
