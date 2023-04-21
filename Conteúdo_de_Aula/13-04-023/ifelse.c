#include <stdio.h>
#include <math.h>

int main()
{
    char nome[50];
    int n1, n2, n3, n4, media;

    printf("Digite o nome do aluno: ");
    gets(nome);
    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);
    printf("Digite a quarta nota: ");
    scanf("%d", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6)
    {
        printf(" \n Sua nota foi suficiente: %d....", media);
        printf("Parabéns, você foi aprovado na matéria");
    }
    else if (media < 6 || media <= 3)

    {
        printf(" \n Sua nota foi suficiente?.... %d", media);
        printf("\n Que pena, voce está de recuperação.");
    }
    else if (media < 3)
    {
        printf("\n Sua nota foi suficiente?.... %d", media);
        printf("\n MEU DEU COMO É BURRO, REPROVADO");
    }

    return 0;
}