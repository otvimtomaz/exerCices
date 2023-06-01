#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont = 1, soma = 0;

    do
    {
        soma = soma + cont;
        cont++;

        printf("O resultado da soma de 1 a 10 = %d \n", soma);

    } while (cont != 11);
}