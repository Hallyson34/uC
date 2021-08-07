#include <stdio.h>
/* A função main recebe dois inteiros
   e calcula a subtração deles */

int main(void)
{
    int num1, num2, sub;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    sub = num1 - num2;
    
    printf("A subtração entre %d e %d é %d\n", num1, num2, sub);
    return 0;
}