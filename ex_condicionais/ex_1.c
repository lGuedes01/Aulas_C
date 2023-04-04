/*
 Faca um programa que receba dois numeros e mostre qual deles é o maior
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);
    if (n1 > n2){
        printf("%d > %d", n1,n2);
    }
    else{
        printf("%d > %d", n2,n1);
    }
    return 0;
}
