#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade1;

    printf("Digite uma idade: ");
    scanf("%d", &idade1);

    if (idade1 > 18)
    {
        printf("Sua idade é %d, você é maior de idade. \n", idade1);
    }

    else if (idade1 < 18)
    {
        printf("Sua idade é %d, você é menor de idade. \n", idade1);
    }

    return 0;
}