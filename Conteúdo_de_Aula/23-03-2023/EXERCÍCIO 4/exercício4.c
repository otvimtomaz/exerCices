#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
    float n1, n2, r1;

    printf("Informe a distancia percorrida:");
    scanf("%f", &n1);
    printf("Informe a quantidade de litros gastos:");
    scanf("%f", &n2);
    r1 = n1 / n2;

    printf("O consumo medio do veiculo foi = %f km/l \n", r1);
    system('pause');
}