#include <stdio.h>
/* Recebe a base(x) e o expoente(n) e imprime o resultado da potenciação. */
int main(void)
{
    int x, n, i, pot;

    printf("Digite o valor da base da potenciação:  ");
    scanf("%d", &x);
    printf("Digite o expoente da potenciação: ");
    scanf("%d", &n);
    if (n == 0)
        printf("1\n");
    else if (n == 1)
        printf("%d\n", x);
    else{
        i = 2;
        pot = x;
        while (i <= n){
            pot = pot * x;
            i++;
        }
        printf("O resultado de %d elevado a %d é: %d\n", x, n, pot);
    }
    return 0;
}