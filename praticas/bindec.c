#include <stdio.h>
/*Recebe um inteiro Binário e imprime seu valor 
  equivalente em Decimal. */
int main(void)
{
    int bin, unit, cont, dec, pot, i;

    printf("Digite o número Binário que deseja converter para Decimal: "); 
    scanf("%d", &bin);
    cont = 0;
    dec = 0;
    do {
        unit = bin % 10;
        bin = bin / 10;
        if (cont < 3){
            if (cont == 0)
                dec = unit;
            else
                dec = dec + unit * (2 * cont);  
        }
        else{
            pot = 1;
            for (i = 0; i < cont; i++)
                pot = pot * 2;
            dec = dec + unit * pot;
        }
        cont++;
    } while (bin != 0);
    
    printf("O binário digitado acima eqivale a %d em decimal.\n", dec);
    return 0;
}