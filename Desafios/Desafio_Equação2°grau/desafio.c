#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() // ==> Programa de equação de 2°.
{
    setlocale(LC_ALL, "");
    // ==> Declarando a variável.
    float n1, n2, n3, r1, r2, r3, r4, r5, x1, x2;
    double quatro = 4, dois = 2;

    // ==> Digitando os Valores.
    printf("Digite o valor de A:");
    scanf("%f", &n1);
    printf("Digite o valor de B:");
    scanf("%f", &n2);
    printf("Digite o valor de C:");
    scanf("%f", &n3);

    printf("Sua equação ficou %.0fX² + %.0fx = %.0f \n", n1, n2, n3);
    printf("A equação de delta é: Δ = b² – 4ac \n");
    printf("Então nossa conta vai ficar: %.0f² - 4 * %.0f * %.0f \n", n1, n2, n3);

    // ==> Contas de Bhaskara.
    r1 = pow(n2, dois);
    printf("%.0f * %.0f = %.0f \n", n2, r1);

    r2 = quatro * (n1 * n3);
    printf(" %.0f * %.0f * %.0f = %.0f \n", quatro, n1, n3, r2);

    r3 = r2 - r1;
    printf(" %.0f - %.0f = %.0f \n", r2, r1, r3);

    // ==> Valor de Delta.
    printf(" O valor de delta é: %.0f \n", r3);

    printf("Agora, precisamos achar a solução, sua equação é: x = (- b ± √Δ / (2a) \n");
    printf(" Então temos x = - %.0f ± √%.0f / 2.%0.f \n", n2, r3, n1);

    // ==> Contas da Solução.
    r4 = sqrt(r3);
    r5 = dois * n1;

    // ==> Conta final de X
    printf(" A nossa equação fica: - %.0f ± √%.0f / %0.f \n", n2, r4, r5);

    // ==> Valores de X
    printf("Agora que nossa conta está montada, vamos achar os valores de x1 e x2 \n");
    x1 = (n2 + r4) / r5;
    x2 = (n2 - r4) / r5;

    printf(" Com isso, os resultador de x1 = %0.f, x2 = %0.f \n", x1, x2);
    printf(" A nossa solução é: %.0f, %.0f \n", x1, x2);

    // ==> Acaba por aqui.
    system('pause');
}