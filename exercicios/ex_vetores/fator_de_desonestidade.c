/*
Faça um programa que testa se essa função faz um bom dado, com probabilidades semelhantes de cair cada um dos valores. 
Lance o dado um número alto de vezes (alguns milhares) e imprima quantas vezes caiu cada valor possível. 
Use um vetor de 6 posições para os contadores.
*/

/*
Altere o programa anterior para calcular e imprimir um "fator de desonestidade" do dado, 
definido como a diferença entre o número de vezes que cai o número que cai mais vezes 
e o número de vezes que cai o número que cai menos vezes dividido pelo número de lançamentos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado()
{
    return rand() % 6 + 1; // %6 para ir de 0 a 5, + 1 para ir de 1 a 6
}

void ordena_vet(int vet[])
{
    int aux;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            
        }
        
    }
    
}

int main()
{
    srand(time(0));
    int lado[6] = {0};
    int dado1;
    float fator_de_desonestidade, n_lancamentos = 3000;
    for (int i = 0; i < n_lancamentos; i++)
    {
    
        dado1 = dado();
        // printf("\nTESTE");
        // printf("\n%d", dado1);

        switch (dado1)
        {
        case 1:
            lado[0] += 1;
            break;
        case 2:
            lado[1] += 1;
            break;
        case 3:
            lado[2] += 1;
            break;
        case 4:
            lado[3] += 1;
            break;
        case 5:
            lado[4] += 1;
            break;
        case 6:
            lado[5] += 1;
            break;
        
        default:
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("\nlado %d ,  %d", i+1, lado[i]);
    }
    ordena_vet(lado);
    // for (int i = 0; i < 6 ; i++)
    // {
    //     printf("\n%d", lado[i]);
    // }
    printf("\nmaior %d\nmenor %d", lado[0], lado[5]);
    fator_de_desonestidade = (lado[0] - lado[5]) / n_lancamentos;
    printf("\nFator de desonestidade %f", fator_de_desonestidade);
    
}
