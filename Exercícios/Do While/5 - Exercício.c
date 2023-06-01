#include <stdio.h>
#include <math.h>

int main()
{
    int impar = 1;

    do
    {
        printf("%d\n", impar);
        impar = impar + 2;

    } while (impar <= 10);
}