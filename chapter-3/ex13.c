#include <stdio.h>
#include <math.h>

/*
para formatar usando gcc no terminar foi necessário adicionar a flag -lm para que o compilador fizesse o link (adicionasse)
a lib math.h no programa compilado e assim fosse possível usar sqrt() (square root/raiz quadrada) e pow() (power/potência):

gcc ex13.c -lm && ./a.out
*/
int main() {
  float a, b;
  scanf("%f %f", &a, &b);
  float h = sqrt(pow(a, 2) + pow(b, 2));
  printf("%f \n", h);
  return 0;
}