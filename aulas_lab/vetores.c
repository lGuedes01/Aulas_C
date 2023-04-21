//testando vetores

#include <stdio.h>

void nomes()
{
    char nome[25];
    char nome2[25];

    printf("Escreva um nome: ");
    scanf(" %[^\n]s", nome);
    printf("Escreva um nome: ");
    scanf(" %[^\n]s", nome2);

    printf("nome: %s\nnome: %s", nome, nome2);
}

void lista_num(int quantidade)
{
    int lista_numeros[quantidade];
    int i;
    int tamanho = sizeof(lista_numeros)/ sizeof(lista_numeros[0]);
    printf("Tamanho da lista: %d\n", tamanho);
    for (i=0; i < tamanho; i++)
    {
        printf("adicione um numero a lista: ");
        scanf("%d", &lista_numeros[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        if (i == tamanho - 1)
        printf("%d.",lista_numeros[i]);
        else
        printf("%d,",lista_numeros[i]);
    }
}

int main()
{
    // nomes();
    // lista_num(10);
}
