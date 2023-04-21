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

    //==> If e else resultante da escolha acima
    if (estadoCivil == 's' || estadoCivil == 'S')
    {
        printf("Sua escolha e solteiro \n ");
    }
    else if (estadoCivil == 'c' || estadoCivil == 'C')
    {
        printf("Sua escolha é casado \n ");
    }
    else if (estadoCivil == 'd' || estadoCivil == 'D')
    {
        printf("Sua escolha é divorciado \n");
    }
    else if (estadoCivil == 'v' || estadoCivil == 'V')
    {
        printf("Sua escolha é viúvo \n");
    }
    else if (estadoCivil == 'a', 'b', 'c', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 't', 'u', 'w', 'x', 'y', 'z', 'ç' || estadoCivil == 'A', 'B', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'T', 'U', 'W', 'X', 'Y', 'Z', 'Ç')
    {
        printf("Opção inválida \n");
    }

    return 0;
}