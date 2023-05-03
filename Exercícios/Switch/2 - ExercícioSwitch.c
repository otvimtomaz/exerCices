#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int cadeiras, total, maior;

    printf("Informe o numero de cadeiras que deseja comprar: ");
    scanf("%d", &cadeiras);

    printf("Essa quantidade é maior ou menor que 50?: ");
    scanf("%d", &total);

    switch (total)
    {
    case 'maior':
        total = cadeiras * 45;

        printf(" \n O total da compra é de: %d", total);
        break;

    default:
        total = cadeiras * 40;

        printf(" \n O total da compra é: %d", total);
        break;
    }

    return 0;
}