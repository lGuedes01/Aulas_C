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

}

int main()
{
    char v1[20], v2[10];
    printf("primeira string\n");
    scanf("%19[^\n]s", v1);
    getchar();
    printf("segunda string\n");
    scanf("%9[^\n]s", v2);
    getchar();
    int tam1, tam2;
    tam1 = meustrlen(v1);
    printf("%d\n",tam1);
    strcopia(v1, v2);
    printf("agora a primeira string eh\n%s\n",v1);
    return 0;
}
