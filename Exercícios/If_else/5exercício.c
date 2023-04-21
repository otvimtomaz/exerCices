#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int salario, temp, idade;

    printf("Informe o salario: ");
    scanf("%d", &salario);

    printf("Informe o tempo de serviço (anos): ");
    scanf("%d", &temp);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (salario <= 4000 && idade >= 30 && temp >= 3)
    {
        printf("Recebera reajuste");
    }
    else if (salario <= 4000 && idade >= 30 && temp <= 3)
    {
        printf("Não recebera reajuste");
    }
    else if (salario <= 4000 && idade <= 30 && temp <= 3)
    {
        printf("Não recebera reajuste");
    }
    else if (salario >= 4000 && idade >= 30 && temp >= 3)
    {
        printf("Não recebera reajuste");
    }
    else if (salario >= 4000 && idade <= 30 && temp >= 3)
    {
        printf("Não recebera reajuste");
    }

    return 0;
}