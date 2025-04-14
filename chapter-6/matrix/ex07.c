#include <stdio.h>

int main() {
  int matrix[3][3] = {11, 21, 1, 4, 1, 6, 1, 8, 2};
  int sum = 0;

  for (int i = 0; i < 3; i++) {
    sum += matrix[i][3 - 1 - i];
  }
  printf("The sum is %d.", sum);
  return 0;
}