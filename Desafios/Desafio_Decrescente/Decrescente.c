#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;

    printf("Insira o primeiro número: \n");
    scanf("%f", &n1);

    printf("Insira o segundo número: \n");
    scanf("%f", &n2);

    if (n1 <= n2)
    {

        printf("\n");

        while (n1 <= n2)
        {
            printf("%.0f \n", n1);
            n1++;
        }
    }
    else if (n1 >= n2)
    {
        while (n2 <= n1)
        {
            printf("%.0f \n", n1);
            n1--;
        }
    }
    else
    {
        printf("Opção inválida");
    }

    printf("\nTerminou a Contagem\n");

    return 0;
}
