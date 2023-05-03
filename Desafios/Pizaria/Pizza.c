#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // Necessário para usar a função strcmp()

int main()
{
    int sabor;
    char borda[20]; // String para armazenar a escolha da borda
    float preco_ingrediente, preco_pizza, preco_borda, preco_total;

    printf("\nBem vindo a Pizzaria Borda-quente");
    printf("\nEscolha o seu sabor de Pizza:\n");
    printf("\n1 - Peperoni (preço: R$ 35)");
    printf(" - Ingredientes: Molho de tomate, mussarela, pepperoni, azeitonas");
    printf("\n2 - Mussarela (preço: R$ 30)");
    printf(" - Ingredientes: Molho de tomate, mussarela, azeitonas");
    printf("\n3 - Margarita (preço: R$ 25)");
    printf(" - Ingredientes: Molho de tomate, mussarela, manjericão fresco");
    printf("\n4 - Fritas com cheddar (preço: R$ 40)");
    printf(" - Ingredientes: Molho de tomate, mussarela, batatas fritas, cheddar");

    printf("\nEscolha o seu sabor: ");
    scanf("%d", &sabor);

    switch (sabor)
    {
    case 1:
        preco_ingrediente = 10; // Preço do peperoni
        preco_pizza = 35;
        break;

    case 2:
        preco_ingrediente = 8; // Preço da mussarela
        preco_pizza = 30;
        break;

    case 3:
        preco_ingrediente = 6; // Preço da margarita
        preco_pizza = 25;
        break;

    case 4:
        preco_ingrediente = 12; // Preço das fritas com cheddar
        preco_pizza = 40;
        break;

    default:
        printf("Escolha um sabor de pizza.");
        return 0;
    }

    printf("\nCom borda ou sem borda (use: sem borda e com borda): ");
    scanf("%s", borda); // Lê a escolha da borda como uma string

    if (strcmp(borda, "com borda") == 0)
    {
        preco_borda = 5; // Preço da borda
        preco_total = preco_pizza + preco_ingrediente + preco_borda;
        printf("\nSua pizza será de sabor %d c/borda, no valor de R$ %.2f.", sabor, preco_total);
    }
    else if (strcmp(borda, "sem borda") == 0)
    {
        preco_borda = 0; // Sem cobrar pela borda
        preco_total = preco_pizza + preco_ingrediente;
        printf("\nSua pizza será de sabor %d s/borda, no valor de R$ %.2f.", sabor, preco_total);
    }
    else
    {
        printf("Escolha uma opção válida para a borda.");
        return 0;
    }

    return 0;
}