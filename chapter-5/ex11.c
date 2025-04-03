#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  for (int i = 1; i <= x; i++) {
    if (x < 0) {
      break;
    }

    if (x % i == 0) {
      printf("%d \n", i);
    }
  }
  return 0;
}