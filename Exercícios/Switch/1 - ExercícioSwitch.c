#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade1;

    printf("Digite uma idade (1 - Maior que 18, 0 - Menor que 18): ");
    scanf("%d", &idade1);

    switch (idade1)
    {
    case 1:
        printf("Você é maior de idade. \n", idade1);
        break;

    default:
        printf("Você é menor de idade. \n", idade1);
        break;
    }

    return 0;
}