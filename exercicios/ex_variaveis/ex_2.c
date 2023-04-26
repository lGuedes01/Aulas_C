#include <stdio.h>

int main()
{
    int n1;
    int n2;
    
    printf("Digite dois valores para somar.\n");

    printf("Valor um: ");
    scanf("%d", &n1);

    printf("Valor dois: ");
    scanf("%d", &n2);

    printf("O valor da soma de %d + %d eh %d", n1,n2,n1+n2);
    return 0;
}
