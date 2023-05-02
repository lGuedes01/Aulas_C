//Calculadora com prioridade
#include <stdio.h>

void calculadora()
{
    float n, total;
    float n_armazenado = 0;
    char op;
    char op_armazenado = ' ';
    printf("\nDigite uma operacao\n");
    scanf("%f", &n);
    total = n;
    while (1)
    {
        op = getchar();
        if (op == '\n')
            break;
        scanf("%f", &n);
        
        if(op == '-'|| op == '+')
        {
            if (op_armazenado == '+' || op_armazenado == '-')
            {
                if (op_armazenado == '+')
                {
                    total = total + n_armazenado;
                }
                else
                {
                    total = total - n_armazenado;
                }
            }
            n_armazenado = n;
            op_armazenado = op;
        }
        else if(op == '*')
            {
                if (op_armazenado == '+' || op_armazenado == '-')
                {
                    n_armazenado = n_armazenado * n;
                }
                else
                {total = total * n;}
            }
        else if(op == '/')
            {
                if (op_armazenado == '+' || op_armazenado == '-')
                {
                    n_armazenado = n_armazenado / n;
                }
                else
                    {total = total / n;}
            }
    }
    if (op_armazenado == '-')
    {
        total = total - n_armazenado;
    }
    else if (op_armazenado == '+')
    {
        total = total + n_armazenado;
    }
    
    
    printf("\n%f\n", total);

}

int main()
{
    calculadora();
}