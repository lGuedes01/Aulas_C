/*
Faça um programa para calcular e imprimir o valor de um litro de suco de laranja.
Esse programa deve inicializar uma variável com o custo de um quilo de laranja (20),
outra com a quantidade de suco, em ml, extraível de um quilo (800),
outra com o custo da mão de obra mais lucro para produzir um litro de suco (14).
 {
    Valor de saída: custo do litro do suco
    valores de entrada: preço do kg de laranja = R$ 20;
                        preço da mão de obra + lucro = R$ 14;
                        quantidade, em ml, de suco que extrae de 1kg de laranja = 800ml
 }
*/
#include <stdio.h>

int main()
{
    int valor_kg_laranja,
    suco_de_1kg_de_laranja_ml,
    mao_de_obra_e_lucro,
    litro_de_suco_ml,
    valor_do_litro;

    valor_kg_laranja = 20;
    suco_de_1kg_de_laranja_ml = 800;
    litro_de_suco_ml = 1000;
    mao_de_obra_e_lucro = 14;
    valor_do_litro = valor_kg_laranja*litro_de_suco_ml/suco_de_1kg_de_laranja_ml + mao_de_obra_e_lucro;

    printf("Sabendo que o kg da laranja eh R$ %.2d e 1 kg de laranja fornece %d ml\n", valor_kg_laranja, suco_de_1kg_de_laranja_ml);
    printf("Para fazer 1L de suco eh necessario R$%d de laranja mais R$%d para mao de obra e lucro. Logo o valor de venda eh R$%d",
    valor_kg_laranja*litro_de_suco_ml/suco_de_1kg_de_laranja_ml, mao_de_obra_e_lucro, valor_do_litro);
}
