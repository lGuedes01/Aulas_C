/*
Faça um programa que calcule a quantidade de litros de combustível consumidos em uma
viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O
programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros
consumidos na viagem.
    Entradas: tempo, velocidade média
    Saídas: distância, litros consumidos
*/
#include <stdio.h>

int main()
{   
    int velocidade_media;
    float tempo_hora, litros, distancia;

    printf("Digite a velocidade do carro: ");
    scanf("%d", &velocidade_media);
    printf("Digite quantas horas durou a viagem: ");
    scanf("%f",&tempo_hora);

    distancia = velocidade_media * tempo_hora;
    litros = distancia/12;
    
    printf("\nO carro percorreu %.1f km e gastou %.2f litros de combustivel", distancia, litros);
}
