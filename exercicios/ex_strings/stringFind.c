#include <stdio.h>
#include <string.h>

// funcao para encontrar a primeira posicao de uma letra em uma string
int posicao(char frase[], char letra, int lenf)
{
    // printf("%s\n", frase);
    int i;
    for ( i = 0; i < lenf; i++)
    {
        if (frase[i] == letra)
        {
            break;
        }
        
    }
    if (i == lenf)
    {
        return -1;
    }
    return i;
}

int main()
{
    char frase[30];
    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase);
    getchar();
    int pos, lenf;
    lenf = strlen(frase);
    pos = posicao(frase, 'e', lenf);
    if (pos >= 0)
        printf("A posicao da letra \'e\' eh %d\n",pos+1);
    else
        printf("A letra \'e\' nao exista na frase \"%s\"\n", frase);
    return 0;
}
