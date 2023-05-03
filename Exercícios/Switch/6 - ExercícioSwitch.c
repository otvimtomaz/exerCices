#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    //==> Declaração da variável
    char estadoCivil;

    //==> Texto que o usuário vai ver
    printf("Estado civil: \n");
    printf(" s - solteiro \n");
    printf(" c - casado \n");
    printf(" d - divorciado \n");
    printf(" v - viúvo \n");

    //==> Escolha da opção
    printf(" Escolha uma opção (s, c, d ou v): ");
    scanf("%c", &estadoCivil);

    //==> Switch resultante da escolha acima
    switch (estadoCivil)
    {
    case 's':
    case 'S':
        printf("Sua escolha é solteiro \n");
        break;
    case 'c':
    case 'C':
        printf("Sua escolha é casado \n");
        break;
    case 'd':
    case 'D':
        printf("Sua escolha é divorciado \n");
        break;
    case 'v':
    case 'V':
        printf("Sua escolha é viúvo \n");
        break;
    default:
        printf("Opção inválida \n");
        break;
    }

    return 0;
}
