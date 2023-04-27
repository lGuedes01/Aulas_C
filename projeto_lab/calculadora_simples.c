//Resolução benhur 
#include <stdio.h>

void calculadora()
{
    float n, total;
    float n_armazenado = 0;
    char op;
    char op_armazenado = 'a';
    printf("\nDigite uma operação\n");
    scanf("%d", &n);
    total = n;
    while (1)
    {
        op = getchar();
        if (op == '\n')
            break;
        scanf("%d", &n);
        
        if (op == '+')
        {
            if(op_armazenado == '+')
                total += n_armazenado;
            else if(op_armazenado == '-')
                total-=n_armazenado;
            n_armazenado = n;
            op_armazenado = op;
        }
        else if(op == '-')
        {
            if(op_armazenado == '+')
                total += n_armazenado;
            else if(op_armazenado == '-')
                total-=n_armazenado;
            n_armazenado = n;
            op_armazenado = op;
        }
        else if(op == '*')
            total*=n;
        else if(op == '/')
            total/=n;
        printf("\n%d %c %d %c", n, op, n_armazenado, op_armazenado);
    }
    printf("\n%d\n", total);

}

int main()
{
    calculadora();
}