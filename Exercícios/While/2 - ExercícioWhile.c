#include <stdio.h>
#include <math.h>

int main()
{
    int soma, cont;

    cont = 1;
    soma = 0;

    while (cont <= 10)
    {
        soma = soma + cont;
        cont++;
    }

    printf("\nO resultado da soma de 1 a 10 = %d \n", soma);
}
