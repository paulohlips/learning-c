#include <stdio.h>

int main() {
  float matrix[4][4] = {-1, 21, -30, 4,  5,  6,  7,  8,
                        9,  10, 111, 12, 13, 14, 15, 16};
  int negatives = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (matrix[i][j] < 0) {
        negatives++;
      }
    }
  }
  printf("%d.", negatives);
  return 0;
}