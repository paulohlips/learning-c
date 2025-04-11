#include <stdio.h>

int main() {
  float numbers[10], x, sum = 0;
  int negativeNumbers = 0;

  for (int i = 0; i <= 9; i++) {
    scanf("%f", &x);
    numbers[i] = x;
  }

  for (int i = 0; i <= 9; i++) {
    if (numbers[i] > 0) {
      sum += numbers[i];
    } else {
      negativeNumbers++;
    }
  }

  printf("Sum: %f, negatives: %d", sum, negativeNumbers);
  return 0;
}