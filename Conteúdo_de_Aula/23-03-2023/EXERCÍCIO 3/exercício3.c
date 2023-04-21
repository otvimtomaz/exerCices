#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    float n1, n2, r1, r2;

    printf("Digite o seu peso:");
    scanf("%f", &n1);
    printf("Digite a sua altura:");
    scanf("%f", &n2);

    r1 = pow(n2, 2); // No caso da EXPONENCIAÇÃO, precisa colocar o (variável, 2), sen n funciona.
    r2 = n1 / r1;

    printf(" O seu IMC = %f \n", r2);
    system('pause');
}