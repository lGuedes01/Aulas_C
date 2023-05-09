#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void enche(long vet[],int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand();// %10 + 1
    }
}


int media_vet(long vet[],int tam)
{
    long total = 0;
    
    for (int i = 0; i < tam; i++)
    {
        total += vet[i];
    }
    long media;
    media = total/tam;
    return media;
}

int quant_acima(long media, long vet[],int tam)
{
    int q_acima = 0;
    for (int i = 0; i < tam; i++)
    {
        printf("%d, ", vet[i]);

        if (vet[i] > media)
        {
            q_acima += 1;
        }
    }
    return q_acima;
}

int main()
{
    srand(time(0));
    int tam;
    printf("Digite o tamanho: ");
    scanf("%d", &tam);
    long vet[tam];
    enche(vet, tam);
    long media;
    media = media_vet(vet, tam);
    printf("\nForam gerados %d acima da media\n", quant_acima(media, vet, tam));
    printf("A media eh: %ld\n", media);


    return 0;
}
