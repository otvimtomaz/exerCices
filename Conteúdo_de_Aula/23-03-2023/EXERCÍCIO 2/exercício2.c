#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    char nome[50]; // Não deu certo com só char, coloca esse em cadeia pois vai armazenar mais de 1 caractere
    float n1, n2, n3, n4, r1;

    printf("Digite o nome de aluno :");
    gets(nome); // A gente tinha feito certo, so esquecemos de mudar o "%s" lá em baixo

    printf(" Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a segunda nota:");
    scanf("%f", &n2);
    printf("Digite a terceira nota:");
    scanf("%f", &n3);
    printf("Digite a quarta nota:");
    scanf("%f", &n4);

    r1 = (n1 + n2 + n3 + n4) / 4; // Aqui existe ordem de prioridade, precisa colocar em () a soma pois na prioridade
                                  //  A divisão vem primeiro, então faz que nem no ex
    printf("O aluno %s teve a nota: %f \n", nome, r1);
    system('pause');
}