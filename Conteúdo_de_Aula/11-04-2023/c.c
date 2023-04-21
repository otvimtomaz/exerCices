#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    int n1, n2, r1, r2;

    printf("Digite um numero:");
    scanf("%d", &n1);
    printf("Digite outro numero:");
    scanf("%d", &n2);

    r1 = (n1 > n2) && (n1 == n2);
    printf(" \n %d > %d e %d = %d resultado é = %d", n1, n2, n1, n2, r1);

    r2 = (n1 <= n2) || (n1 != 2);
    printf("\n %d <= %d ou %d != %d resultado é = %d", n1, n2, n1, n2, r1);
    printf("\n não (%d < %d) resultado é = %d", n1, n2, !r2);

    system("pause");

    return 0;
}