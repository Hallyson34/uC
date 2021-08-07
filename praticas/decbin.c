#include <stdio.h>
/*Recebe um inteiro Decimal e imprime seu valor 
  equivalente em Binário. */
int main(void)
{
    int dec, mod, bin, cont, pot, i;

    printf("Digite um Decimal a ser convertido para Binario: ");
    scanf("%d", &dec);
    cont = 0;
    do{
        mod = dec % 2;
        dec = dec / 2;
        if (mod == 1) {
            if (cont == 0)
                bin = 1;
            else{
                pot = 1;
                for (i = 1; i <= cont; i++)
                    pot = pot * 10;
                bin = bin + pot;
            }
        }
        cont++;
    } while (dec != 0);

    printf("O Decimal digitado acima equivale a %d em Binário.\n", bin);
    return 0;
}