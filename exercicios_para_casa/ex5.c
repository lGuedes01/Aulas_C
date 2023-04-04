/*
    Transformando decimais em binário 8 bits
*/

#include <stdio.h>

void bin(int n, int *vet, int p)
{
    if (n!=1)
    {  
        bin(n/2, vet, p-1);
        printf("%d", n%2);
        vet[p] = n%2;
    }

    else
    {
        printf("%d",n);
        vet[p] = n;
    }
}

int main()
{
    int decimal, p, vet[8];
    for(p=0; p<8; p++){
        vet[p] = 0;
    }
    printf("Digite um numero: ");
    scanf("%d", &decimal);

    bin(decimal, vet, 7);
    printf("\n");

    for(p = 0; p < 8; p++)
    {
        printf("%d", vet[p]);
    }

}
