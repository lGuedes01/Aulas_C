/*
Leia a idade e o tempo de servic¸o de um trabalhador e escreva se ele pode ou nao se ˜
aposentar. As condic¸oes para aposentadoria s ˜ ao˜
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
*/

#include <stdio.h>

int main()
{
    int idade, anos_trabalho;
    printf("Quantos anos vc tem: ");
    scanf("%d",&idade);
    printf("Quantos anos de servico vc tem: ");
    scanf("%d",&anos_trabalho);

    if ((idade >= 65) ||  (anos_trabalho >= 30) || (idade >=60 && anos_trabalho>=25))
    {
        printf("Voce esta apto a se aposentar");
    }
    else
    {
        printf("Voce ainda nao esta apto a se aposetar");
    }
    
    return 0;
}
