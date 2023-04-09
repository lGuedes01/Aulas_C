/*
Fac¸a uma prova de matematica para crianc¸as que est ´ ao aprendendo a somar n ˜ umeros ´
inteiros menores do que 100. Escolha numeros aleat ´ orios entre 1 e 100, e mostre na ´
tela a pergunta: qual e a soma de ´ a + b, onde a e b sao os n ˜ umeros aleat ´ orios. Pec¸a a ´
resposta. Fac¸a cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, alem de quantas vezes o aluno acertou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, soma_a_b, respost_aluno, cont_acertos, cont_quest;
    printf("\n+--------------------------+");
    printf("\n|%*s%s%*s|", 4, "" , "Prova de matematica", 3, "");
    printf("\n+--------------------------+");
    
    cont_quest = 0;

    while (cont_quest != 5)
    {
        srand(time(NULL));
        a = rand() % 100;
        b = rand() % 100;
        soma_a_b = a + b;
        printf("\n%d + %d = ", a,b);
        scanf("%d", &respost_aluno);
        printf("Resposta certa: %d\n", soma_a_b);
        if (respost_aluno == soma_a_b)
        {
            cont_acertos += 1;
        }
        cont_quest += 1;
    }
    printf("\nResultado: \nAcertos[%d]\nErros[%d]",cont_acertos, cont_quest-cont_acertos);
}