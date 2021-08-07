#include <stdio.h>
/* Rececbe um inteiro N que determina a quantidade de termos da sequeência 
   e imprime a soma apenas dos termos positivos. */
int main(void)
{
    int n, i, soma, num;

    printf("Digite a quantidade de termos da sequência: ");
    scanf("%d", &n);
    soma = 0;
    i = 1;
    while (i <= n){
        printf("Digite o %dº termo: ", i);
        scanf("%d", &num);
        if (num > 0)
            soma = soma + num;
        i++;
    }
    printf("A soma dos termos é: %d\n", soma);
    return 0;
}