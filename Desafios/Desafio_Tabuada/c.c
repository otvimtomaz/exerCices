#include <stdio.h>
#include <math.h>

int main()
{
    float tabuada, multiplicador, numero;

    printf("Escolha um numero para imprimir a sua tabuada:\n");
    scanf("%f", &numero);

    while (multiplicador < 11)

    {
        tabuada = numero * multiplicador;
        printf("%.0f x %.0f = %.0f \n", numero, multiplicador, tabuada);
        multiplicador++;
    }
    if (multiplicador == 11)
    {
        printf("\nEspero que tenha ajudado voce\n");
    }
    return 0;
}