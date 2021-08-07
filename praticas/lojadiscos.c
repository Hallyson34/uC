#include <stdio.h>
/* Recebe a quantidade de discos vendidos em todos os dias do mês de Abril e
   imprime em qual dia teve a maior venda e qual foi a quanidade de discos vendidos*/
int main(void)
{
    int i, big, sell, bestday;

    big = 0;
    i = 1;
    while (i < 31){
        printf("Digite a quantidade de discos vendidos no dia %dº: \n", i);
        scanf("%d", &sell);
        if (sell > big){
            big = sell;
            bestday = i;
        }
        i = i + 1;
    }
    printf("A maior quantidade de discos vendidos em Abril foi de %d discos no dia %d\n", big, bestday);
    return 0; 
}