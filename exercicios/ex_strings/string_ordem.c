#include <stdio.h>

//retorna o tamanho da string no vetor
int meustrlen(char vet[])
{
    int i=0;
    while (vet[i] != '\0')
    {
        i++;
    }
    int len = i;
    return len;
}

// copia, para o vetor 1, a string contida no vetor 2
void strcopia(char vet[], char vet2[])
{
    int i = -1;
    do 
    {
        i++;
        vet[i] = vet2[i];
    }while (vet[i] != '\0');
    // vet[i] = vet2[i];  
}

//copia a string no vetor 2 para o final da string contida no vetor 1
void strconconcat(char vet[], char vet2[])
{
    int i=0,j=-1;
    while (vet[i] != '\0')
    {
        i++;
    }
    do
    {
        j++;
        vet[i+j] = vet2[j]; 
    }while (vet2[j] != '\0');
}
int main()
{
    // char cond;
    char n1[30], v2[15] = {"Seu nome eh"};
    printf("Digite seu nome: \n");
    scanf("%[^\n]s", n1);
    printf("%s\n", v2);
    printf("%s\n", n1);
    // int tam1;
    // tam1 = meustrlen(n1);
    // tam2 = meustrlen(v2);
    // printf("%d\n",tam1);
    // printf("%d\n",tam2);
    strconconcat(n1,v2);
    printf("agora a primeira string eh\n%s\n",n1);
    return 0;
}

// funcionando melhor do q eu esperava, mas eu n sei o pq