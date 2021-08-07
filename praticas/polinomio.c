#include <stdio.h>
/* Recebe um valor, substitui no polinômio
   e retorna o resultado do polinônio gerado. */
int main(void)
{
    int var,resultado; 

    printf("Digite o valor da variável: ");
    scanf("%d", &var);
    resultado = 3 * (var * var * var) + 5 * (var * var) + 2 * var -1;
    printf("O resultado do polinomial 3 * %d ^ 3 + 5 * %d ^ 2 + 2 * %d -1  é:  %d\n",var,var,var,resultado);
    return 0;
}