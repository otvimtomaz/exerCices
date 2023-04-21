#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float valorDoPrimeiroLado, valorDoSegundoLado, valorDoTerceiroLado;

    printf(" \n Digite o valor do primeiro lado: ");
    scanf("%f", &valorDoPrimeiroLado);
    printf(" \n Digite o valor do segundo lado: ");
    scanf("%f", &valorDoSegundoLado);
    printf(" \n Digite o valor do terceiro lado: ");
    scanf("%f", &valorDoTerceiroLado);

    if (valorDoPrimeiroLado != valorDoSegundoLado && valorDoPrimeiroLado != valorDoTerceiroLado && valorDoSegundoLado != valorDoTerceiroLado)
    {
        printf("O seu triângulo é: Escaleno");
    }
    else if (valorDoPrimeiroLado != valorDoSegundoLado || valorDoSegundoLado != valorDoTerceiroLado || valorDoPrimeiroLado != valorDoTerceiroLado)
    {
        printf("Seu triângulo é: Isosceles");
    }
    else
    {
        printf("O seu triângulo é: Equilátero");
    }
}