#include <stdlib.h>
#include <stdio.h>
#include <math.h> //Essa biblioteca concede a capacidade de realizar soma

void main()
{
    float n1, n2, r1;

    printf("Qual o valor do produto?:");
    scanf("%f", &n1);
    printf("Quantas parcelas deseja pagar?:");
    scanf("%f", &n2);
    r1 = n1 / n2;
    printf(" O valor que de cada parcela sera: %f \n", r1);
    system('pause');
}