#include <stdio.h>
#include <math.h>

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

    if (pagamento == 1) //==> Oq estava errado era que usamos o "=" em vez de "==",
                        //==> já que só 1 = é como se fosse atribuir um valor, não que é igual
    {
        valor = pagar - (pagar / 10);

        printf(" \n O total a pagar a vista = %d", valor);
    }
    else if (pagamento == 2)
    {
        printf(" \n O total a pagar a prazo: %d", pagar);
    }

    return 0;
}