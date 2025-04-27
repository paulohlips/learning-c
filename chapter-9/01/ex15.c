#include <stdio.h>

void printChar(int x) {
  for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= i; j++) {
      printf("!");
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