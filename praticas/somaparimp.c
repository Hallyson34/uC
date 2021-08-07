#include <stdio.h>
/* Recebe um inteiro N que determina o tamanho de uma sequência de inteiros
   e imprime a soma dos inteiros Pares e Ímpares. */
int main(void)
{
    int n, i, num, somap, somaimp;

    printf("Digite a quantidade de números da sequência: ");
    scanf("%d", &n);
    somaimp = 0;
    somap = 0;
    i = 1;
    while (i <= n) {
        printf("Digite o %dº número da sequência: ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
            somap = somap + num;
        else
            somaimp = somaimp + num;
        i = i + 1;
    }
    printf("A soma dos Números Pares é: %d e dos Ímpares é: %d\n", somap, somaimp);
    return 0;
}