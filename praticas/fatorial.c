#include <stdio.h>
/* Recebe um inteiro e retorna seu fatorial */
int main(void)
{
    int n, i, fat;

    printf("Digite um número: ");
    scanf("%d", &n);
    i = 1;
    fat = 1;
    while (i <= n){
        fat = fat * i;
        i = i + 1;
    }

    printf("O resultado de %d! é: %d\n", n, fat);
    return 0;
}