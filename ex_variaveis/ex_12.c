/*
Faça um programa que calcule o valor de uma prestação em atraso. Para isso, o programa
deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final,
o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que
serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere
juros simples.
*/
#include <stdio.h>

int main()
{
    int atraso_meses;
    float juros, montante, prestacao, taxa_juros;
    printf("Prestacao: ");
    scanf("%f", &prestacao);

    printf("Taxa de juros: %%");
    scanf("%f", &taxa_juros);
    taxa_juros /= 100;

    printf("Tempo de atraso [meses]: ");
    scanf("%d", &atraso_meses);

    juros = prestacao*taxa_juros*atraso_meses;
    montante = juros + prestacao;

    printf("Sua prestacao de R$%.2f esta atrasada ha %d meses\ne sera cobrada a base de %%%.1f de juros simples\n",
    prestacao, atraso_meses, taxa_juros*100);
    printf("Voce devera pagar R$%.2f", montante);
    return 0;
}
