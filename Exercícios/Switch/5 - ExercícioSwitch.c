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

    switch (salario <= 4000 && idade >= 30 && temp >= 3)
    {
    case true:
        printf("Recebera reajuste");
        break;
    case false:
        switch (salario <= 4000 && idade >= 30 && temp <= 3)
        {
        case true:
            printf("Não recebera reajuste");
            break;
        case false:
            switch (salario <= 4000 && idade <= 30 && temp <= 3)
            {
            case true:
                printf("Não recebera reajuste");
                break;
            case false:
                switch (salario >= 4000 && idade >= 30 && temp >= 3)
                {
                case true:
                    printf("Não recebera reajuste");
                    break;
                case false:
                    switch (salario >= 4000 && idade <= 30 && temp >= 3)
                    {
                    case true:
                        printf("Não recebera reajuste");
                        break;
                    default:
                        printf("\n Opção inválida.");
                    }
                }
            }
        }
    }

    return 0;
}
