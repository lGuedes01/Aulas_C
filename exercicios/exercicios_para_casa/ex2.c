/*
Altere o programa acima, para que ele calcule a sua idade aproximada 
(inicialize uma variável com o ano do seu nascimento e outra com o ano corrente).
*/

#include <stdio.h>

int main()
{
    char nome[] = "Lucas";

    int ano_nascimento, ano_atual;

    ano_nascimento = 2005;
    ano_atual = 2023;

    printf("\nMeu nome eh %s, eu tenho %d anos", nome, ano_atual - ano_nascimento);
}
