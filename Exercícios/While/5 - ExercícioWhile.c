#include <stdio.h>
#include <math.h>

int main()
{

    float n1 = 1, conta;

    while (n1 < 10)
    {
        printf("%.0f \n", n1);
        n1 = n1 + 2;
    }
    if (n1 > 9)
    {
        printf("Sua contagem chegou ao fim! \n");
    }
}
