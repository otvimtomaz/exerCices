#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> // Esse include é especifico para quando usamos o BOOl

void main () {
    // Mostra verdadeiro ou falso
    bool v, f;

    //Precisa declarar os valores
    v = true;
    f = false;

    // No exemplo, mostra o 1 para o valor verdadeiro, e o f para o errado, da para ver dps do nome
    printf(" O melhor time de Valorant é a Loud %d\n", v);
    printf (" O melhor time e a Optic %d\n", f);
    system("pause");
    // 0 = falso
    // 1 = verdadeiro

}