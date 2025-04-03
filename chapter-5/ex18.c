#include <stdio.h>

int main() {
  int x;

  scanf("%d", &x);

  if (x == 2) {
    printf("É primo");
  }

  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      if (i != 1 && i != x) {
        printf("Não é primo");
        break;
      }

    } else {
      printf("É primo");
      break;
    }
  }

  return 0;
}