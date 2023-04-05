/*
Faca um programa que receba um numero inteiro e verifique se este numero é par ou 
ímpar
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a int number to check if it's odd or even: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
}
