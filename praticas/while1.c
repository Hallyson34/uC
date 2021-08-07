#include <stdio.h>
/* Imprime inteiros de 100 a 80 */
int main(void)
{
    int i;
    i = 100;
    while (i>79){
        printf("%d\n",i);
        i = i - 1;
    }
    return 0;
}