#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero = 1, conta;

    do
    {
        conta = numero * 2;
        printf("O dobro do numero %.0f = %.0f \n", numero, conta);
        numero++;
    } while (numero != 10);

    return 0;
}