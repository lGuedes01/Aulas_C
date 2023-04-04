#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Numero: %d\nAntecessor: %d\nSucessor: %d", numero, numero-1, numero+1);
    return 0;
}