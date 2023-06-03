#include <stdio.h>
#include <string.h>

void remov_vog(char frase[], int lenf)
{
    int i,j=0;
    char frase2[30] = {' '};
    for (i = 0; i < lenf; i++)
    {
        if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U')
        {
            frase2[j] = frase[i];
            j++;
        }
        // printf("%s\n", frase2);
    }
    // printf("%s\n", frase2);
    // printf("%d\n",strlen(frase2));
    strcpy(frase, frase2);
}

int main()
{
    char frase[30];
    printf("Digite uma frase: ");
    scanf("%29[^\n]s", frase);
    getchar();
    int lenf;
    lenf = strlen(frase);
    remov_vog(frase, lenf);
    printf("Sua frase somente com consoantes:\n \"%s\"", frase);

    return 0;
}