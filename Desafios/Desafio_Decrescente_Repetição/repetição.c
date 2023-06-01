#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int main()
{

    //==> Declarando as variáveis
    float n1, n2;
    char opcao;

    //==> "Do" = faça
    do
    {

        //=>Declarando os números
        printf("Insira o primeiro número: \n");
        scanf("%f", &n1);

        printf("Insira o segundo número: \n");
        scanf("%f", &n2);

        if (n1 <= n2)
        {
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
            printf("Opção inválida\n");
        }
        //==> Precisa colocar o " " no %c pois com o char o laço não vai se repetir, porque o C considera
        //==> Tudo como caracter
        printf("Deseja fazer novamente (F) ou sair (S)? ");
        scanf(" %c", &opcao);

    } while (opcao != 'S' && opcao != 's');

    printf("Encerrado o sistema.\n");

    return 0;
}