#include <stdio.h>

int main() {
  int matrix[3][3] = {11, 21, 30, 4, 5, 6, 7, 8, 0};
  int smallest = 10;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (matrix[i][j] < smallest) {
        smallest = matrix[i][j];
      }
    }
  }
  printf("The smallest is %d.", smallest);
  return 0;
}