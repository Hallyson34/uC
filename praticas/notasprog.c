#include <stdio.h>
/* Recebe um inteiro que determina a quantidade de alunos na turma, 
   depois recebe as notas e imprime a menor nota e a maior nota. */
int main(void)
{
    int n, i, snote, best, worst;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);
    best = 0;
    worst = 0;
    i = 1;
    while (i <= n) {
        printf("Digite a nota do %dº aluno: \n", i);
        scanf("%d", &snote);
        if (snote > best)
            best = snote;
        if (snote < worst || worst == 0)
            worst = snote;
        i = i + 1;
    }
    printf("A melhor nota foi %d e a pior foi %d\n", best, worst);
    return 0;
}