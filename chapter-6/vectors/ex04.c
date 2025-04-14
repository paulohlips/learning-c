#include <stdio.h>

int main() {
  float A[6] = {1, 0, 5, -2, -5, 7};

  printf("%f, %f, %f  \n \n ", A[0], A[1], A[5]);

  A[4] = 100;

  for (int i = 0; i <= 5; i++) {
    printf("%f\n", A[i]);
  }

  return 0;
}