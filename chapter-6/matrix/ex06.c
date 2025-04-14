#include <stdio.h>

int main() {
  int matrix[3][3] = {11, 21, 30, 4, 5, 6, 7, 8, 2};
  int sum = 0;

  for (int j = 0; j < 3; j++) {
    sum += matrix[j][j];
  }
  printf("The sum is %d.", sum);
  return 0;
}