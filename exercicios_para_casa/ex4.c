/*
Suponha que o valor de um litro de diesel seja 666 centavos de real, e que um caminhão tem um tanque onde cabem 333 litros.
Faça um programa para calcular o valor necessário para encher o tanque inicialmente vazio.
O programa deve imprimir o valor separando reais e centavos (por exemplo, "234 reais e 27 centavos").
Só pode usar o tipo int. Dica: pra que serve o resto da divisão mesmo?
*/

#include <stdio.h>

int main()
{
    int valor_diesel_centavos,
    tanque_litros;

    valor_diesel_centavos = 666;
    tanque_litros = 333;

    printf("Um caminhao com capacidade de %d litros foi abastecer o tanque com diesel ao preco de R$%d,%d.\n",
    tanque_litros, valor_diesel_centavos/100, valor_diesel_centavos%100);
    printf("O preco total foi de %d reais e %d centavos.",
    valor_diesel_centavos/100, valor_diesel_centavos%100);
}
