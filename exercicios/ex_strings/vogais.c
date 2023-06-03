#include <stdio.h>
#include <string.h>

//Funcao que retorna apenas as vogais da
int vogais(char frase[], int lenf)
{
    int n_vogais=0;
    for (int i = 0; i < lenf; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' ||frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            // printf("%c", frase[i]);
            n_vogais++;
        }else if (frase[i] == 'A' || frase[i] == 'E' ||frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'U')
        {
            // printf("%c", frase[i]);
            n_vogais++;

        }
    }
    return n_vogais;
}

int main()
{
    char frase[20];
    int lenf;
    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase);
    lenf = strlen(frase);
    // vogais(frase, lenf);
    printf("Sua frase tem %d vogais\n", vogais(frase, lenf));
    return 0;
}
