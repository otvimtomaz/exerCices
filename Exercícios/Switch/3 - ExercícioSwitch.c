#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int pagar, pagamento, valor;

    printf("Informe o valor do pagamento: ");
    scanf("%d", &pagar);

    printf(" \n Forma de pagamento: ");
    printf(" \n 1 - a vista");
    printf(" \n 2 - a prazo");

    printf(" \n Escolha o pagamento (1 ou 2): ");
    scanf("%d", &pagamento);

    switch (pagamento)
    {
    case 1:
        valor = pagar - (pagar / 10);

        printf(" \n O total a pagar a vista = %d", valor);
        break;

    default:
        printf(" \n O total a pagar a prazo: %d", pagar);
        break;
    }

    return 0;
}