#include <stdlib.h>
#include <stdio.h>
#define PI 3.14567

void main () {
   //Dúvida: Porque não colocamos o valor de R. Pois já declaramos seu valor, e se vermos abaixo, ja colocamos 
   // todos os valores Então só precisamos do printf para mostrar o resultado da operação

   double c, r;

   r = 5; // Aqui ja declaramos o Valor de "R"
   c = 2 * PI * r ;//Nesse caso, importamos o PI do " Define" e colocamos para multiplicar
   printf ("O comprimento da circunferência = %f \n", c);
   system("pause");

}