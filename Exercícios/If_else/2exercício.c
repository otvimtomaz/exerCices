#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int cadeiras, total;

    printf("Informe o numero de cadeiras que deseja comprar: ");
    scanf("%d", &cadeiras);

    if (cadeiras <= 50)
    {
        total = cadeiras * 45;

        printf(" \n O total da compra é de: %d", total);
    }

    else if (cadeiras >= 50)

    {
        total = cadeiras * 40;

        printf(" \n O total da compra é: %d", total);
    }

    return 0;
}