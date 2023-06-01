#include <stdio.h>
#include <math.h>

int main()
{

    float n1 = 0, conta;

    while (n1 <= 10)
    {
        n1 = n1 + 2;
        printf("%.0f \n", n1);
    }
    if (n1 > 12)
    {
        printf("Sua contagem chegou ao fim! \n");
    }
}