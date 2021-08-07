#include <stdio.h>
/* Analisando primeiro exemplo de
   programa com tipo Char */
int main(void)
{
    char c; 
    
    c = 'a';
    if ('a' <= c && c <= 'z')
        c = c - ' ';
    printf("%c = %d\n", c, c);
    if (65 <= c && c < 122)
        c = c + 1;
    printf("%c = %d\n", c, c);

    return 0;
}