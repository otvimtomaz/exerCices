#include <stdio.h>
#include <math.h>

int main()
{
    float numero, conta;

    printf("Digite um numero (entre 0 e 10): \n");
    scanf("%f", &numero);

    while (numero <= 10)
    {
        conta = numero * 2;
        numero++;

        printf("O dobro do numero %.0f = %.0f \n", numero, conta);
    }
}