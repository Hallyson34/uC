#include <stdio.h>
/* Recebe dois valores e retorna o 
   menor múltiplo de J e maior que I*/
int main(void)
{
    int num,j,res;
    
    printf("Digite um valor: ");
    scanf("%d", &num);
    printf("Digite o divisor: ");
    scanf("%d", &j);
    res = num + j - num % j;
    printf("O menor múltiplo de %d e maior que %d é: %d\n", j, num, res);

    return 0;

}