/*
Leia a distancia em ˆ Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:
CONSUMO    (Km/l) MENSAGEM
menor que   8     Venda o carro!
entre 8 e   14    Economico! ˆ
maior que   12    Super economico!
*/

#include <stdio.h>

int main()
{
    int km, litros;
    printf("Quilometros rodados: ");
    scanf("%d", &km);

    printf("Quantos litros foram consumidos no percurso: ");
    scanf("%d", &litros);
    int consumo_mk_l;
    consumo_mk_l = km/litros;

    if (consumo_mk_l < 8)
    {
        printf("Carro POUCO economico");
    }
    else if (8 <= consumo_mk_l && consumo_mk_l <= 14)
    {
        printf("Carro economico");
    }
    else if (consumo_mk_l > 14)
    {
        printf("Carro MUITO economico");
    }
    
    
    
    return 0;
}
