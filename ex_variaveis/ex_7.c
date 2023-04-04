#include <stdio.h>

int main()
{
    char nome[]="";
    int cep1, cep2;
    char tel[]="";

    printf("Digite seu nome: ");
    scanf(" %s", &nome);

    printf("Digite seu CEP: ");
    scanf("%d-%d", &cep1, &cep2);

    printf("Digite seu telefone: ");
    scanf(" %s", &tel);

    printf("Nome: %s\nCEP: %d-%d\nTel: %s", nome, cep1, cep2, tel);

    return 0;
}


//NAO CONSEGUI