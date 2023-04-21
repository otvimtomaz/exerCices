#include <stdio.h>
#include <stdlib.h>

void main () {
    //Caso não tivesse o [50], poderia usar o printf em vez do gets
    char nome [50];
    char sexo;

    printf ("Digite o nome: ");
    gets (nome); // O gets é usado quando temos o "char" com um valor, ex: char nome [50], é usado no lugar do printf
    printf ("Digite o sexo: ");
    scanf ("%c", &sexo);
    printf ("\n O nome digitado foi %s e o sexo foi %c \n ", nome, sexo);
    system ("pause");
}