#include  <stdio.h>
/* A função main recebe dois inteiros de entrada
   e calcula o produto entre eles.*/
int main(void)
{
    int num1, num2, produto;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    produto = num1 * num2;
    
    printf("O produto entre %d e %d é %d\n", num1, num2, produto);
    return 0;
}