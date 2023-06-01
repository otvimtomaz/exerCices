#include <stdio.h>
#include <math.h>

int main()
{

    float n1, n2;

    printf("Insira o primeiro número: \n");
    scanf("%f", &n1);

    printf("Insira o número final: \n");
    scanf("%f", &n2);

    while (n1 <= n2)
    {
        printf("%2.f \n", n1);
        n1++;
    }
}