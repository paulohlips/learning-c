#include <stdio.h>

int main() {
  int x, i;

  scanf("%d", &x);
  i = x;

  while (i >= 0) {
    printf("%d \n", i);
    i--;
  }

  return 0;
}