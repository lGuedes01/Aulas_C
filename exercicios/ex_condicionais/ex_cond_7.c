/*
Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
numeros forem iguais, imprima a mensagem Numeros iguais.
*/

#include <stdio.h>

int main()
{
    int n1,n2;

    printf("Enter a int number: ");
    scanf("%d", &n1);
    
    printf("Enter another int number: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d > %d", n1,n2);
    }
    else if(n2 > n1)
    {
        printf("%d > %d", n2, n1);
    }
    else
    {
        printf("Equal numbers");
    }
}
