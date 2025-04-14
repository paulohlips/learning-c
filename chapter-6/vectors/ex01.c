#include <stdio.h>

int main() {
  int numbers[5], x;

  for (int i = 0; i <= 5; i++) {
    scanf("%d", &x);
    numbers[i] = x;
  }

  for (int i = 0; i <= 5; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}