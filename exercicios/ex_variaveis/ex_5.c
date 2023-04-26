#include <stdio.h>

int main()
{
    float n1;
    float n2;

    printf("Digite dois numeros reais: ");

    scanf("%f", &n1);
    scanf("%f", &n2);

    printf("Numero 1: %.2f e Numero 2: %.2f", n1,n2);
    return 0;
}
