#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inicial, final;

    printf("Digite o número inicial da contagem: \n");
    scanf("%d", &inicial);

    printf("Digite o numero final da contagem: \n");
    scanf("%d", &final);

    do
    {
        printf("\nA contagem está em: %d", inicial);
        inicial++;

    } while (final >= inicial);
}