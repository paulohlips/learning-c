#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  printf("%d * 2 = %d \n", x, x << 1);
  printf("%d / 2 = %d \n", x, x >> 1);
  return 0;
}