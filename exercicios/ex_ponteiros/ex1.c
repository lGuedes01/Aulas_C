/*
Faça uma função que recebe dois números float e retorna (através de ponteiros), 
o quociente inteiro e o resto da divisão desses dois números. 
O quociente inteiro de a/b é o maior inteiro q que satisfaz q*b <= a. 
O resto r é o que sobra: r = a - q*b (um float). 
Considere que a e b são positivos. 
Faça um programa para testar sua função.
*/

#include <stdio.h>

void divisao(float *c, float *d)
{
    float a = *c, b = *d; //Para a ou b receberem valores, tem q atribuir os valores aos respectivos ponteiros
    float resto;
    resto = *c; // o resto recebe o numero q sera divido
    while (resto >= *d)
    {
        resto = resto - *d;
    }
    *d = resto;
    *c = (int)a / (int)b; // divisao inteira dos dois num floats
    if (a < (*c) * (b))
    {
        *c = *c - 1;
    }
    

}


int main()
{
    float a, b;
    a = 8.26;
    b = 4.94;
    printf("\ndivisao inteira de %.2f por %.2f eh: ", a, b);
    divisao(&a,&b);
    printf("%.2f\ne o resto da divisao eh: %.2f", a, b);

    
    return 0;
}
