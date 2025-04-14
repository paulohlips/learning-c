#include <stdio.h>

int main() {
  int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 2};
  int result[3];

  for (int i = 0; i < 3; i++) {
    result[0] += matrix[i][0];
    result[1] += matrix[i][1];
    result[2] += matrix[i][2];
  }

  for (int i = 0; i < 3; i++) {
    printf("[%d] - %d \n", i, result[i]);
  }
  return 0;
}