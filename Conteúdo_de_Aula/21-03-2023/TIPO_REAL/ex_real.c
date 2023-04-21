#include <stdio.h> // Tag para incluir o printf e o scanf
#include <locale.h> // Tag para incluir biblioteca de caracteres (O gcc não tem)
#include <stdlib.h> //Biblioteca referente aos comandos do windows

void main () {
    float num; // Primeiro passo, o FLOAT serve para mostrar números que tem parte fracionária

    printf("Digite um numero:"); //Esse printf é para pedir o 1 numero pro usuário

    scanf("%f", &num); //Esse scanf usa a variável do float (%f) e coloca a variável junto a ele
    printf("O numero digitado foi %f \n", num); // Ai nesse bomba aqui mostra o valor que ele digitou no primeiro Printf
    system("pause"); // Avisa o sistema que acabou por aqui
}


