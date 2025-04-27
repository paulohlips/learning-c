#include <stdio.h>

void printChar(int x) {
  for (int i = 1; i <= 2 * x - 1; i++) {

    if (i <= x) {
      for (int j = 1; j <= i; j++) {
        printf("*");
      }
    } else {
      for (int j = 2 * x - i; j > 0; j--) {
        printf("*");
      }
    }
    printf("\n");
  }
}

int main() {
  int x;

  scanf("%d", &x);

  printChar(x);
  return 0;
}