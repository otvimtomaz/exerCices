#include <stdio.h>
#include <math.h>

int main()
{

    float salario, resultado;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    resultado = salario >= 1000 ? salario + (salario * 0.10) : salario + (salario * 0.05);

    printf(" O seu salário é de = %.2f \n", resultado);

    return 0;
}