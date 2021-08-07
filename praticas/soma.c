#include <stdio.h>

int main(void)
{
    int num1, num2, soma;
    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe outro número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma de %d e %d é %d\n", num1, num2, soma);
    return 0;
}