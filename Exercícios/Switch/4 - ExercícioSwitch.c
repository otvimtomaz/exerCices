#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    bool idade, numero;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("\n Possui habilitação?");
    printf("\n 0 - nao possui");
    printf("\n 1 - possui");

    printf(" \n Informe a sua situação (0 ou 1): ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        if (idade >= 18)
        {
            printf(" \n Voce pode dirigir o veículo.");
        }
        else
        {
            printf(" \n Voce nao tem idade para ter essa carta.");
        }
        break;
    case 0:
        if (idade > 18)
        {
            printf(" \n Voce nao pode dirigir o veículo.");
        }
        else
        {
            printf(" \n Voce nao pode dirigir o veiculo.");
        }
        break;
    default:
        printf("\n Opção inválida.");
    }

    return 0;
}
