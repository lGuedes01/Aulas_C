// Testando matrizes

#include <stdio.h>

void int_matriz()
{
        int matriz[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz[i][j] = i + j;
            
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
            
     
        }
        printf("\n");
    }

    int matriz_2[2][3]= {{}, {}};

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz_2[i][j]);
            
     
        }
        printf("\n");
    }
}

void str_matriz()
{
    char frase[2][30] = {{"oi, sou\0 oq tiver a partir daqui é apenas comentario"},{"oi sou matheus"}};
    printf("%s\n", frase[0]);
    printf("%s\n", frase[1]);
}

int main()
{
    // int_matriz();
    // str_matriz();
}

