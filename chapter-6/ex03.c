#include <stdio.h>

int main() {
  int numbers[4], x, sum;

  for (int i = 0; i <= 4; i++) {
    scanf("%d", &x);
    numbers[i] = x;
    sum += x;
  }

  for (int i = 4; i >= 0; i--) {
    printf("%d ", numbers[i]);
  }

  printf("average: %d ", sum / 4);
  return 0;
}