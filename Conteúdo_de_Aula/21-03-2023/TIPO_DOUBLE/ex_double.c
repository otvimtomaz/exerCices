#include <stdio.h>
#include <stdlib.h>

void main () {
    float num;

    printf ("Digite um numero");

    scanf("%f", &num);
    printf ("Seu numero digitado foi: %.2f \n", num);
    system("pause");

}