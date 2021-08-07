#include <stdio.h>
/* Recebe três valores e ordena de modo que
   o menor valor fica em Z, o menor em X e o médio em Y */
int main(void)
{
    int x,y,z, aux;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);
    printf("Digite mais um número: ");
    scanf("%d", &z);
    
    if (x>z){
        aux = z;
        z = x;
        x = aux;
    }
    if (y>z){
        aux = z;
        z = y;
        y = aux;
    }
    if (x>y){
        aux = y;
        y = x;
        x = y;
    }   

    printf("Os valores em ordem decrescente são: %d, %d, %d \n", z,y,x);
    return 0; 
}