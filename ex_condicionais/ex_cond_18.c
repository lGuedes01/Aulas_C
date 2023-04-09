/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria   Idade
Infantil A  5 a 7
Infantil B  8 a 10
Juvenil A   11 a 13
Juvenil B   14 a 17
Senior ˆ    maiores de 18 anos
*/

#include <stdio.h>

int main()
{
    int idade_nadador;

    printf("Idade do nadador: ");
    scanf("%d", &idade_nadador);

    if (idade_nadador >= 5 && idade_nadador <= 7)
    {
        printf("Classe: Infantil A");
    }else
    if (idade_nadador >= 8 && idade_nadador <= 10)
    {
        printf("Classe: Infantil B");
    }else
    if (idade_nadador >= 11 && idade_nadador <= 13)
    {
        printf("Classe: Juvenil A");
    }else
    if (idade_nadador >= 14 && idade_nadador <= 17)
    {
        printf("Classe: Juvenil B");
    }else
    if (idade_nadador >= 18)
    {
        printf("Classe: Senior");
    }
}
