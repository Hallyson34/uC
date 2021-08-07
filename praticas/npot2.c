#include <stdio.h>
/* Recebe um  inteiro N e imprime as N primeiras potências de 2. */ 
int main(void)
{
    int n, i, pot, aux;

    printf("Digite um número: ");
    scanf("%d", &n);
    i = 1;
    printf("%d\n",i); 
    while (i < n) {
        pot = 2;
        aux = i;
        while (i > 1){
            pot = pot * 2;
            i = i - 1;
        }
        i = aux;
        printf("%d\n", pot);
        i = i + 1;
    }

    return 0;
}