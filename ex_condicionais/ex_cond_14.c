/*
Determine se um determinado ano lido e bissexto. Sendo que um ano ´ e bissexto se ´
for divis´ıvel por 400 ou se for divis´ıvel por 4 e nao for divis ˜ ´ıvel por 100. Por exemplo:
1988, 1992, 1996
*/

#include <stdio.h>

int main()
{
    int ano;

    printf("Digite um ano para analisar se ele eh bissexto: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("O ano %d eh bissexto", ano);
    }
    else
    {
        printf("O ano %d nao eh bissexto", ano);
    }
    return 0;
}
