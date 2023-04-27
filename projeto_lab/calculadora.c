// calculadora simples
#include <stdio.h>
#include <stdbool.h>

bool operacao_valida(char operador)
{

}

int retorna_int(char vet[10])
{

}


void calculadora(char conta[100], int len_vet)
{
    char num[10];
    int j = 0;
    for (int i = 0; i < len_vet; i++)
    {
        if (conta[i] >= 48 && conta[i] <= 57)
        {
            num[j] = conta[i];
            j++;
        }
        else
        {
            retorna_int(num);
            j = 0;
            for (int k = 0; i < 10; k++)
            {
                num[k] = NULL;
            }
            
        }       
    }
}


int main()
{
    // entre 48 e 57 são numeros

    char conta[100] = "12+4";
    int i;
    // printf("Digite uma conta:\n");
    // scanf(" %[^\n]s", conta);
    // printf("\n%s", conta);
    for (i = 0; i < 100; i++)
    {
        if (conta[i] == NULL)
            break;
    }
    int len_vet = i;
    // printf("\n%d", len_vet);
    
    calculadora(conta, len_vet);
    return 0;
}
