#include <stdio.h>

int main() {
  int matrix[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        matrix[i][j] = 1;
      } else {
        matrix[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("[%d][%d] - %d \n", i, j, matrix[i][j]);
    }
  }

  return 0;
}
