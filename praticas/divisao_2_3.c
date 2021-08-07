#include <stdio.h>

/*Lê um número inteiro e mostra o resultado do 
  quociente da divisão desse número por 2 e por 3*/

int main(void)
{
    int num, res2, res3;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    res2 = num / 2;
    res3 = num /3;
    
    printf("%d dividido por 2 é %d\n%d dividido por 3 é %d\n", num, res2, num, res3);
    return 0;
}