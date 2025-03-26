#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int centena = x/100;
  int dezena = (x/10) % 10;
  int unidade = x%10;

  printf("%d%d%d \n", unidade, dezena, centena);
  return 0;
}