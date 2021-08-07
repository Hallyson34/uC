#include <stdio.h>
/* Recebe um valor e retorna se é par ou ímpar*/
int main(void)
{
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d é par\n", num);
    else
        printf("%d é ímpar\n", num);
    
    return 0;
}