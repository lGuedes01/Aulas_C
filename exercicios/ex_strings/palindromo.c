#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(char frase[], int len_f)
{
    bool palin = true;
    int j = len_f - 1;
    for (int i = 0; i < len_f; i++)
    {
        if (frase[i] != frase[j])
        {
            palin = false;
            break;
        }
        j--;
    }
    return palin;
}

int main()
{
    char frase[30];
    int len_f;
    printf("Digite uma frase para verificar se eh ou nao um palindromo\n");
    scanf("%[^\n]s", frase);
    len_f = strlen(frase);
    // printf("%d\n", len_f);
    if (palindromo(frase, len_f))
        printf("\"%s\" eh um palindromo\n", frase);
    else
        printf("\"%s\" nao eh um palindromo\n", frase);
    return 0;
}
