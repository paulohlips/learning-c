#include <stdio.h>

int main() {
  int x, previous = 0, current = 0;

  scanf("%d", &x);

  for (int i = 0; i <= x; i++) {
    if (i == 0) {
      printf("%d \n", 0);
      continue;
    }

    if (i == 1) {
      printf("%d \n", 1);
      continue;
    }

    if (i == 2) {
      previous = 1;
      current = 1;
      printf("%d \n", 1);
      continue;
    }

    int next = previous + current;
    printf("%d \n", next);
    previous = current;
    current = next;
  }
  return 0;
}