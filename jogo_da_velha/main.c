/*
Joguinha da velha
*/

#include <stdio.h>

void jogada_X(char matriz[3][3])
{
    int posicao;
    printf("Jogador X, escolha sua jogada: ");
    
    while(1)
    {
        scanf("%d", &posicao);
        if (posicao == 1)
            {
            if(matriz[0][0] == '_')
                {matriz[0][0] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 2)
            {
            if(matriz[1][0] == '_')
                {matriz[1][0] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 3)
            {
            if(matriz[2][0] == '_')
                {matriz[2][0] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 4)
            {
            if(matriz[0][1] == '_')
                {matriz[0][1] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 5)
            {
            if(matriz[1][1] == '_')
                {matriz[1][1] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 6)
            {
            if(matriz[2][1] == '_')
                {matriz[2][1] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 7)
            {
            if(matriz[0][2] == '_')
                {matriz[0][2] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 8)
            {
            if(matriz[1][2] == '_')
                {matriz[1][2] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 9)
            {
            if(matriz[2][2] == '_')
                {matriz[2][2] = 'X';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }
        else{
            printf("Jogada invalida!! Escolha outra jogada: ");
            continue;}
    }
}

void jogada_O(char matriz[3][3])
{
    int posicao;
    printf("Jogador O, escolha sua jogada: ");
    
    while(1)
    {
        scanf("%d", &posicao);
        if (posicao == 1)
            {
            if(matriz[0][0] == '_')
                {matriz[0][0] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 2)
            {
            if(matriz[1][0] == '_')
                {matriz[1][0] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 3)
            {
            if(matriz[2][0] == '_')
                {matriz[2][0] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 4)
            {
            if(matriz[0][1] == '_')
                {matriz[0][1] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 5)
            {
            if(matriz[1][1] == '_')
                {matriz[1][1] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 6)
            {
            if(matriz[2][1] == '_')
                {matriz[2][1] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 7)
            {
            if(matriz[0][2] == '_')
                {matriz[0][2] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 8)
            {
            if(matriz[1][2] == '_')
                {matriz[1][2] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }

        else if (posicao == 9)
            {
            if(matriz[2][2] == '_')
                {matriz[2][2] = 'O';
                break;}
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
                }
        else{
            printf("Jogada invalida!! Escolha outra jogada: ");
            continue;}
    }
}

int main()
{
    char novamente;
    do
    {
        int jogada = 1;
        int ganhou = 0;
        printf(" Esse eh o modelo dos campos\n");
        printf("   1|2|3\n");
        printf("   4|5|6\n");
        printf("   7|8|9\n\n");

        char matriz[3][3] = {{'_', '_','_'}, {'_', '_','_'}, {'_', '_','_'}};
        do
        {
            printf("   %c|%c|%c\n",matriz[0][0],matriz[1][0],matriz[2][0]);
            printf("   %c|%c|%c\n",matriz[0][1],matriz[1][1],matriz[2][1]);
            printf("   %c|%c|%c\n",matriz[0][2],matriz[1][2],matriz[2][2]);
            if (jogada % 2 != 0)
                jogada_X(matriz);
            else
                jogada_O(matriz);
            jogada++;

        }while (ganhou == 0);
        
        printf("Decida se quer jogar novamente [s/n]: ");
        scanf(" %c", &novamente);
    } while (novamente == 's');
}