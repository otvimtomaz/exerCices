#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6 // Critério de parada para o método de Newton

double f(double a, double b, double c, double d, double x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

double f_deriv(double a, double b, double c, double x)
{
    return 3 * a * pow(x, 2) + 2 * b * x + c;
}

double newton_raphson(double a, double b, double c, double d, double x)
{
    double h = f(a, b, c, d, x) / f_deriv(a, b, c, x);
    while (fabs(h) >= EPSILON)
    {
        h = f(a, b, c, d, x) / f_deriv(a, b, c, x);

        // Atualiza a estimativa de x
        x = x - h;
    }
    return x;
}

int main()
{
    double a, b, c, d;
    printf("Digite os coeficientes da equação de terceiro grau (ax^3 + bx^2 + cx + d): \n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("d: ");
    scanf("%lf", &d);

    double x0;
    printf("Digite o valor inicial para x: ");
    scanf("%lf", &x0);

    double raiz = newton_raphson(a, b, c, d, x0);

    printf("Uma raiz da equação é: %.4lf\n", raiz);

    return 0;
}
