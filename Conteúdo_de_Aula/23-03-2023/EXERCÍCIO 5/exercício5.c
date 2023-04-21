#include <stdio.h>
#include <stdlib.h>
#include <math.h> // ==> Biblioteca para conseguir usar a matemática.

void main() // ==> Precisa usar o "0" caso seja %, ent 15% = 0.15.
{
    char nome[50];
    float n1, n2, r1;

    printf("Informe o nome do vendedor:");
    gets(nome); // ==> Usado quando tem char [50].
    printf("Informe o salario minimo:");
    scanf("%f", &n1);
    printf("Informe o valor total das vendas efetuadas no mes:");
    scanf(" %f", &n2);

    r1 = n1 + (n2 * 0.15); //  ==> Estava errado pois tinha que multiplicar pelo 15% (0.15), estava fazendo
                           // ==> "n1 / 15", e não precisava de 2 resultados.

    printf("O vendedor(a) %s recebeu no final do mes: %.2f \n", nome, r1); // ==> Deu ruim pois faltou o "nome e o \n".
    system('pause');
}