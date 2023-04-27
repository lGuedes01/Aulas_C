// calculadora simples
#include <stdio.h>

void calculadora()
{
    int n, resultado;
    char operador = ' ';
    printf("\nInsira um valor: ");
    scanf("%d", &n);
    resultado = n;
    while (operador != '\n')
    {
        printf("\nResultado atual : %d", resultado);
        printf("\nInsira um operador [ + | - | * | / ]: ");
        operador = getchar(); // pra "limpar o buffer", não tava reconhecendo o \n com scanf, não sei o porquê
        operador = getchar();
        if (operador != '\n')
        {
            printf("\nInsira um valor: ");
            scanf("%d", &n);
        }
        if (operador == '+')
        {
            resultado += n;
        }
        else if (operador == '-')
        {
            resultado -= n;
        }
        else if (operador == '*')
        {
            resultado *= n;
        }
        else if (operador == '/')
        {
            if (n == 0)
            {
                printf("\nNao pode haver divisao por 0. Tente novamente");
                continue;
            }
            
            resultado /= n;
        }
    }
    printf("\nResultado FINAL: %d", resultado);
    
}


int main()
{
    calculadora();
    return 0;
}
