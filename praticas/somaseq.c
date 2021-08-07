#include <stdio.h>
/* Recebe um inteiro N e calcula a sequência dos N's inteiros
   recebidos, imprimindo o resultado da soma após a interação.  */
int main(void)
{
    int n, i, soma, num;

    printf("Digite a quantidade de termos da sequência: ");
    scanf("%d", &n);
    i = 1;
    soma = 0;
    while (i <= n){
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma = soma + num;
        i++;
    }
    printf("O resultado da soma dos termos é: %d\n", soma);
}