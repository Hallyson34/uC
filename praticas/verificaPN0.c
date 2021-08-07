#include <stdio.h>
/* Verifia se o número é positivo,
   negativo ou igual a 0 */
int main(void)
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    if (num == 0)
        printf("O número digitado é 0\n");
    else if (num > 0)
        printf("O número digitado é positivo\n");
    else
        printf("O número digitado é negativo\n");
    
    return 0;

}