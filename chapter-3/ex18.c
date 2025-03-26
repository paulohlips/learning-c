#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("Deslocamento à esquerda (%d << %d): %d\n", x, y, x << y);
  printf("Deslocamento à direita (%d >> %d): %d\n", x, y, x >> y);
  return 0;
}