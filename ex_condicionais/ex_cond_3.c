/*
 Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario,
imprima o numero ao quadrado
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float n1;
    printf("Enter a float number: ");
    scanf("%f", &n1);

    if (n1 >= 0)
    {
        double sqrt_n1;
        sqrt_n1 = sqrt(n1);
        printf("the square root of %.2f is %.2f", n1, sqrt_n1);
    }
    else
    {
        double n1_squared;
        n1_squared = pow(n1, 2);
        printf("%.2f squared is %.2f", n1, n1_squared);
    }
}
