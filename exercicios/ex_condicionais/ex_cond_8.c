/*
Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina.
*/

#include <stdio.h>

int main()
{
    float n1,n2;

    printf("Nota do aluno 1: ");
    scanf("%f", &n1);

    printf("Nota do aluno 2: ");
    scanf("%f", &n2);

    if ((0.0 <= n1 && n1 <= 10) && (0.0 <= n2 && n2 <= 10.0))
    {
        printf("A media das notas eh %.2f", (n1+n2)/2);
    }
    else
    {
        printf("Foram passados valores invalidos. As notas podem estar apenas entre 0 e 10");
    }
}
