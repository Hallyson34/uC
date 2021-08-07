#include <stdio.h> 
#include <math.h>
/*Recebe três reais a, b e c e mostra as raízes de ax^2 + bx + c = 0*/
int    main(void)
{
    float a, b, c, delta;

    printf("Informe a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta == 0) {
        printf("DUPLA\n");
        printf("%f\n", -b / (2*a));
        }
    else if (delta > 0) {
    printf("REAIS DISTINTAS\n");
    printf("%f\n", -b - sqrt(delta) / (2*a));
    printf("%f\n", -b + sqrt(delta) / (2*a));
    }
    else {
    delta = -delta;
    printf("COMPLEXAS\n");
    printf("Parte real: %f\n", -b / (2*a));
    printf("Parte imaginária: %f\n", sqrt(delta) / (2*a)); 
    }
    
    return    0; 
}