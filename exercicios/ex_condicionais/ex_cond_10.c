/*
Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura): 
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7
*/

#include <stdio.h>

int main()
{
    float altura;
    char sexo;

    printf("Sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Altura: ");
    scanf("%f", &altura);

    if (sexo == 'f' || sexo == 'F')
    {
        float peso;
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh %.2f", peso);
    }
    else if(sexo == 'm' || sexo == 'M')
    {
        float peso;
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal eh %.2f", peso);
    }
    else
    {
        printf("Saia daqui nao binari esquisito");
    }
}
