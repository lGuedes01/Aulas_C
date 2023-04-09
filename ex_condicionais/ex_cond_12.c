/*
Escreva o menu de opc¸oes abaixo. Leia a opc¸ ˜ ao do usu ˜ ario e execute a operac¸ ´ ao esco- ˜
lhida. Escreva uma mensagem de erro se a opc¸ao for inv ˜ alida. ´
Escolha a op¸c~ao:
1- Soma de 2 n´umeros.
2- Diferen¸ca entre 2 n´umeros (maior pelo menor).
3- Produto entre 2 n´umeros.
4- Divis~ao entre 2 n´umeros (o denominador n~ao pode ser zero).
Op¸c~ao
*/

#include <stdio.h>

void soma(int v1, int v2)
{
    int soma;
    soma = v1 + v2;

    printf("\nA soma eh %d", soma);
}

void subtracao(int v1, int v2)
{
    int subtracao;
    subtracao = v1 - v2;

    printf("\nA subtracao eh %d", subtracao);
}

void produto(int v1, int v2)
{
    int produto;
    produto = v1 * v2;

    printf("\nO produto eh %d", produto);
}

void divisao(float v1, float v2)
{
    float divisao;
    divisao = v1/v2;

    printf("\nA divisao eh %.2f", divisao);
}

int main()
{
    int opcao, v1, v2;

    printf("\n+--------------------------+");
    printf("\n|%*s%s%*s|", 11, "", "MENU" , 11, "");
    printf("\n+--------------------------+");
    printf("\n| %d | %-s", 1, "Soma");
    printf("\n| %d | %-s", 2, "Subtracao");
    printf("\n| %d | %-s", 3, "Produto");
    printf("\n| %d | %-s", 4, "Divisao");

    printf("\nEscolha uma das opcoes >> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("\nEscolha o primeiro numero: ");
        scanf("%d", &v1);
        printf("\nEscolha o segundo numero: ");
        scanf("%d", &v2);
        break;
    
    default:
        printf("\nEssa opcao nao existe. Tente novamente");
        break;
    }


    switch (opcao)
    {
    case 1:
        soma(v1, v2);
        break;
    case 2:
        subtracao(v1, v2);
        break;

    case 3:
        produto(v1,v2);
        break;

    case 4:
        divisao(v1,v2);
        break;
    default:
        break;
    }
    return 0;
}
