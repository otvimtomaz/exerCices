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

    if (numero == 1 && idade >= 18)
    {
        printf(" \n Voce pode dirigir o veículo.");
    }
    else if (numero == 1 && idade < 18)
    {
        printf(" \n Voce nao tem idade para ter essa carta: ");
    }
    else if (numero == 0 && idade > 18)
    {
        printf(" \n Voce nao pode dirigir o veículo: ");
    }
    else if (numero == 0 && idade < 18)
    {
        printf(" \n Voce nao pode dirigir o veiculo");
    }

    return 0;
}