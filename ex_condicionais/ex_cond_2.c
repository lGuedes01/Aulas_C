/*
Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
numero e invalido.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, sqr_n1;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    if (n1 >= 0){
        sqr_n1 = sqrt(n1);
        printf("%.1f", sqr_n1);
    }
    else{
        printf("Esse valor nao eh aceito");
    }
    return 0;
}
