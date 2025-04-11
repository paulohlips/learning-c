#include <stdio.h>

int main() {
  float vector[20], result[20], x;

  for (int i = 0; i <= 19; i++) {
    scanf("%f", &x);
    vector[i] = x;
  }

  for (int i = 0; i <= 19; i++) {
    result[i] = vector[i] * vector[i];
  }

  for (int i = 0; i <= 19; i++) {
    printf("%f ", result[i]);
  }

  return 0;
}