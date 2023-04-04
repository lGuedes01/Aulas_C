#include <stdio.h>


int main()
{
    int n1, n2, n3;

    printf("Digite 3 valores:\n");

    printf("Primeiro valor: ");
    scanf("%d", &n1);

    printf("Segundo valor: ");
    scanf("%d", &n2);
    
    printf("Terceiro valor: ");
    scanf("%d", &n3);

    float media = (n1+n2+n3)/3;

    printf("O valor da media entre eles eh de: %.2f",media);

    return 0;
}
