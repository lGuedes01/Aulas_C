#include <stdio.h>

/*
Faça um programa que lê 10 numeros float do usuario e imprime
os que sao maiores que a media deles
*/
float calc_media(float vet[])
{
    float media = 0;
    for (int i = 0; i<= 10; i++)
    {
        media += vet[i];
    }
    media = media / 10;
    return media;
}

int main()
{
    float vet[10];
    printf("\nPasse 10 numeros: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o num %d: ", i+1);
        scanf("%f", &vet[i]);
    }
    float media;
    media = calc_media(vet);
    printf("\nA media dos numeros eh %.2f", media);
    printf("\nOs numeros maiores que a media dentre os 10 numeros eh: ");
    for (int i = 0; i < 9; i++)
    {
        if (vet[i] > media)
            printf("%.2f, ", vet[i]);
    }    
}