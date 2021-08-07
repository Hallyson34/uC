#include <stdio.h>
/*Este programa faz a adição de dois números inteiros  
  fixos e mostra o resultado da operação na saída. */
int main(void)
{
    int num1, num2, soma;

    num1 = 25;
    num2 = 30;
    soma = num1 + num2;
    printf("A soma de %d e %d é %d\n", num1, num2, soma);

    return 0;
}