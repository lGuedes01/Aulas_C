/*
Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 
• O numero digitado ao quadrado 
• A raiz quadrada do numero digitado
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    printf("Enter a float number: ");
    scanf("%f", &n);
    
    if (n >=0)
    {
        printf("The square and the square root of %.2f is: %.2f and %.2f", n, sqrt(n), pow(n, 2));
    }
    return 0;
}
