#include <stdio.h>
/* Recebe um inteiro N e imprime
   os N primeiros ímpares. */
int main(void)
{
    int n, cont, imp;

    printf("Digite um número: ");
    scanf("%d", &n);
    cont = 0;
    imp = 1;
    while (cont < n){
        printf("%d\n", imp);
        imp = imp + 2;
        cont = cont + 1; 
    }
    
    return 0;
}