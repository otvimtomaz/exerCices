#include <stdio.h> // Tag para incluir o printf e o scanf
#include <locale.h> // Tag para incluir biblioteca de caracteres (O gcc não tem)
#include <stdlib.h> //Biblioteca referente aos comandos do windows

// Exemplo de lógica com o int (inteiro)
void main () { // O "Main" seria como a tela inicial //
    setlocale(LC_ALL, ""); 
    int numero; //Primeiro passo:
    printf("Coloque algum valor"); //printf serve para mostrar algo pro usuário
    scanf("%d", &numero); // scanf ("formato", &variável)
    printf("Numero digitado: %d \n", numero); 
    system("pause"); //Tag referente ao stdlib.h para ver no Windows
}   